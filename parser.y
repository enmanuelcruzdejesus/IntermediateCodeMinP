%{
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>
#include "globals.h"
#include "sym_table.h"
#include "type_ch.h"

using namespace std;

// Funciones para errores
void yyerror(string s);
void yyerror_variable(string s, string var);

// Variables globales
int level = 1;
int p = 0;

// Tabla de simbolos
unordered_map<string, var_data > s_table;

// Stack
stack<unordered_map<string, var_data > > st;

ofstream usos ("usos.txt");

extern string typeName[5];
extern "C"
{
	int yyparse(void);
	int yylex(void);  
	int yywrap()
	{
		return 1;
	}
}

%}

%union {
	int int_val;
	float real_val;
	char* string_val;
	TipoEnum tipo;
};

%token <number> _ICONST
%token <real> _RCONST
%token <string_val> _PROGRAM _ENDVARS _ENDPROCS _VARIABLES _NOVARIABLES _INTEGER _REAL _STRING _PROCEDURES _NOPROCEDURES _PROCEDURE _BEGIN _END _FOR _TO _DO _IF _THEN _ELSE _READ _WRITE _ID _LITERAL _LBRACK _RBRACK _LPAREN _RPAREN _SEMI _COLON _COMMA _ASSIGN _PLUS _MINUS _MULT _DIVIDE _EQL _LESS _GTR _LEQ _GEQ _NEQ _WHILE
%type <string_val> ptitle
%type <tipo> expr term fac val ids

%%

E : program
	;

program : 
	title _SEMI block
	;

title : 
	_PROGRAM _ID 
	{
		// Agrega la primera tabla al stack
		st.push(s_table);

		usos << "USOS DE VARIABLES EN EL TEST " << $2 << endl;
	}
	;

block :
	vars _ENDVARS procs _ENDPROCS code
	;

procs : _PROCEDURES proclist
	| _NOPROCEDURES
	;

proclist : 
	proclist _SEMI procdef
	|
	procdef
	;

procdef :
	ptitle _SEMI block
	;

ptitle :
	_PROCEDURE _ID _LPAREN varlist _RPAREN
	{
		auto cur_level_t = st.top();
		st.pop();		
		st.top().insert({$2, {level-1, Procedure}});
		st.push(cur_level_t);
	}
	|
	_PROCEDURE _ID _LPAREN _RPAREN
	{
		st.top().insert({$2, {level-1, Procedure}});
	}
	;

vars : _VARIABLES varlist _SEMI
	| _NOVARIABLES
	;

varlist : 
	varlist _SEMI vardef
	|
	vardef
	;

vardef : 
    _ID _COLON _INTEGER
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string($1);
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << $1 << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, Integer}});
		}

    }
    |
    _ID _COLON _REAL
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string($1);
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << $1 << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, Real}});
		}
    }
    |
	_ID _COLON _INTEGER bnl
	{
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string($1);
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << $1 << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, Integer}});
		}

	}
	|
    _ID _COLON _STRING
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string($1);
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << $1 << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, String}});
		}
    }
    ;

bnl :
	_LBRACK nlist _RBRACK
	;

nlist :
	nlist _COMMA _ICONST
	|
	_ICONST
	;

code :
	_BEGIN para _END
	{
		int size = st.size();
		if (size > 0)
		{
			cout << "TABLA NIVEL " << size << endl;
			print_table(st.top());
			cout << "FIN TABLA NIVEL " << size << endl;
			st.pop();
		}
	}
	|
	_SEMI
	;

para : 
	para _SEMI stmt
	|
	stmt
	;

stmt : 
	assign
	|
	cond
	|
	loop
	|
	input
	|
	output
	|
	code
	;

loop :
	_FOR assign _TO expr _DO stmt
	{

	}
	|
	_WHILE expr bop expr _DO stmt
	{

	}
	;

cond :
	_IF expr bop expr _THEN stmt _ELSE stmt
	{
	}
	;

bop : 
	_EQL
	|
	_LESS
	|
	_GTR
	|
	_LEQ
	|
	_GEQ
	|
	_NEQ
	;


expr :
	expr _PLUS term
	{
		TipoEnum tipo = type_check($1, $3);
		if (tipo == Error)
		{
			//yyerror("Error de tipos"); // N HALT
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			$$ = tipo;
		}
	}
	|
	expr _MINUS term
	{
		TipoEnum tipo = type_check($1, $3);
		if (tipo == Error)
		{
			//yyerror("Error de tipos");
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			$$ = tipo;
		}
	}
	|
	term
	;

term :
	term _MULT fac
	{
		TipoEnum tipo = type_check($1, $3);
		if (tipo == Error)
		{
			//yyerror("Error de tipos");
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			$$ = tipo;
		}
	}
	|
	term _DIVIDE fac
	{
		TipoEnum tipo = type_check($1, $3);
		if (tipo == Error)
		{
			//yyerror("Error de tipos");
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			$$ = tipo;
		}
	}
	|
	fac
	;

fac : 
	val
	{
		$$ = $1;
	}
	|
	_LPAREN expr _RPAREN
	{
	}
	;


vallist :
	vallist _COMMA it
	|
	it
	;

val : 
	ids
	{
		$$ = $1;
	}
	|
	_ID _LPAREN vallist _RPAREN
	{
		$$ = Procedure;
	}
	|
	_ICONST
	{
		$$ = Integer;
	}
	|
	_RCONST
	{
		$$ = Real;
	}
	|
	_LITERAL
	{
		$$ = String;
	}
	;


it : 
	_ID
	{
	}
	|
	_ICONST
	{
	}
	;

assign:
	ids _ASSIGN expr
	{

	}
    ;

ids:
	_ID
	{
		// Undeclared variable check
		string lexeme = string($1);
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Stack Copy
		stack<unordered_map<string, var_data > > st_copy(st);
		int f = 0;
		
		while (!st_copy.empty())
		{
			if (lookup(st_copy.top(), lexeme))
			{
				f = 1;
				break;
			}
			st_copy.pop();
		}

		if (usos.is_open())
		{
			// Undeclared variable check
			if (!f)
			{
				//yyerror_variable("Variable no declarada", $1);
				cout << "ERROR Linea " << yylineno << " -> Variable no declarada: " << $1 << endl;
				usos << "Uso Variable no declarada: " << $1 << "\tLinea: " << yylineno << endl;
				$$ = Error;
			}
			else
			{
				auto el = st_copy.top().find({lexeme});
				$$ = el->second.tipo;
				usos << "Uso Variable declarada: " << $1 << "\tLinea: " << yylineno << "\tTipo: " << typeName[el->second.tipo] << "\tNivel: " << el->second.level << endl;
			}
		}
		else
		{
			yyerror("FILE usos.txt IS NOT OPEN, PROGRAM WILL HALT TO AVOID FUTURE HEADACHE");
		}

	}
	|
	_ID _LBRACK vallist _RBRACK
	{
	}
	;

input : 
     _READ _LPAREN ids _RPAREN
     {
     }
     ;

output : 
     _WRITE _LPAREN ids _RPAREN
     {
     }
     | 
     _WRITE _LPAREN _LITERAL _RPAREN
     {
     }
     ;
	
%%

void yyerror(string s) {
	fprintf(stderr, "ERROR linea %d -> %s\n", yylineno, s.c_str());
	exit(1);
}

void yyerror_variable(string s, string var)
{
	fprintf(stderr, "ERROR linea %d: %s -> %s\n", yylineno, s.c_str(), var.c_str());
	exit(1);
}


int main() {
    yyparse();
    return 0;
}

