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
     INTEGER = 258,
     FLOAT = 259,
     CHAR = 260,
     TYPE = 261,
     STRUCT = 262,
     RETURN = 263,
     IF = 264,
     ELSE = 265,
     FOR = 266,
     WHILE = 267,
     ID = 268,
     SPACE = 269,
     LEFT_SING = 270,
     SEMI = 271,
     COMMA = 272,
     ASSIGNOP = 273,
     RELOP = 274,
     PLUS = 275,
     MINUS = 276,
     COMADD = 277,
     COMSUB = 278,
     AUTOADD = 279,
     AUTOSUB = 280,
     STAR = 281,
     DIV = 282,
     AND = 283,
     OR = 284,
     DOT = 285,
     NOT = 286,
     LP = 287,
     RP = 288,
     LB = 289,
     RB = 290,
     LC = 291,
     RC = 292,
     AERROR = 293,
     EOL = 294,
     LOWER_THEN_ELSE = 295
   };
#endif
/* Tokens.  */
#define INTEGER 258
#define FLOAT 259
#define CHAR 260
#define TYPE 261
#define STRUCT 262
#define RETURN 263
#define IF 264
#define ELSE 265
#define FOR 266
#define WHILE 267
#define ID 268
#define SPACE 269
#define LEFT_SING 270
#define SEMI 271
#define COMMA 272
#define ASSIGNOP 273
#define RELOP 274
#define PLUS 275
#define MINUS 276
#define COMADD 277
#define COMSUB 278
#define AUTOADD 279
#define AUTOSUB 280
#define STAR 281
#define DIV 282
#define AND 283
#define OR 284
#define DOT 285
#define NOT 286
#define LP 287
#define RP 288
#define LB 289
#define RB 290
#define LC 291
#define RC 292
#define AERROR 293
#define EOL 294
#define LOWER_THEN_ELSE 295




/* Copy the first part of user declarations.  */
#line 5 "parse.y"

#include<unistd.h>
#include<stdio.h>   
#include "display.h"
int yylex();


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
#line 12 "parse.y"
{
struct ast* a;
double d;
}
/* Line 193 of yacc.c.  */
#line 188 "parse.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 201 "parse.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   345

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  41
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNRULES -- Number of states.  */
#define YYNSTATES  131

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     6,     9,    10,    14,    17,    21,
      23,    27,    29,    31,    37,    40,    42,    43,    45,    47,
      52,    56,    61,    65,    69,    71,    74,    79,    82,    85,
      86,    89,    91,    95,   101,   109,   115,   123,   126,   127,
     131,   133,   137,   139,   143,   147,   151,   155,   159,   163,
     167,   171,   175,   179,   183,   187,   190,   193,   196,   199,
     202,   205,   210,   214,   219,   223,   225,   227,   229,   231,
     235
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      42,     0,    -1,    -1,    43,    -1,    44,    43,    -1,    -1,
      46,    45,    16,    -1,    46,    16,    -1,    46,    51,    54,
      -1,    50,    -1,    50,    17,    45,    -1,     6,    -1,    47,
      -1,     7,    48,    36,    57,    37,    -1,     7,    49,    -1,
      13,    -1,    -1,    13,    -1,    13,    -1,    50,    34,     3,
      35,    -1,    50,    34,    35,    -1,    13,    32,    52,    33,
      -1,    13,    32,    33,    -1,    53,    17,    52,    -1,    53,
      -1,    46,    50,    -1,    36,    57,    55,    37,    -1,    36,
      37,    -1,    56,    55,    -1,    -1,    61,    16,    -1,    54,
      -1,     8,    61,    16,    -1,     9,    32,    61,    33,    56,
      -1,     9,    32,    61,    33,    56,    10,    56,    -1,    12,
      32,    61,    33,    56,    -1,    11,    32,    56,    56,    61,
      33,    56,    -1,    58,    57,    -1,    -1,    46,    59,    16,
      -1,    60,    -1,    60,    17,    59,    -1,    50,    -1,    50,
      18,    61,    -1,    61,    18,    61,    -1,    61,    28,    61,
      -1,    61,    29,    61,    -1,    61,    19,    61,    -1,    61,
      20,    61,    -1,    61,    21,    61,    -1,    61,    26,    61,
      -1,    61,    27,    61,    -1,    61,    22,    61,    -1,    61,
      23,    61,    -1,    32,    61,    33,    -1,    21,    61,    -1,
      31,    61,    -1,    24,    61,    -1,    25,    61,    -1,    61,
      24,    -1,    61,    25,    -1,    13,    32,    62,    33,    -1,
      13,    32,    33,    -1,    61,    34,    61,    35,    -1,    61,
      30,    13,    -1,    13,    -1,     3,    -1,     4,    -1,     5,
      -1,    61,    17,    62,    -1,    61,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    38,    38,    38,    41,    42,    45,    46,    47,    49,
      50,    53,    54,    56,    57,    59,    60,    62,    65,    66,
      67,    69,    70,    73,    74,    76,    79,    80,    83,    84,
      87,    88,    89,    90,    91,    92,    93,    96,    97,   100,
     103,   104,   107,   108,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   138,
     139
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "FLOAT", "CHAR", "TYPE",
  "STRUCT", "RETURN", "IF", "ELSE", "FOR", "WHILE", "ID", "SPACE",
  "LEFT_SING", "SEMI", "COMMA", "ASSIGNOP", "RELOP", "PLUS", "MINUS",
  "COMADD", "COMSUB", "AUTOADD", "AUTOSUB", "STAR", "DIV", "AND", "OR",
  "DOT", "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "AERROR", "EOL",
  "LOWER_THEN_ELSE", "$accept", "Program", "ExtDefList", "ExtDef",
  "ExtDecList", "Specifire", "StructSpecifire", "OptTag", "Tag", "VarDec",
  "FunDec", "VarList", "ParamDec", "Compst", "StmtList", "Stmt", "DefList",
  "Def", "DecList", "Dec", "Exp", "Args", 0
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
     295
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    41,    42,    42,    43,    43,    44,    44,    44,    45,
      45,    46,    46,    47,    47,    48,    48,    49,    50,    50,
      50,    51,    51,    52,    52,    53,    54,    54,    55,    55,
      56,    56,    56,    56,    56,    56,    56,    57,    57,    58,
      59,    59,    60,    60,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
      62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     1,     2,     0,     3,     2,     3,     1,
       3,     1,     1,     5,     2,     1,     0,     1,     1,     4,
       3,     4,     3,     3,     1,     2,     4,     2,     2,     0,
       2,     1,     3,     5,     7,     5,     7,     2,     0,     3,
       1,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     4,     3,     4,     3,     1,     1,     1,     1,     3,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,    11,    16,     0,     3,     5,     0,    12,    17,     0,
      14,     1,     4,    18,     7,     0,     9,     0,    38,     0,
       6,     0,     0,    38,     8,     0,     0,    38,    22,     0,
       0,    24,    18,    10,     0,    20,    27,    29,    42,     0,
      40,    13,    37,    25,    21,     0,    19,    66,    67,    68,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
      31,     0,    29,     0,     0,    39,     0,    23,     0,     0,
       0,     0,     0,    55,    57,    58,    56,     0,    26,    28,
      30,     0,     0,     0,     0,     0,     0,    59,    60,     0,
       0,     0,     0,     0,     0,    43,    41,    32,     0,     0,
       0,    62,    70,     0,    54,    44,    47,    48,    49,    52,
      53,    50,    51,    45,    46,    64,     0,     0,     0,     0,
       0,    61,    63,    33,     0,    35,    69,     0,     0,    34,
      36
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,    15,    25,     7,     9,    10,    16,
      17,    30,    31,    60,    61,    62,    26,    27,    39,    40,
      63,   103
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -70
static const yytype_int16 yypact[] =
{
      21,   -70,    -9,    37,   -70,    21,    33,   -70,     2,     9,
     -70,   -70,   -70,    15,   -70,    35,   -14,    24,    21,    19,
     -70,    48,     8,    17,   -70,    48,    26,    21,   -70,    48,
      31,    50,   -70,   -70,    30,   -70,   -70,    68,   -16,    53,
      57,   -70,   -70,    41,   -70,    21,   -70,   -70,   -70,   -70,
     104,    46,    51,    55,    56,   104,   104,   104,   104,   104,
     -70,    45,    68,   121,   104,   -70,    48,   -70,   138,   104,
      68,   104,    81,    96,    32,    32,    32,   191,   -70,   -70,
     -70,   104,   104,   104,   104,   104,   104,   -70,   -70,   104,
     104,   104,   104,    77,   104,   259,   -70,   -70,   208,    68,
     225,   -70,   156,    58,   -70,   276,   311,    96,    96,   276,
     276,    32,    32,   300,   288,   -70,   173,    68,   104,    68,
     104,   -70,   -70,    85,   242,   -70,   -70,    68,    68,   -70,
     -70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -70,   -70,    91,   -70,    76,    10,   -70,   -70,   -70,   -13,
     -70,    65,   -70,    84,    36,   -69,   -10,   -70,    49,   -70,
     -50,   -17
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -16
static const yytype_int16 yytable[] =
{
      68,    99,    64,    21,     8,    73,    74,    75,    76,    77,
       6,    34,    38,    37,    95,     6,    43,    42,    22,    98,
      22,   100,   102,     1,     2,     1,     2,     1,     2,    29,
     118,   105,   106,   107,   108,   109,   110,    11,   -15,   111,
     112,   113,   114,    35,   116,    18,    13,    19,   123,    14,
     125,    20,    28,    38,    36,    29,    87,    88,   129,   130,
      23,    32,    93,    41,    44,    46,    94,    45,   124,    65,
     102,    47,    48,    49,    66,    22,    50,    51,    69,    52,
      53,    54,    78,    70,    47,    48,    49,    71,    72,    55,
     115,   121,    56,    57,    54,   127,    12,    33,    79,    58,
      59,    24,    55,   126,    23,    56,    57,    47,    48,    49,
      67,     0,    58,    59,   101,    96,     0,    54,     0,     0,
      87,    88,    89,    90,     0,    55,    93,     0,    56,    57,
      94,     0,     0,     0,     0,    58,    59,    80,     0,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     0,     0,    97,    94,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,    94,   120,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
      94,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     0,     0,     0,    94,   122,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     0,     0,   104,    94,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,   117,    94,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,     0,     0,   119,    94,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,   128,    94,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       0,     0,     0,    94,    81,    82,    83,    84,     0,     0,
      87,    88,    89,    90,    91,    92,    93,    82,    83,    84,
      94,     0,    87,    88,    89,    90,    91,     0,    93,    82,
      83,    84,    94,     0,    87,    88,    89,    90,     0,     0,
      93,    83,    84,     0,    94,    87,    88,    89,    90,     0,
       0,    93,     0,     0,     0,    94
};

static const yytype_int16 yycheck[] =
{
      50,    70,    18,    17,    13,    55,    56,    57,    58,    59,
       0,     3,    25,    23,    64,     5,    29,    27,    34,    69,
      34,    71,    72,     6,     7,     6,     7,     6,     7,    19,
      99,    81,    82,    83,    84,    85,    86,     0,    36,    89,
      90,    91,    92,    35,    94,    36,    13,    32,   117,    16,
     119,    16,    33,    66,    37,    45,    24,    25,   127,   128,
      36,    13,    30,    37,    33,    35,    34,    17,   118,    16,
     120,     3,     4,     5,    17,    34,     8,     9,    32,    11,
      12,    13,    37,    32,     3,     4,     5,    32,    32,    21,
      13,    33,    24,    25,    13,    10,     5,    21,    62,    31,
      32,    17,    21,   120,    36,    24,    25,     3,     4,     5,
      45,    -1,    31,    32,    33,    66,    -1,    13,    -1,    -1,
      24,    25,    26,    27,    -1,    21,    30,    -1,    24,    25,
      34,    -1,    -1,    -1,    -1,    31,    32,    16,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    16,    34,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      34,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    34,    35,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    34,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    34,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    34,    18,    19,    20,    21,    -1,    -1,
      24,    25,    26,    27,    28,    29,    30,    19,    20,    21,
      34,    -1,    24,    25,    26,    27,    28,    -1,    30,    19,
      20,    21,    34,    -1,    24,    25,    26,    27,    -1,    -1,
      30,    20,    21,    -1,    34,    24,    25,    26,    27,    -1,
      -1,    30,    -1,    -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    42,    43,    44,    46,    47,    13,    48,
      49,     0,    43,    13,    16,    45,    50,    51,    36,    32,
      16,    17,    34,    36,    54,    46,    57,    58,    33,    46,
      52,    53,    13,    45,     3,    35,    37,    57,    50,    59,
      60,    37,    57,    50,    33,    17,    35,     3,     4,     5,
       8,     9,    11,    12,    13,    21,    24,    25,    31,    32,
      54,    55,    56,    61,    18,    16,    17,    52,    61,    32,
      32,    32,    32,    61,    61,    61,    61,    61,    37,    55,
      16,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    34,    61,    59,    16,    61,    56,
      61,    33,    61,    62,    33,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    13,    61,    33,    56,    33,
      17,    33,    35,    56,    61,    56,    62,    10,    33,    56,
      56
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
        case 3:
#line 38 "parse.y"
    {(yyval.a)=newast("Program",1,(yyvsp[(1) - (1)].a));printf("打印syntax tree:\n");eval((yyval.a),0);printf("syntax tree打印完毕!\n\n");;}
    break;

  case 4:
#line 41 "parse.y"
    {(yyval.a)=newast("ExtDefList",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 5:
#line 42 "parse.y"
    {(yyval.a)=newast("ExtDefList",0,-1);;}
    break;

  case 6:
#line 45 "parse.y"
    {(yyval.a)=newast("ExtDef",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 7:
#line 46 "parse.y"
    {(yyval.a)=newast("ExtDef",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 8:
#line 47 "parse.y"
    {(yyval.a)=newast("ExtDef",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 9:
#line 49 "parse.y"
    {(yyval.a)=newast("ExtDecList",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 10:
#line 50 "parse.y"
    {(yyval.a)=newast("ExtDecList",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 11:
#line 53 "parse.y"
    {(yyval.a)=newast("Specifire",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 12:
#line 54 "parse.y"
    {(yyval.a)=newast("Specifire",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 13:
#line 56 "parse.y"
    {(yyval.a)=newast("StructSpecifire",5,(yyvsp[(1) - (5)].a),(yyvsp[(2) - (5)].a),(yyvsp[(3) - (5)].a),(yyvsp[(4) - (5)].a),(yyvsp[(5) - (5)].a));;}
    break;

  case 14:
#line 57 "parse.y"
    {(yyval.a)=newast("StructSpecifire",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 15:
#line 59 "parse.y"
    {(yyval.a)=newast("OptTag",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 16:
#line 60 "parse.y"
    {(yyval.a)=newast("OptTag",0,-1);;}
    break;

  case 17:
#line 62 "parse.y"
    {(yyval.a)=newast("Tag",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 18:
#line 65 "parse.y"
    {(yyval.a)=newast("VarDec",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 19:
#line 66 "parse.y"
    {(yyval.a)=newast("VarDec",4,(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a));;}
    break;

  case 20:
#line 67 "parse.y"
    {(yyval.a)=newast("VarDec",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 21:
#line 69 "parse.y"
    {(yyval.a)=newast("FunDec",4,(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a));;}
    break;

  case 22:
#line 70 "parse.y"
    {(yyval.a)=newast("FunDec",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 23:
#line 73 "parse.y"
    {(yyval.a)=newast("VarList",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 24:
#line 74 "parse.y"
    {(yyval.a)=newast("VarList",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 25:
#line 76 "parse.y"
    {(yyval.a)=newast("ParamDec",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 26:
#line 79 "parse.y"
    {(yyval.a)=newast("Compst",4,(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a));;}
    break;

  case 27:
#line 80 "parse.y"
    {(yyval.a)=newast("Compst",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 28:
#line 83 "parse.y"
    {(yyval.a)=newast("StmtList",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 29:
#line 84 "parse.y"
    {(yyval.a)=newast("StmtList",0,-1);;}
    break;

  case 30:
#line 87 "parse.y"
    {(yyval.a)=newast("Stmt",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 31:
#line 88 "parse.y"
    {(yyval.a)=newast("Stmt",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 32:
#line 89 "parse.y"
    {(yyval.a)=newast("Stmt",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 33:
#line 90 "parse.y"
    {(yyval.a)=newast("IF_THEN",5,(yyvsp[(1) - (5)].a),(yyvsp[(2) - (5)].a),(yyvsp[(3) - (5)].a),(yyvsp[(4) - (5)].a),(yyvsp[(5) - (5)].a));;}
    break;

  case 34:
#line 91 "parse.y"
    {(yyval.a)=newast("IF_THEN_ELSE",7,(yyvsp[(1) - (7)].a),(yyvsp[(2) - (7)].a),(yyvsp[(3) - (7)].a),(yyvsp[(4) - (7)].a),(yyvsp[(5) - (7)].a),(yyvsp[(6) - (7)].a),(yyvsp[(7) - (7)].a));;}
    break;

  case 35:
#line 92 "parse.y"
    {(yyval.a)=newast("WHILE",5,(yyvsp[(1) - (5)].a),(yyvsp[(2) - (5)].a),(yyvsp[(3) - (5)].a),(yyvsp[(4) - (5)].a),(yyvsp[(5) - (5)].a));;}
    break;

  case 36:
#line 93 "parse.y"
    {(yyval.a)=newast("FOR",7,(yyvsp[(1) - (7)].a),(yyvsp[(2) - (7)].a),(yyvsp[(3) - (7)].a),(yyvsp[(4) - (7)].a),(yyvsp[(5) - (7)].a),(yyvsp[(6) - (7)].a),(yyvsp[(7) - (7)].a));;}
    break;

  case 37:
#line 96 "parse.y"
    {(yyval.a)=newast("DefList",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 38:
#line 97 "parse.y"
    {(yyval.a)=newast("DefList",0,-1);;}
    break;

  case 39:
#line 100 "parse.y"
    {(yyval.a)=newast("Def",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 40:
#line 103 "parse.y"
    {(yyval.a)=newast("DecList",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 41:
#line 104 "parse.y"
    {(yyval.a)=newast("DecList",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 42:
#line 107 "parse.y"
    {(yyval.a)=newast("Dec",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 43:
#line 108 "parse.y"
    {(yyval.a)=newast("Dec",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 44:
#line 111 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 45:
#line 112 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 46:
#line 113 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 47:
#line 114 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 48:
#line 115 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 49:
#line 116 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 50:
#line 117 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 51:
#line 118 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 52:
#line 119 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 53:
#line 120 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 54:
#line 121 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 55:
#line 122 "parse.y"
    {(yyval.a)=newast("Exp",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 56:
#line 123 "parse.y"
    {(yyval.a)=newast("Exp",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 57:
#line 124 "parse.y"
    {(yyval.a)=newast("Exp",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 58:
#line 125 "parse.y"
    {(yyval.a)=newast("Exp",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 59:
#line 126 "parse.y"
    {(yyval.a)=newast("Exp",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 60:
#line 127 "parse.y"
    {(yyval.a)=newast("Exp",2,(yyvsp[(1) - (2)].a),(yyvsp[(2) - (2)].a));;}
    break;

  case 61:
#line 128 "parse.y"
    {(yyval.a)=newast("Exp",4,(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a));;}
    break;

  case 62:
#line 129 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 63:
#line 130 "parse.y"
    {(yyval.a)=newast("Exp",4,(yyvsp[(1) - (4)].a),(yyvsp[(2) - (4)].a),(yyvsp[(3) - (4)].a),(yyvsp[(4) - (4)].a));;}
    break;

  case 64:
#line 131 "parse.y"
    {(yyval.a)=newast("Exp",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 65:
#line 132 "parse.y"
    {(yyval.a)=newast("Exp",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 66:
#line 133 "parse.y"
    {(yyval.a)=newast("Exp",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 67:
#line 134 "parse.y"
    {(yyval.a)=newast("Exp",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 68:
#line 135 "parse.y"
    {(yyval.a)=newast("Exp",1,(yyvsp[(1) - (1)].a));;}
    break;

  case 69:
#line 138 "parse.y"
    {(yyval.a)=newast("Args",3,(yyvsp[(1) - (3)].a),(yyvsp[(2) - (3)].a),(yyvsp[(3) - (3)].a));;}
    break;

  case 70:
#line 139 "parse.y"
    {(yyval.a)=newast("Args",1,(yyvsp[(1) - (1)].a));;}
    break;


/* Line 1267 of yacc.c.  */
#line 1897 "parse.tab.c"
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


#line 141 "parse.y"



