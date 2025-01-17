/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

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



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 44 "parser.y"
{
	int int_val;
	float real_val;
	char* string_val;
	TipoEnum tipo;
}
/* Line 193 of yacc.c.  */
#line 238 "parser.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 251 "parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   131

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     9,    12,    18,    21,    23,    27,
      29,    33,    39,    44,    48,    50,    54,    56,    60,    64,
      69,    73,    77,    81,    83,    87,    89,    93,    95,    97,
      99,   101,   103,   105,   107,   114,   121,   130,   132,   134,
     136,   138,   140,   142,   146,   150,   152,   156,   160,   162,
     164,   168,   172,   174,   176,   181,   183,   185,   187,   189,
     191,   195,   197,   202,   207,   212
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,    49,    -1,    50,    32,    51,    -1,     5,
      26,    -1,    56,     6,    52,     7,    61,    -1,    13,    53,
      -1,    14,    -1,    53,    32,    54,    -1,    54,    -1,    55,
      32,    51,    -1,    15,    26,    30,    57,    31,    -1,    15,
      26,    30,    31,    -1,     8,    57,    32,    -1,     9,    -1,
      57,    32,    58,    -1,    58,    -1,    26,    33,    10,    -1,
      26,    33,    11,    -1,    26,    33,    10,    59,    -1,    26,
      33,    12,    -1,    28,    60,    29,    -1,    60,    34,     3,
      -1,     3,    -1,    16,    62,    17,    -1,    32,    -1,    62,
      32,    63,    -1,    63,    -1,    73,    -1,    65,    -1,    64,
      -1,    75,    -1,    76,    -1,    61,    -1,    18,    73,    19,
      67,    20,    63,    -1,    46,    67,    66,    67,    20,    63,
      -1,    21,    67,    66,    67,    22,    63,    23,    63,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    44,    -1,
      45,    -1,    67,    36,    68,    -1,    67,    37,    68,    -1,
      68,    -1,    68,    38,    69,    -1,    68,    39,    69,    -1,
      69,    -1,    71,    -1,    30,    67,    31,    -1,    70,    34,
      72,    -1,    72,    -1,    74,    -1,    26,    30,    70,    31,
      -1,     3,    -1,     4,    -1,    27,    -1,    26,    -1,     3,
      -1,    74,    35,    67,    -1,    26,    -1,    26,    28,    70,
      29,    -1,    24,    30,    74,    31,    -1,    25,    30,    74,
      31,    -1,    25,    30,    27,    31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    59,    59,    63,    67,    77,    80,    81,    85,    87,
      91,    95,   103,   109,   110,   114,   116,   120,   146,   171,
     197,   224,   228,   230,   234,   246,   250,   252,   256,   258,
     260,   262,   264,   266,   270,   275,   282,   288,   290,   292,
     294,   296,   298,   303,   317,   331,   335,   349,   363,   367,
     372,   379,   381,   385,   390,   395,   400,   405,   413,   417,
     423,   430,   474,   480,   486,   490
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_ICONST", "_RCONST", "_PROGRAM",
  "_ENDVARS", "_ENDPROCS", "_VARIABLES", "_NOVARIABLES", "_INTEGER",
  "_REAL", "_STRING", "_PROCEDURES", "_NOPROCEDURES", "_PROCEDURE",
  "_BEGIN", "_END", "_FOR", "_TO", "_DO", "_IF", "_THEN", "_ELSE", "_READ",
  "_WRITE", "_ID", "_LITERAL", "_LBRACK", "_RBRACK", "_LPAREN", "_RPAREN",
  "_SEMI", "_COLON", "_COMMA", "_ASSIGN", "_PLUS", "_MINUS", "_MULT",
  "_DIVIDE", "_EQL", "_LESS", "_GTR", "_LEQ", "_GEQ", "_NEQ", "_WHILE",
  "$accept", "E", "program", "title", "block", "procs", "proclist",
  "procdef", "ptitle", "vars", "varlist", "vardef", "bnl", "nlist", "code",
  "para", "stmt", "loop", "cond", "bop", "expr", "term", "fac", "vallist",
  "val", "it", "assign", "ids", "input", "output", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    52,    52,    53,    53,
      54,    55,    55,    56,    56,    57,    57,    58,    58,    58,
      58,    59,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    63,    63,    63,    64,    64,    65,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    68,    68,    68,    69,
      69,    70,    70,    71,    71,    71,    71,    71,    72,    72,
      73,    74,    74,    75,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     2,     5,     2,     1,     3,     1,
       3,     5,     4,     3,     1,     3,     1,     3,     3,     4,
       3,     3,     3,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     8,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     1,
       3,     3,     1,     1,     4,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     0,     4,     1,     0,     0,    14,
       3,     0,     0,     0,    16,     0,     0,    13,     0,     7,
       0,    17,    18,    20,    15,     0,     6,     9,     0,     0,
       0,    19,     0,     0,     0,     0,    25,     5,    23,     0,
       0,     8,    10,     0,     0,     0,     0,    61,     0,    33,
       0,    27,    30,    29,    28,     0,    31,    32,    21,     0,
      12,     0,     0,    55,    56,    61,    57,     0,     0,    45,
      48,    49,    53,     0,     0,     0,     0,    24,     0,     0,
      22,    11,     0,     0,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,     0,     0,     0,     0,     0,     0,
      59,    58,     0,    52,     0,    26,    60,     0,     0,    50,
      43,    44,     0,    46,    47,    63,    65,    64,    62,     0,
       0,     0,    54,     0,    51,     0,    34,     0,    35,     0,
      36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     3,     4,    10,    20,    26,    27,    28,    11,
      13,    14,    31,    39,    49,    50,    51,    52,    53,    94,
      68,    69,    70,   102,    71,   103,    54,    72,    56,    57
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -75
static const yytype_int8 yypact[] =
{
      -2,    18,    46,   -75,    55,   -75,   -75,    26,    52,   -75,
     -75,    83,    58,    63,   -75,     0,    64,    52,    84,   -75,
      91,    72,   -75,   -75,   -75,    75,    70,   -75,    71,    -5,
     101,   -75,    76,    84,    26,    -6,   -75,   -75,   -75,   -12,
      19,   -75,   -75,    79,     2,    77,    78,    81,     2,   -75,
      -1,   -75,   -75,   -75,   -75,    80,   -75,   -75,   -75,   107,
     -75,    38,    92,   -75,   -75,    49,   -75,     2,    20,    42,
     -75,   -75,   -75,    79,    56,     4,    20,   -75,    -6,     2,
     -75,   -75,    52,     2,     4,    36,     2,     2,   -75,   -75,
     -75,   -75,   -75,   -75,     2,     2,     2,    82,    85,    86,
     -75,   -75,    25,   -75,     2,   -75,    48,     5,    37,   -75,
      42,    42,   -13,   -75,   -75,   -75,   -75,   -75,   -75,     4,
      16,    -6,   -75,    -6,   -75,    -6,   -75,    89,   -75,    -6,
     -75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -75,   -75,   -75,   -75,    87,   -75,   -75,    90,   -75,   -75,
      74,   -16,   -75,   -75,    93,   -75,   -74,   -75,   -75,    43,
     -46,     6,     1,    34,   -75,     7,    88,   -35,   -75,   -75
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      55,    24,    76,     1,   105,    63,    64,   100,    55,   123,
      35,    35,    43,    18,    19,    44,    77,    58,    45,    46,
      47,    85,    59,    86,    87,   121,    36,    36,    65,    66,
     101,    78,    67,   106,     8,     9,   125,   107,    97,    99,
      48,    86,    87,    55,     5,    12,     6,   126,   112,   127,
      60,   128,    86,    87,   118,   130,    86,    87,   120,   119,
      88,    89,    90,    91,    92,    93,    24,   109,   122,    81,
      82,   119,    86,    87,    21,    22,    23,    75,    12,    84,
      95,    96,    47,    98,    86,    87,    55,     7,    55,    15,
      55,    16,   110,   111,    55,    17,   113,   114,    29,    25,
      30,    32,    33,    34,    38,    47,    40,    73,    74,    75,
      80,    83,   129,   115,    61,    79,   116,   117,   108,   104,
       0,    42,    37,    41,     0,     0,   124,     0,     0,     0,
       0,    62
};

static const yytype_int16 yycheck[] =
{
      35,    17,    48,     5,    78,     3,     4,     3,    43,    22,
      16,    16,    18,    13,    14,    21,    17,    29,    24,    25,
      26,    67,    34,    36,    37,    20,    32,    32,    26,    27,
      26,    32,    30,    79,     8,     9,    20,    83,    73,    74,
      46,    36,    37,    78,    26,    26,     0,   121,    94,   123,
      31,   125,    36,    37,    29,   129,    36,    37,   104,    34,
      40,    41,    42,    43,    44,    45,    82,    31,    31,    31,
      32,    34,    36,    37,    10,    11,    12,    28,    26,    30,
      38,    39,    26,    27,    36,    37,   121,    32,   123,     6,
     125,    33,    86,    87,   129,    32,    95,    96,     7,    15,
      28,    26,    32,    32,     3,    26,    30,    30,    30,    28,
       3,    19,    23,    31,    40,    35,    31,    31,    84,    76,
      -1,    34,    29,    33,    -1,    -1,   119,    -1,    -1,    -1,
      -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    48,    49,    50,    26,     0,    32,     8,     9,
      51,    56,    26,    57,    58,     6,    33,    32,    13,    14,
      52,    10,    11,    12,    58,    15,    53,    54,    55,     7,
      28,    59,    26,    32,    32,    16,    32,    61,     3,    60,
      30,    54,    51,    18,    21,    24,    25,    26,    46,    61,
      62,    63,    64,    65,    73,    74,    75,    76,    29,    34,
      31,    57,    73,     3,     4,    26,    27,    30,    67,    68,
      69,    71,    74,    30,    30,    28,    67,    17,    32,    35,
       3,    31,    32,    19,    30,    67,    36,    37,    40,    41,
      42,    43,    44,    45,    66,    38,    39,    74,    27,    74,
       3,    26,    70,    72,    66,    63,    67,    67,    70,    31,
      68,    68,    67,    69,    69,    31,    31,    31,    29,    34,
      67,    20,    31,    22,    72,    20,    63,    63,    63,    23,
      63
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 68 "parser.y"
    {
		// Agrega la primera tabla al stack
		st.push(s_table);

		usos << "USOS DE VARIABLES EN EL TEST " << (yyvsp[(2) - (2)].string_val) << endl;
	}
    break;

  case 11:
#line 96 "parser.y"
    {
		auto cur_level_t = st.top();
		st.pop();		
		st.top().insert({(yyvsp[(2) - (5)].string_val), {level-1, Procedure}});
		st.push(cur_level_t);
	}
    break;

  case 12:
#line 104 "parser.y"
    {
		st.top().insert({(yyvsp[(2) - (4)].string_val), {level-1, Procedure}});
	}
    break;

  case 17:
#line 121 "parser.y"
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string((yyvsp[(1) - (3)].string_val));
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << (yyvsp[(1) - (3)].string_val) << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, Integer}});
		}

    }
    break;

  case 18:
#line 147 "parser.y"
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string((yyvsp[(1) - (3)].string_val));
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << (yyvsp[(1) - (3)].string_val) << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, Real}});
		}
    }
    break;

  case 19:
#line 172 "parser.y"
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string((yyvsp[(1) - (4)].string_val));
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << (yyvsp[(1) - (4)].string_val) << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, Integer}});
		}

	}
    break;

  case 20:
#line 198 "parser.y"
    {
		if (p)
		{
			unordered_map<string, var_data> t;
			// Nuevo nivel inserta una tabla en el stack
			st.push(t); p = 0;
		}

		string lexeme = string((yyvsp[(1) - (3)].string_val));
		transform(lexeme.begin(), lexeme.end(), lexeme.begin(), ::tolower);

		// Variable redeclarada
		if (lookup(st.top(), lexeme))
		{
			//yyerror_variable("Variable redeclarada", $1);
			cout << "ERROR Linea " << yylineno << " -> Variable redeclarada: " << (yyvsp[(1) - (3)].string_val) << endl;
		}
		else
		{
			// Inserta la variable en la Tabla de Scope mas reciente
			st.top().insert({lexeme, {level, String}});
		}
    }
    break;

  case 24:
#line 235 "parser.y"
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
    break;

  case 34:
#line 271 "parser.y"
    {

	}
    break;

  case 35:
#line 276 "parser.y"
    {

	}
    break;

  case 36:
#line 283 "parser.y"
    {
	}
    break;

  case 43:
#line 304 "parser.y"
    {
		TipoEnum tipo = type_check((yyvsp[(1) - (3)].tipo), (yyvsp[(3) - (3)].tipo));
		if (tipo == Error)
		{
			//yyerror("Error de tipos"); // N HALT
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			(yyval.tipo) = tipo;
		}
	}
    break;

  case 44:
#line 318 "parser.y"
    {
		TipoEnum tipo = type_check((yyvsp[(1) - (3)].tipo), (yyvsp[(3) - (3)].tipo));
		if (tipo == Error)
		{
			//yyerror("Error de tipos");
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			(yyval.tipo) = tipo;
		}
	}
    break;

  case 46:
#line 336 "parser.y"
    {
		TipoEnum tipo = type_check((yyvsp[(1) - (3)].tipo), (yyvsp[(3) - (3)].tipo));
		if (tipo == Error)
		{
			//yyerror("Error de tipos");
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			(yyval.tipo) = tipo;
		}
	}
    break;

  case 47:
#line 350 "parser.y"
    {
		TipoEnum tipo = type_check((yyvsp[(1) - (3)].tipo), (yyvsp[(3) - (3)].tipo));
		if (tipo == Error)
		{
			//yyerror("Error de tipos");
			cout << "ERROR de tipos Linea " << yylineno << endl;
		}
		else
		{
			(yyval.tipo) = tipo;
		}
	}
    break;

  case 49:
#line 368 "parser.y"
    {
		(yyval.tipo) = (yyvsp[(1) - (1)].tipo);
	}
    break;

  case 50:
#line 373 "parser.y"
    {
	}
    break;

  case 53:
#line 386 "parser.y"
    {
		(yyval.tipo) = (yyvsp[(1) - (1)].tipo);
	}
    break;

  case 54:
#line 391 "parser.y"
    {
		(yyval.tipo) = Procedure;
	}
    break;

  case 55:
#line 396 "parser.y"
    {
		(yyval.tipo) = Integer;
	}
    break;

  case 56:
#line 401 "parser.y"
    {
		(yyval.tipo) = Real;
	}
    break;

  case 57:
#line 406 "parser.y"
    {
		(yyval.tipo) = String;
	}
    break;

  case 58:
#line 414 "parser.y"
    {
	}
    break;

  case 59:
#line 418 "parser.y"
    {
	}
    break;

  case 60:
#line 424 "parser.y"
    {

	}
    break;

  case 61:
#line 431 "parser.y"
    {
		// Undeclared variable check
		string lexeme = string((yyvsp[(1) - (1)].string_val));
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
				cout << "ERROR Linea " << yylineno << " -> Variable no declarada: " << (yyvsp[(1) - (1)].string_val) << endl;
				usos << "Uso Variable no declarada: " << (yyvsp[(1) - (1)].string_val) << "\tLinea: " << yylineno << endl;
				(yyval.tipo) = Error;
			}
			else
			{
				auto el = st_copy.top().find({lexeme});
				(yyval.tipo) = el->second.tipo;
				usos << "Uso Variable declarada: " << (yyvsp[(1) - (1)].string_val) << "\tLinea: " << yylineno << "\tTipo: " << typeName[el->second.tipo] << "\tNivel: " << el->second.level << endl;
			}
		}
		else
		{
			yyerror("FILE usos.txt IS NOT OPEN, PROGRAM WILL HALT TO AVOID FUTURE HEADACHE");
		}

	}
    break;

  case 62:
#line 475 "parser.y"
    {
	}
    break;

  case 63:
#line 481 "parser.y"
    {
     }
    break;

  case 64:
#line 487 "parser.y"
    {
     }
    break;

  case 65:
#line 491 "parser.y"
    {
     }
    break;


/* Line 1267 of yacc.c.  */
#line 1934 "parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 495 "parser.y"


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


