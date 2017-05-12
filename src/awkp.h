
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     NAME = 258,
     NUMBER = 259,
     STRING = 260,
     ERE = 261,
     XPATH = 262,
     FUNC_NAME = 263,
     Begin = 264,
     End = 265,
     Break = 266,
     Continue = 267,
     Delete = 268,
     Do = 269,
     Else = 270,
     Exit = 271,
     For = 272,
     Function = 273,
     If = 274,
     In = 275,
     Next = 276,
     Print = 277,
     Printf = 278,
     Return = 279,
     While = 280,
     BUILTIN_FUNC_NAME = 281,
     GETLINE = 282,
     ADD_ASSIGN = 283,
     SUB_ASSIGN = 284,
     MUL_ASSIGN = 285,
     DIV_ASSIGN = 286,
     MOD_ASSIGN = 287,
     POW_ASSIGN = 288,
     OR = 289,
     AND = 290,
     NO_MATCH = 291,
     EQ = 292,
     LE = 293,
     GE = 294,
     NE = 295,
     INCR = 296,
     DECR = 297,
     APPEND = 298,
     NEWLINE = 299,
     ASSIGN = 300
   };
#endif
/* Tokens.  */
#define NAME 258
#define NUMBER 259
#define STRING 260
#define ERE 261
#define XPATH 262
#define FUNC_NAME 263
#define Begin 264
#define End 265
#define Break 266
#define Continue 267
#define Delete 268
#define Do 269
#define Else 270
#define Exit 271
#define For 272
#define Function 273
#define If 274
#define In 275
#define Next 276
#define Print 277
#define Printf 278
#define Return 279
#define While 280
#define BUILTIN_FUNC_NAME 281
#define GETLINE 282
#define ADD_ASSIGN 283
#define SUB_ASSIGN 284
#define MUL_ASSIGN 285
#define DIV_ASSIGN 286
#define MOD_ASSIGN 287
#define POW_ASSIGN 288
#define OR 289
#define AND 290
#define NO_MATCH 291
#define EQ 292
#define LE 293
#define GE 294
#define NE 295
#define INCR 296
#define DECR 297
#define APPEND 298
#define NEWLINE 299
#define ASSIGN 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 50 "awkp.y"

  int  num;
  char *str;



/* Line 1676 of yacc.c  */
#line 149 "awkp.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


