/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     _ICONST = 258,
     _RCONST = 259,
     _PROGRAM = 260,
     _ENDVARS = 261,
     _ENDPROCS = 262,
     _VARIABLES = 263,
     _NOVARIABLES = 264,
     _INTEGER = 265,
     _REAL = 266,
     _STRING = 267,
     _PROCEDURES = 268,
     _NOPROCEDURES = 269,
     _PROCEDURE = 270,
     _BEGIN = 271,
     _END = 272,
     _FOR = 273,
     _TO = 274,
     _DO = 275,
     _IF = 276,
     _THEN = 277,
     _ELSE = 278,
     _READ = 279,
     _WRITE = 280,
     _ID = 281,
     _LITERAL = 282,
     _LBRACK = 283,
     _RBRACK = 284,
     _LPAREN = 285,
     _RPAREN = 286,
     _SEMI = 287,
     _COLON = 288,
     _COMMA = 289,
     _ASSIGN = 290,
     _PLUS = 291,
     _MINUS = 292,
     _MULT = 293,
     _DIVIDE = 294,
     _EQL = 295,
     _LESS = 296,
     _GTR = 297,
     _LEQ = 298,
     _GEQ = 299,
     _NEQ = 300,
     _WHILE = 301
   };
#endif
/* Tokens.  */
#define _ICONST 258
#define _RCONST 259
#define _PROGRAM 260
#define _ENDVARS 261
#define _ENDPROCS 262
#define _VARIABLES 263
#define _NOVARIABLES 264
#define _INTEGER 265
#define _REAL 266
#define _STRING 267
#define _PROCEDURES 268
#define _NOPROCEDURES 269
#define _PROCEDURE 270
#define _BEGIN 271
#define _END 272
#define _FOR 273
#define _TO 274
#define _DO 275
#define _IF 276
#define _THEN 277
#define _ELSE 278
#define _READ 279
#define _WRITE 280
#define _ID 281
#define _LITERAL 282
#define _LBRACK 283
#define _RBRACK 284
#define _LPAREN 285
#define _RPAREN 286
#define _SEMI 287
#define _COLON 288
#define _COMMA 289
#define _ASSIGN 290
#define _PLUS 291
#define _MINUS 292
#define _MULT 293
#define _DIVIDE 294
#define _EQL 295
#define _LESS 296
#define _GTR 297
#define _LEQ 298
#define _GEQ 299
#define _NEQ 300
#define _WHILE 301




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 44 "parser.y"
{
	int int_val;
	float real_val;
	char* string_val;
	TipoEnum tipo;
}
/* Line 1529 of yacc.c.  */
#line 148 "parser.hpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

