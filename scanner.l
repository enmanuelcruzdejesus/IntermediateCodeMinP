D [0-9]
w [a-zA-Z0-9_]
iconst [0-9]{D}*
rconst {D}*"."{D}+

%{
#include <stdio.h>
#include <stdlib.h>
#include "type_ch.h"
#include "parser.h"

extern int level;
extern int p;

%}

%option noyywrap
%option case-insensitive
%option yylineno

%%
program                          return _PROGRAM;
endvars                          return _ENDVARS;
endprocs                         return _ENDPROCS;
variables                        return _VARIABLES;
novariables                      return _NOVARIABLES;
procedures                       return _PROCEDURES;
noprocedures                     return _NOPROCEDURES;
begin                            return _BEGIN;
for                             {level++; return _FOR;}
while                           {level++; return _WHILE;}
to                               return _TO;
do                               return _DO;
if                               return _IF;
then                             return _THEN;
else                             return _ELSE;
"["                              return _LBRACK;
"]"                              return _RBRACK;
":"                              return _COLON;
","                              return _COMMA;
":="                             return _ASSIGN;
"+"                              return _PLUS;
"-"                              return _MINUS;
"*"                              return _MULT;
"/"                              return _DIVIDE;
"="                              return _EQL;
"<"                              return _LESS;
">"                              return _GTR;
"<="                             return _LEQ;
">="                             return _GEQ;
"<>"                             return _NEQ;
";"                              return _SEMI;
"("                              return _LPAREN;
")"                              return _RPAREN;
read                             return _READ;
write                            return _WRITE;
integer                          return _INTEGER;
string                           return _STRING;
real                             return _REAL;
procedure                        {level++; p = 1; return _PROCEDURE;}
end                              {level--; return _END;}
{iconst}                         { yylval.int_val = atoi(yytext); return _ICONST;}
{rconst}                         { yylval.real_val = atof(yytext); return _RCONST;}
[a-zA-Z_]{w}*                    { yylval.string_val = strdup(yytext); return _ID;}
\"[^"]*\"|\'[^']*\'|true|false   { yylval.string_val = strdup(yytext); return _LITERAL;}
\{([^}]+)\}                      ;  /* Ignore comments */
[ \t\n]                ;
%%
