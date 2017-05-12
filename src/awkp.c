
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "awkp.y"

/* 
 * Copyright (C) 2010 Laird Breyer
 *  
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * 
 * Author:   Laird Breyer <laird@lbreyer.com>
 */

#include "awkvm.h"
#include <stdio.h>

/* The awkp.y grammar here is adapted from the official awk grammar published
 * in IEEE Std 1003.1 (2004). HOWEVER, xml-awk IS NOT A CONFORMING 
 * IMPLEMENTATION, AND SIGNIFICANT DEPARTURES FROM THE STANDARD ARE
 * EXPECTED EVENTUALLY (WHERE THIS MAKES SENSE FOR XML INPUTS).
 */

static awkvm_t *avm = NULL; /* local copy of the VM which receives the code */

#define YYDEBUG 0

extern char *inputfile;
extern long inputline;

extern FILE *yyin;
extern char *yytext;
extern int yylex(void);

/* defined in awk-lexer.l */

  /* defined here */
  int yyerror(char *s);

  

/* Line 189 of yacc.c  */
#line 122 "awkp.c"

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

/* Line 214 of yacc.c  */
#line 50 "awkp.y"

  int  num;
  char *str;



/* Line 214 of yacc.c  */
#line 255 "awkp.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 267 "awkp.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  207
/* YYNRULES -- Number of states.  */
#define YYNSTATES  437

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,    64,    58,     2,     2,    65,    56,     2,     2,
      46,    47,    55,    53,    50,    54,     2,    68,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    63,    51,
      60,    66,    59,    62,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    48,     2,    49,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,    61,    45,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    52,
      67
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    17,    21,    25,
      29,    32,    40,    48,    49,    51,    53,    57,    59,    61,
      63,    68,    72,    77,    82,    85,    88,    90,    92,    94,
      97,    99,   102,   105,   112,   122,   129,   140,   149,   152,
     156,   160,   162,   169,   179,   186,   197,   206,   208,   210,
     212,   214,   217,   220,   228,   229,   231,   237,   239,   241,
     243,   246,   249,   254,   257,   262,   265,   268,   271,   272,
     274,   276,   278,   283,   288,   289,   291,   293,   295,   298,
     301,   305,   309,   313,   317,   321,   325,   328,   332,   336,
     340,   344,   348,   352,   356,   360,   364,   369,   374,   380,
     382,   386,   389,   393,   397,   401,   405,   409,   413,   416,
     420,   424,   428,   432,   436,   440,   444,   448,   452,   458,
     463,   468,   474,   476,   478,   480,   482,   484,   487,   490,
     493,   496,   500,   504,   508,   512,   516,   520,   524,   529,
     534,   536,   538,   539,   541,   543,   548,   550,   552,   555,
     558,   562,   566,   570,   574,   578,   582,   585,   589,   593,
     597,   602,   607,   613,   617,   620,   624,   628,   632,   636,
     640,   644,   647,   651,   655,   659,   665,   670,   675,   681,
     683,   685,   687,   689,   692,   695,   698,   701,   705,   709,
     713,   717,   721,   725,   729,   734,   739,   741,   743,   748,
     751,   753,   757,   761,   765,   767,   770,   771
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      70,     0,    -1,    71,    -1,    72,    -1,   105,    -1,    72,
      73,    78,    -1,    71,    73,    78,    -1,    71,    77,    78,
      -1,    71,    76,    78,    -1,    72,    76,    78,    -1,    76,
      77,    -1,    18,     3,    46,    74,    47,   105,    77,    -1,
      18,     8,    46,    74,    47,   105,    77,    -1,    -1,    75,
      -1,     3,    -1,    75,    50,     3,    -1,     9,    -1,    10,
      -1,    93,    -1,    93,    50,   105,    93,    -1,    44,   105,
      45,    -1,    44,   105,    79,    45,    -1,    44,   105,    80,
      45,    -1,    78,    51,    -1,    78,    52,    -1,    51,    -1,
      52,    -1,    81,    -1,    79,    81,    -1,    82,    -1,    79,
      82,    -1,    77,   105,    -1,    19,    46,    93,    47,   105,
      81,    -1,    19,    46,    93,    47,   105,    81,    15,   105,
      81,    -1,    25,    46,    93,    47,   105,    81,    -1,    17,
      46,    84,    51,    92,    51,    84,    47,   105,    81,    -1,
      17,    46,     3,    20,     3,    47,   105,    81,    -1,    51,
     105,    -1,    83,    52,   105,    -1,    83,    51,   105,    -1,
      83,    -1,    19,    46,    93,    47,   105,    82,    -1,    19,
      46,    93,    47,   105,    81,    15,   105,    82,    -1,    25,
      46,    93,    47,   105,    82,    -1,    17,    46,    84,    51,
      92,    51,    84,    47,   105,    82,    -1,    17,    46,     3,
      20,     3,    47,   105,    82,    -1,    85,    -1,    11,    -1,
      12,    -1,    21,    -1,    16,    92,    -1,    24,    92,    -1,
      14,   105,    81,    25,    46,    93,    47,    -1,    -1,    85,
      -1,    13,     3,    48,    90,    49,    -1,    93,    -1,    86,
      -1,    87,    -1,    87,    88,    -1,    22,    96,    -1,    22,
      46,    91,    47,    -1,    23,    97,    -1,    23,    46,    91,
      47,    -1,    59,    93,    -1,    43,    93,    -1,    61,    93,
      -1,    -1,    90,    -1,    93,    -1,    91,    -1,    93,    50,
     105,    93,    -1,    91,    50,   105,    93,    -1,    -1,    93,
      -1,    94,    -1,    95,    -1,    53,    93,    -1,    54,    93,
      -1,    94,    57,    93,    -1,    94,    55,    93,    -1,    94,
      68,    93,    -1,    94,    56,    93,    -1,    94,    53,    93,
      -1,    94,    54,    93,    -1,    94,    95,    -1,    94,    60,
      93,    -1,    94,    38,    93,    -1,    94,    40,    93,    -1,
      94,    37,    93,    -1,    94,    59,    93,    -1,    94,    39,
      93,    -1,    94,    64,    93,    -1,    94,    36,    93,    -1,
      94,    20,     3,    -1,    94,    35,   105,    93,    -1,    94,
      34,   105,    93,    -1,    94,    62,    93,    63,    93,    -1,
     103,    -1,    46,    93,    47,    -1,    58,    93,    -1,    95,
      57,    93,    -1,    95,    55,    93,    -1,    95,    68,    93,
      -1,    95,    56,    93,    -1,    95,    53,    93,    -1,    95,
      54,    93,    -1,    95,    95,    -1,    95,    60,    93,    -1,
      95,    38,    93,    -1,    95,    40,    93,    -1,    95,    37,
      93,    -1,    95,    59,    93,    -1,    95,    39,    93,    -1,
      95,    64,    93,    -1,    95,    36,    93,    -1,    95,    20,
       3,    -1,    46,    91,    47,    20,     3,    -1,    95,    35,
     105,    93,    -1,    95,    34,   105,    93,    -1,    95,    62,
      93,    63,    93,    -1,     4,    -1,     5,    -1,   101,    -1,
       6,    -1,     7,    -1,   101,    41,    -1,   101,    42,    -1,
      41,   101,    -1,    42,   101,    -1,   101,    33,    93,    -1,
     101,    32,    93,    -1,   101,    30,    93,    -1,   101,    31,
      93,    -1,   101,    28,    93,    -1,   101,    29,    93,    -1,
     101,    66,    93,    -1,     8,    46,    89,    47,    -1,    26,
      46,    89,    47,    -1,    26,    -1,   102,    -1,    -1,    97,
      -1,    98,    -1,    97,    50,   105,    98,    -1,    99,    -1,
     100,    -1,    53,    98,    -1,    54,    98,    -1,    99,    57,
      98,    -1,    99,    55,    98,    -1,    99,    68,    98,    -1,
      99,    56,    98,    -1,    99,    53,    98,    -1,    99,    54,
      98,    -1,    99,   100,    -1,    99,    64,    98,    -1,    99,
      36,    98,    -1,    99,    20,     3,    -1,    99,    35,   105,
      98,    -1,    99,    34,   105,    98,    -1,    99,    62,    98,
      63,    98,    -1,    46,    93,    47,    -1,    58,    98,    -1,
     100,    57,    98,    -1,   100,    55,    98,    -1,   100,    68,
      98,    -1,   100,    56,    98,    -1,   100,    53,    98,    -1,
     100,    54,    98,    -1,   100,   100,    -1,   100,    64,    98,
      -1,   100,    36,    98,    -1,   100,    20,     3,    -1,    46,
      91,    47,    20,     3,    -1,   100,    35,   105,    98,    -1,
     100,    34,   105,    98,    -1,   100,    62,    98,    63,    98,
      -1,     4,    -1,     5,    -1,   101,    -1,     6,    -1,   101,
      41,    -1,   101,    42,    -1,    41,   101,    -1,    42,   101,
      -1,   101,    33,    98,    -1,   101,    32,    98,    -1,   101,
      30,    98,    -1,   101,    31,    98,    -1,   101,    28,    98,
      -1,   101,    29,    98,    -1,   101,    66,    98,    -1,     8,
      46,    89,    47,    -1,    26,    46,    89,    47,    -1,    26,
      -1,     3,    -1,     3,    48,    90,    49,    -1,    65,    93,
      -1,   104,    -1,   104,    60,    93,    -1,    95,    61,   104,
      -1,    94,    61,   104,    -1,    27,    -1,    27,   101,    -1,
      -1,   105,    52,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   111,   111,   112,   116,   117,   118,   119,   123,   124,
     128,   129,   131,   136,   137,   141,   142,   146,   147,   148,
     149,   153,   154,   155,   159,   160,   161,   162,   166,   167,
     171,   172,   176,   177,   178,   180,   181,   184,   186,   187,
     188,   192,   193,   194,   196,   197,   200,   205,   206,   207,
     208,   209,   210,   211,   215,   216,   220,   221,   222,   226,
     227,   231,   232,   233,   234,   238,   239,   240,   244,   245,
     249,   250,   254,   255,   259,   260,   264,   265,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   334,
     335,   336,   340,   341,   345,   346,   350,   351,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   406,   407,   411,   412,   413,
     417,   418,   419,   423,   427,   428,   432,   433
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "NUMBER", "STRING", "ERE",
  "XPATH", "FUNC_NAME", "Begin", "End", "Break", "Continue", "Delete",
  "Do", "Else", "Exit", "For", "Function", "If", "In", "Next", "Print",
  "Printf", "Return", "While", "BUILTIN_FUNC_NAME", "GETLINE",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "POW_ASSIGN", "OR", "AND", "NO_MATCH", "EQ", "LE", "GE", "NE", "INCR",
  "DECR", "APPEND", "'{'", "'}'", "'('", "')'", "'['", "']'", "','", "';'",
  "NEWLINE", "'+'", "'-'", "'*'", "'%'", "'^'", "'!'", "'>'", "'<'", "'|'",
  "'?'", "':'", "' '", "'$'", "'='", "ASSIGN", "'/'", "$accept", "program",
  "item_list", "actionless_item_list", "item", "param_list_opt",
  "param_list", "pattern", "action", "terminator",
  "terminated_statement_list", "unterminated_statement_list",
  "terminated_statement", "unterminated_statement",
  "terminatable_statement", "simple_statement_opt", "simple_statement",
  "print_statement", "simple_print_statement", "output_redirection",
  "expr_list_opt", "expr_list", "multiple_expr_list", "expr_opt", "expr",
  "unary_expr", "non_unary_expr", "print_expr_list_opt", "print_expr_list",
  "print_expr", "unary_print_expr", "non_unary_print_expr", "lvalue",
  "non_unary_input_function", "unary_input_function", "simple_get",
  "newline_opt", 0
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
     295,   296,   297,   298,   123,   125,    40,    41,    91,    93,
      44,    59,   299,    43,    45,    42,    37,    94,    33,    62,
      60,   124,    63,    58,    32,    36,    61,   300,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    69,    70,    70,    71,    71,    71,    71,    72,    72,
      73,    73,    73,    74,    74,    75,    75,    76,    76,    76,
      76,    77,    77,    77,    78,    78,    78,    78,    79,    79,
      80,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    82,    82,    82,    82,    82,    82,    83,    83,    83,
      83,    83,    83,    83,    84,    84,    85,    85,    85,    86,
      86,    87,    87,    87,    87,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     102,   102,   102,   103,   104,   104,   105,   105
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     3,     3,     3,
       2,     7,     7,     0,     1,     1,     3,     1,     1,     1,
       4,     3,     4,     4,     2,     2,     1,     1,     1,     2,
       1,     2,     2,     6,     9,     6,    10,     8,     2,     3,
       3,     1,     6,     9,     6,    10,     8,     1,     1,     1,
       1,     2,     2,     7,     0,     1,     5,     1,     1,     1,
       2,     2,     4,     2,     4,     2,     2,     2,     0,     1,
       1,     1,     4,     4,     0,     1,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     4,     4,     5,     1,
       3,     2,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     5,     4,
       4,     5,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     4,     4,
       1,     1,     0,     1,     1,     4,     1,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     2,     3,     3,     3,
       4,     4,     5,     3,     2,     3,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     5,     4,     4,     5,     1,
       1,     1,     1,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     4,     4,     1,     1,     4,     2,
       1,     3,     3,     3,     1,     2,     0,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     206,     0,     2,     3,     4,     1,   197,   122,   123,   125,
     126,     0,    17,    18,     0,   140,   204,     0,     0,   206,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    76,
      77,   124,   141,    99,   200,     0,     0,   207,     0,    68,
       0,     0,    68,   205,   129,   130,     0,     0,     0,    78,
      79,   101,   199,    26,    27,     6,    10,     8,     7,   206,
       0,   206,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,   206,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,     0,     0,     0,     0,     0,   127,   128,     0,     0,
       5,     9,     0,    71,    70,     0,    69,    13,    13,     0,
      48,    49,     0,   206,    74,     0,     0,    50,   142,     0,
      74,     0,    21,   206,   206,     0,     0,    28,    30,    41,
      47,    58,    59,    57,     0,   206,   100,   206,    24,    25,
       0,    95,     0,     0,    94,    90,    88,    92,    89,    84,
      85,    81,    83,    80,    91,    87,   203,     0,    93,    82,
     117,     0,     0,   116,   112,   110,   114,   111,   106,   107,
     103,   105,   102,   113,   109,   202,     0,   115,   104,   135,
     136,   133,   134,   132,   131,   137,   201,   198,   138,    15,
       0,    14,     0,   139,     0,     0,    51,    75,    54,     0,
     179,   180,   182,     0,   196,     0,     0,     0,     0,     0,
       0,    61,   143,   144,   146,   147,   181,     0,    63,    52,
       0,    38,    32,    22,    29,    31,    23,   206,   206,     0,
       0,     0,    60,     0,     0,     0,    20,    97,    96,     0,
     120,   119,     0,   206,     0,   206,     0,     0,     0,     0,
       0,     0,   197,     0,    55,     0,    68,    68,   185,   186,
       0,     0,     0,   148,   149,   164,   206,     0,   206,   206,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   156,
       0,   206,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,     0,     0,     0,     0,     0,   183,
     184,     0,     0,     0,    40,    39,    66,    65,    67,   118,
      73,    72,    98,   121,     0,    16,     0,     0,    54,     0,
       0,     0,     0,    74,   206,     0,     0,    62,   163,     0,
       0,   159,     0,     0,   158,   154,   155,   151,   153,   150,
       0,   157,   152,   174,     0,     0,   173,   169,   170,   166,
     168,   165,     0,   172,   167,   191,   192,   189,   190,   188,
     187,   193,    64,   206,    11,    12,    56,   197,     0,     0,
       0,     0,     0,     0,     0,   194,   195,     0,     0,   145,
     161,   160,     0,   177,   176,     0,     0,     0,    74,   206,
     206,     0,   206,    54,    33,    42,   175,   162,   178,    35,
      44,     0,     0,     0,     0,    53,     0,     0,   206,   206,
      54,    33,    37,    46,   206,     0,     0,     0,   206,     0,
      34,    43,   206,     0,    36,    45,     0
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     3,    25,   200,   201,    26,   134,    55,
     135,   136,   409,   138,   139,   263,   140,   141,   142,   242,
     115,   116,   113,   206,   143,    29,    30,   221,   222,   223,
     224,   225,    31,    32,    33,    34,     4
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -318
static const yytype_int16 yypact[] =
{
    -318,    18,   951,   294,   -22,  -318,     6,  -318,  -318,  -318,
    -318,     4,  -318,  -318,    36,    15,    17,    17,    17,  -318,
    1145,  1145,  1145,  1145,  1145,    43,    39,    43,    20,   519,
     622,    -7,  -318,  -318,    25,    43,    39,  -318,  1145,  1145,
      31,    47,  1145,  -318,  -318,  -318,   754,     1,    42,  -318,
    -318,  -318,  -318,  -318,  -318,    72,  -318,    72,    72,  -318,
     108,  -318,  -318,  1145,  1145,  1145,  1145,  1145,  1145,  1145,
    1145,  1145,  1145,  1145,  1145,    85,  1145,  1145,  1145,   622,
     110,  -318,  -318,  1145,  1145,  1145,  1145,  1145,  1145,  1145,
    1145,  1145,  1145,  1145,  1145,    85,  1145,  1145,  1145,   622,
    1145,  1145,  1145,  1145,  1145,  1145,  -318,  -318,  1145,  1145,
      72,    72,    70,    77,    79,    75,  -318,   130,   130,    87,
    -318,  -318,   132,  -318,  1145,    90,    91,  -318,  1210,  1219,
    1145,    92,  -318,  -318,  -318,   810,    94,  -318,  -318,    80,
    -318,  -318,    13,  -318,   120,  -318,  -318,  -318,  -318,  -318,
    1089,  -318,  1089,  1089,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,    95,  -318,  -318,
    -318,  1089,  1089,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,    96,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
     106,   107,   113,  -318,   125,   866,  -318,  -318,   995,  1145,
    -318,  -318,  -318,   131,   138,    17,    17,  1145,  1275,  1275,
    1275,  -318,   135,  -318,    11,   688,   247,  1145,   135,  -318,
    1145,   -22,   -22,  -318,  -318,  -318,  -318,  -318,  -318,  1145,
    1145,  1145,  -318,   185,  1089,  1089,  -318,  -318,  -318,  1145,
    -318,  -318,  1145,  -318,   186,  -318,  1145,   144,   145,   146,
     168,    80,     7,   143,  -318,   149,  1145,  1145,  -318,  -318,
      58,    59,  1145,  -318,  -318,  -318,  -318,   194,  -318,  -318,
    1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,  1275,   688,
     195,  -318,  -318,  1275,  1275,  1275,  1275,  1275,  1275,  1275,
    1275,  1275,   688,  1275,  1275,  1275,  1275,  1275,  1275,  -318,
    -318,  1275,    60,   152,   -22,   -22,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,   -11,  -318,   -11,   154,  1020,  1145,
    1145,   155,   203,  1145,  -318,   160,   162,   191,  -318,    71,
    1154,  -318,  1154,  1154,  -318,  -318,  -318,  -318,  -318,  -318,
     150,  -318,  -318,  -318,  1154,  1154,  -318,  -318,  -318,  -318,
    -318,  -318,   151,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,   191,  -318,  -318,  -318,  -318,    12,   161,   169,
     170,  1145,   177,   164,   922,  -318,  -318,   226,   191,  -318,
    -318,  -318,  1275,  -318,  -318,  1275,   922,   229,  1145,  -318,
    -318,   188,  -318,  1064,   224,  -318,  -318,  -318,  -318,  -318,
    -318,   197,   190,   866,   866,  -318,   922,   198,  -318,  -318,
    1064,   227,  -318,  -318,  -318,   922,   866,   199,  -318,   922,
    -318,  -318,  -318,   866,  -318,  -318,   866
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,  -318,  -318,  -318,   244,   134,  -318,   245,     2,    61,
    -318,  -318,   -10,  -133,  -193,  -317,  -198,  -318,  -318,  -318,
     -29,   -33,   -17,  -129,    78,  -318,   -21,  -318,   124,   312,
    -318,  -218,   209,  -318,  -318,   -46,   -19
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      46,   229,   235,    47,    27,   112,   289,   302,    79,    99,
     264,   378,   261,   119,     6,   210,   211,   212,     5,   213,
       6,   100,   101,   102,   103,   104,   105,   332,    56,   166,
      37,   277,   397,    19,   106,   107,   137,   214,    56,    40,
     150,    37,   152,   153,    41,   278,   279,   280,   144,   185,
      39,   145,   215,   216,    38,    38,   239,   272,    99,   108,
      38,    42,   171,   172,   281,   282,   283,   284,   285,   220,
      59,   302,   240,   286,   241,   287,    24,   117,    99,   288,
      28,    28,    24,    19,   302,   109,   417,    57,    58,   146,
      53,    54,   147,   118,    53,    54,   110,   111,    48,    49,
      50,    51,    52,   427,   205,   337,   338,   372,   145,   147,
     145,   151,    16,   170,   231,   232,   114,   114,   388,   197,
     114,   145,   198,   148,   149,   234,   244,   145,   245,   147,
     264,   237,   238,   199,   203,   204,   208,   209,   230,   236,
     243,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   253,   167,   168,   169,   254,   249,   252,
     255,   173,   174,   175,   176,   177,   178,   179,   180,   181,
     182,   183,   184,   256,   186,   187,   188,   266,   189,   190,
     191,   192,   193,   194,   267,   276,   195,   196,   319,   325,
     328,   329,   330,   331,   333,   260,   334,   341,   353,   373,
     270,   381,   207,   376,   383,   264,   382,   385,   207,   386,
     312,   387,   398,   392,   395,   403,   399,   400,   314,   315,
     261,   261,   264,   327,   402,    43,    44,    45,   246,   406,
     247,   248,   411,   261,   324,   415,   326,   335,   336,   418,
     261,   420,   428,   261,   419,   424,   432,    35,    36,   250,
     251,   405,   202,   228,     0,   339,     0,   340,     0,   342,
     343,     0,     0,   410,     0,     0,     0,     0,     0,   412,
       0,     0,   354,   355,     0,   303,   304,   305,   306,   307,
     308,     0,     0,   423,     0,     0,     0,   265,   309,   310,
       0,     0,   431,     0,     0,   271,   435,     6,     7,     8,
       9,    10,    11,    12,    13,   271,     0,     0,   313,     0,
       0,     0,    14,   311,     0,   384,     0,   316,   317,   318,
      15,    16,   320,   321,     0,     0,   374,   322,   375,     0,
     323,     0,     0,     0,   114,    17,    18,   226,   226,     0,
      20,     0,     0,     0,   114,   114,     0,    21,    22,     0,
     271,     0,    23,     0,   396,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   404,     0,     0,     0,     0,     0,
     413,   414,     0,   416,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   425,
     426,     0,     0,   421,     0,   429,   422,   379,   380,   433,
       0,   207,     0,   436,     0,   430,   422,     0,     0,   434,
       0,     0,     0,   430,   268,   269,   434,   226,   226,   226,
       0,     0,     0,   226,   226,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   401,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   207,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   226,
     226,   226,   226,   226,   226,   226,   226,   226,   226,     0,
       0,     0,   226,   226,   226,   226,   226,   226,   226,   226,
     226,   226,   226,   226,   226,   226,   226,   226,     0,     0,
     226,     0,     6,     7,     8,     9,    10,    11,     0,     0,
     273,   274,   275,     0,     0,     0,     0,     0,     0,    60,
       0,     0,     0,     0,     0,    15,    16,     0,     0,   226,
       0,   226,   226,    61,    62,    63,    64,    65,    66,    67,
      17,    18,     0,   226,   226,    20,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    23,    73,    74,
      75,    76,     0,    77,    24,     0,     0,    78,     0,     0,
       0,     0,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   226,     0,     0,   226,   356,   357,   358,   359,   360,
     361,   362,   363,   364,     0,   365,   366,   367,   368,   369,
     370,     0,     0,   371,     0,     6,     7,     8,     9,    10,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,    15,    16,
       0,     0,   389,     0,   390,   391,    81,    82,    83,    84,
      85,    86,    87,    17,    18,     0,   393,   394,    20,     0,
       0,     0,     0,     0,     0,    88,    89,    90,    91,    92,
      23,    93,    94,    95,    96,     0,    97,    24,     0,     0,
      98,     6,   210,   211,   212,     0,   213,     0,     0,     0,
       0,     0,     0,     0,   407,     0,     0,   408,   290,     0,
       0,     0,     0,     0,   214,     0,     0,     0,     0,     0,
       0,     0,   291,   292,   293,     0,     0,     0,     0,   215,
     216,     0,     0,     0,   272,     0,     0,     0,     0,     0,
       0,   294,   295,   296,   297,   298,   220,     0,     0,     0,
     299,     0,   300,    24,     0,     0,   301,     6,     7,     8,
       9,    10,    11,     0,     0,   120,   121,   122,   123,     0,
     124,   125,     0,   126,     0,   127,   128,   129,   130,   131,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,    19,   132,
      20,     0,     0,     0,     0,   133,    37,    21,    22,     0,
       0,     0,    23,     6,     7,     8,     9,    10,    11,    24,
       0,   120,   121,   122,   123,     0,   124,   125,     0,   126,
       0,   127,   128,   129,   130,   131,    15,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,    18,     0,    19,   233,    20,     0,     0,     0,
       0,   133,     0,    21,    22,     0,     0,     0,    23,     6,
       7,     8,     9,    10,    11,    24,     0,   120,   121,   122,
     123,     0,   124,   257,     0,   258,     0,   127,   128,   129,
     130,   259,    15,    16,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,    18,     0,
      19,     0,    20,     0,     0,     0,     0,   133,    37,    21,
      22,     0,     0,     0,    23,     6,     7,     8,     9,    10,
      11,    24,     0,   120,   121,   122,   123,     0,   124,   125,
       0,   126,     0,   127,   128,   129,   130,   131,    15,    16,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,     0,    17,    18,     0,    19,     0,    20,    14,
       0,     0,     0,   133,    37,    21,    22,    15,    16,     0,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,    17,    18,     0,    19,     0,    20,   262,     7,
       8,     9,    10,    11,    21,    22,     0,     0,   122,    23,
       0,     0,     0,     0,     0,     0,    24,   128,   129,     0,
       0,    15,    16,   377,     7,     8,     9,    10,    11,     0,
       0,     0,     0,   122,     0,     0,    17,    18,     0,     0,
       0,    20,   128,   129,     0,     0,    15,    16,    21,    22,
       0,     0,     0,    23,     0,     0,     0,     0,     0,     0,
      24,    17,    18,     0,     0,     0,    20,     6,     7,     8,
       9,    10,    11,    21,    22,     0,     0,   122,    23,     0,
       0,     0,     0,     0,     0,    24,   128,   129,     0,     0,
      15,    16,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,    17,    18,     0,     0,     0,
      20,     0,     0,     0,     0,    15,    16,    21,    22,     0,
       0,     0,    23,     0,     0,     0,     0,     0,     0,    24,
      17,    18,     0,     0,     0,    20,     0,     0,     0,     0,
       0,    37,    21,    22,     0,     0,     0,    23,     6,     7,
       8,     9,    10,    11,    24,     0,     0,     6,   210,   211,
     212,     0,   213,     0,     0,     0,     0,     0,     0,     0,
       0,    15,    16,     0,     0,     0,     0,     0,     0,     0,
     214,     0,     0,     0,     0,     0,    17,    18,     0,     0,
       0,    20,     0,     0,     0,   215,   216,     0,    21,    22,
     272,     0,     0,    23,     0,     0,    37,   218,   219,     0,
      24,     0,   220,     6,   210,   211,   212,     0,   213,    24,
       0,     0,     6,   210,   211,   212,     0,   213,     0,     0,
       0,     0,     0,     0,     0,     0,   214,     0,     0,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,     0,
       0,   215,   216,     0,     0,     0,   217,     0,     0,     0,
     215,   216,     0,   218,   219,   227,     0,     0,   220,     0,
       0,     0,   218,   219,     0,    24,     0,   220,     6,   210,
     211,   212,     0,   213,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   215,   216,     0,     0,
       0,   272,     0,     0,     0,     0,     0,     0,   218,   219,
       0,     0,     0,   220,     0,     0,     0,     0,     0,     0,
      24
};

static const yytype_int16 yycheck[] =
{
      19,   130,   135,    20,     2,    38,   224,   225,    29,    30,
     208,   328,   205,    42,     3,     4,     5,     6,     0,     8,
       3,    28,    29,    30,    31,    32,    33,    20,    26,    75,
      52,    20,    20,    44,    41,    42,    46,    26,    36,     3,
      59,    52,    61,    62,     8,    34,    35,    36,    47,    95,
      46,    50,    41,    42,    48,    48,    43,    46,    79,    66,
      48,    46,    81,    82,    53,    54,    55,    56,    57,    58,
      50,   289,    59,    62,    61,    64,    65,    46,    99,    68,
       2,     3,    65,    44,   302,    60,   403,    26,    27,    47,
      51,    52,    50,    46,    51,    52,    35,    36,    20,    21,
      22,    23,    24,   420,   123,    47,    47,    47,    50,    50,
      50,     3,    27,     3,   133,   134,    38,    39,    47,    49,
      42,    50,    47,    51,    52,   135,   145,    50,   147,    50,
     328,    51,    52,     3,    47,     3,    46,    46,    46,    45,
      20,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    47,    76,    77,    78,    50,    63,    63,
      47,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    48,    96,    97,    98,    46,   100,   101,
     102,   103,   104,   105,    46,    50,   108,   109,     3,     3,
      46,    46,    46,    25,    51,   205,    47,     3,     3,    47,
     217,    46,   124,    49,   333,   403,     3,    47,   130,    47,
     227,    20,    51,    63,    63,    51,    47,    47,   237,   238,
     413,   414,   420,   256,    47,    16,    17,    18,   150,     3,
     152,   153,     3,   426,   253,    47,   255,   266,   267,    15,
     433,    51,    15,   436,    47,    47,    47,     3,     3,   171,
     172,   384,   118,   129,    -1,   272,    -1,   276,    -1,   278,
     279,    -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,   398,
      -1,    -1,   291,   292,    -1,    28,    29,    30,    31,    32,
      33,    -1,    -1,   416,    -1,    -1,    -1,   209,    41,    42,
      -1,    -1,   425,    -1,    -1,   217,   429,     3,     4,     5,
       6,     7,     8,     9,    10,   227,    -1,    -1,   230,    -1,
      -1,    -1,    18,    66,    -1,   334,    -1,   239,   240,   241,
      26,    27,   244,   245,    -1,    -1,   324,   249,   326,    -1,
     252,    -1,    -1,    -1,   256,    41,    42,   128,   129,    -1,
      46,    -1,    -1,    -1,   266,   267,    -1,    53,    54,    -1,
     272,    -1,    58,    -1,   373,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   384,    -1,    -1,    -1,    -1,    -1,
     399,   400,    -1,   402,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   418,
     419,    -1,    -1,   413,    -1,   424,   416,   329,   330,   428,
      -1,   333,    -1,   432,    -1,   425,   426,    -1,    -1,   429,
      -1,    -1,    -1,   433,   215,   216,   436,   218,   219,   220,
      -1,    -1,    -1,   224,   225,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   381,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   398,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,
     281,   282,   283,   284,   285,   286,   287,   288,   289,    -1,
      -1,    -1,   293,   294,   295,   296,   297,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    -1,    -1,
     311,    -1,     3,     4,     5,     6,     7,     8,    -1,    -1,
     218,   219,   220,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    26,    27,    -1,    -1,   340,
      -1,   342,   343,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,   354,   355,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      -1,    -1,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   392,    -1,    -1,   395,   293,   294,   295,   296,   297,
     298,   299,   300,   301,    -1,   303,   304,   305,   306,   307,
     308,    -1,    -1,   311,    -1,     3,     4,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    -1,    -1,    -1,    -1,    -1,    26,    27,
      -1,    -1,   340,    -1,   342,   343,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,   354,   355,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    64,    65,    -1,    -1,
      68,     3,     4,     5,     6,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   392,    -1,    -1,   395,    20,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,    41,
      42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    55,    56,    57,    58,    -1,    -1,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,     3,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    -1,
      16,    17,    -1,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,
      -1,    -1,    58,     3,     4,     5,     6,     7,     8,    65,
      -1,    11,    12,    13,    14,    -1,    16,    17,    -1,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    51,    -1,    53,    54,    -1,    -1,    -1,    58,     3,
       4,     5,     6,     7,     8,    65,    -1,    11,    12,    13,
      14,    -1,    16,    17,    -1,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,
      44,    -1,    46,    -1,    -1,    -1,    -1,    51,    52,    53,
      54,    -1,    -1,    -1,    58,     3,     4,     5,     6,     7,
       8,    65,    -1,    11,    12,    13,    14,    -1,    16,    17,
      -1,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    41,    42,    -1,    44,    -1,    46,    18,
      -1,    -1,    -1,    51,    52,    53,    54,    26,    27,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    41,    42,    -1,    44,    -1,    46,     3,     4,
       5,     6,     7,     8,    53,    54,    -1,    -1,    13,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    22,    23,    -1,
      -1,    26,    27,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    22,    23,    -1,    -1,    26,    27,    53,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    41,    42,    -1,    -1,    -1,    46,     3,     4,     5,
       6,     7,     8,    53,    54,    -1,    -1,    13,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    22,    23,    -1,    -1,
      26,    27,     3,     4,     5,     6,     7,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    26,    27,    53,    54,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    58,     3,     4,
       5,     6,     7,     8,    65,    -1,    -1,     3,     4,     5,
       6,    -1,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    41,    42,    -1,    53,    54,
      46,    -1,    -1,    58,    -1,    -1,    52,    53,    54,    -1,
      65,    -1,    58,     3,     4,     5,     6,    -1,     8,    65,
      -1,    -1,     3,     4,     5,     6,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    41,    42,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      41,    42,    -1,    53,    54,    46,    -1,    -1,    58,    -1,
      -1,    -1,    53,    54,    -1,    65,    -1,    58,     3,     4,
       5,     6,    -1,     8,    65,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    70,    71,    72,   105,     0,     3,     4,     5,     6,
       7,     8,     9,    10,    18,    26,    27,    41,    42,    44,
      46,    53,    54,    58,    65,    73,    76,    77,    93,    94,
      95,   101,   102,   103,   104,    73,    76,    52,    48,    46,
       3,     8,    46,   101,   101,   101,   105,    91,    93,    93,
      93,    93,    93,    51,    52,    78,    77,    78,    78,    50,
      20,    34,    35,    36,    37,    38,    39,    40,    53,    54,
      55,    56,    57,    59,    60,    61,    62,    64,    68,    95,
      20,    34,    35,    36,    37,    38,    39,    40,    53,    54,
      55,    56,    57,    59,    60,    61,    62,    64,    68,    95,
      28,    29,    30,    31,    32,    33,    41,    42,    66,    60,
      78,    78,    90,    91,    93,    89,    90,    46,    46,    89,
      11,    12,    13,    14,    16,    17,    19,    21,    22,    23,
      24,    25,    45,    51,    77,    79,    80,    81,    82,    83,
      85,    86,    87,    93,    47,    50,    47,    50,    51,    52,
     105,     3,   105,   105,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,   104,    93,    93,    93,
       3,   105,   105,    93,    93,    93,    93,    93,    93,    93,
      93,    93,    93,    93,    93,   104,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    49,    47,     3,
      74,    75,    74,    47,     3,   105,    92,    93,    46,    46,
       4,     5,     6,     8,    26,    41,    42,    46,    53,    54,
      58,    96,    97,    98,    99,   100,   101,    46,    97,    92,
      46,   105,   105,    45,    81,    82,    45,    51,    52,    43,
      59,    61,    88,    20,   105,   105,    93,    93,    93,    63,
      93,    93,    63,    47,    50,    47,    48,    17,    19,    25,
      81,    83,     3,    84,    85,    93,    46,    46,   101,   101,
      91,    93,    46,    98,    98,    98,    50,    20,    34,    35,
      36,    53,    54,    55,    56,    57,    62,    64,    68,   100,
      20,    34,    35,    36,    53,    54,    55,    56,    57,    62,
      64,    68,   100,    28,    29,    30,    31,    32,    33,    41,
      42,    66,    91,    93,   105,   105,    93,    93,    93,     3,
      93,    93,    93,    93,   105,     3,   105,    90,    46,    46,
      46,    25,    20,    51,    47,    89,    89,    47,    47,    91,
     105,     3,   105,   105,    98,    98,    98,    98,    98,    98,
      98,    98,    98,     3,   105,   105,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    47,    47,    77,    77,    49,     3,    84,    93,
      93,    46,     3,    92,   105,    47,    47,    20,    47,    98,
      98,    98,    63,    98,    98,    63,   105,    20,    51,    47,
      47,    93,    47,    51,    81,    82,     3,    98,    98,    81,
      82,     3,    92,   105,   105,    47,   105,    84,    15,    47,
      51,    81,    81,    82,    47,   105,   105,    84,    15,   105,
      81,    82,    47,   105,    81,    82,   105
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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
      

/* Line 1455 of yacc.c  */
#line 2033 "awkp.c"
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
      /* If just tried and failed to reuse lookahead token after an
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

  /* Else will try to reuse lookahead token after shifting the error
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
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



/* Line 1675 of yacc.c  */
#line 436 "awkp.y"


bool_t parse_string_awkvm(awkvm_t *vm, const char_t *begin, const char_t *end) {
  int ok;
#if YYDEBUG
  yydebug = 1;
#endif

  avm = vm;

  reset_lexer_awk();
  scan_lexer_awk((char *)begin, end - begin);
  ok = yyparse();
  free_lexer_awk();

  avm = NULL;

  return (ok == 0);
}

bool_t parse_file_awkvm(awkvm_t *vm, const char *file) {
  int ok;
#if YYDEBUG
  yydebug = 1;
#endif
  yyin = fopen(file, "r");
  if( yyin ) {

    avm = vm;

    reset_lexer_awk();
    ok = yyparse();
    free_lexer_awk();
    fclose(yyin);
    yyin = NULL;

    avm = NULL;

    return (ok == 0);
  }
  return FALSE;
}

int yyerror(char *s)
{ 
  errormsg(E_FATAL, "%s: parse error at line %ld before '%s'\n", 
	   inputfile, inputline, yytext); 
  return 0;
}

/* we never parse multiple files */
int yywrap() { return 1; }

