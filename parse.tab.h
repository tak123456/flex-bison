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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 12 "parse.y"
{
struct ast* a;
double d;
}
/* Line 1529 of yacc.c.  */
#line 134 "parse.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

