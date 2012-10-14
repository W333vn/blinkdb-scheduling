/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 268 of yacc.c  */
#line 1 "src/mmlparse2.y"

#pragma ident "@(#) $Id: mmlparse2.y,v 1.10 2011/10/31 08:48:56 bzfkocht Exp $"
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                           */
/*   File....: mmlparse.y                                                    */
/*   Name....: MML Parser                                                    */
/*   Author..: Thorsten Koch                                                 */
/*   Copyright by Author, All rights reserved                                */
/*                                                                           */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*
 * Copyright (C) 2001-2011 by Thorsten Koch <koch@zib.de>
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */
/*lint -e428 -e433 -e506 -e514 -e525 -e527 -e537 -e568 -e574 */
/*lint -e639 -e659 -e661 -e662 -e676 -e685 */
/*lint -e713 -e717 -e732 -e734 -e737 -e744 -e750 -e751 -e753 -e762 -e764 -e774 -e778 */
/*lint -e810 -e818 -e825 -e830 */
/*lint -esym(530,yylen) */
/*lint -esym(563,yyerrorlab) */   
/*lint -esym(746,__yy_memcpy) -esym(516,__yy_memcpy) */
/*lint -esym(718,yylex) -esym(746,yylex) */
/*lint -esym(644,yyval,yylval) -esym(645,yylval) -esym(550,yynerrs) */
/*lint -esym(553,__GNUC__)  -esym(578,yylen) */
/*lint -esym(768,bits) -esym(553,YYSTACK_USE_ALLOCA) */
/*lint -esym(593,yymsg) Custodial pointer possibly not freed */
/*lint -esym(426,mem_malloc) call violates semantics */
   
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "bool.h"
#include "mshell.h"
#include "ratlptypes.h"
#include "numb.h"
#include "elem.h"
#include "tuple.h"
#include "mme.h"
#include "set.h"
#include "symbol.h"
#include "entry.h"
#include "idxset.h"
#include "rdefpar.h"
#include "bound.h"
#include "define.h"
#include "mono.h"
#include "term.h"
#include "list.h"
#include "stmt.h"
#include "local.h"
#include "code.h"
#include "inst.h"   
        
#define YYERROR_VERBOSE 1

/*lint -sem(yyerror, 1p && nulterm(1), r_no) */ 
extern void yyerror(const char* s);
 


/* Line 268 of yacc.c  */
#line 147 "src/mmlparse2.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     DECLSET = 258,
     DECLPAR = 259,
     DECLVAR = 260,
     DECLMIN = 261,
     DECLMAX = 262,
     DECLSUB = 263,
     DECLSOS = 264,
     DEFNUMB = 265,
     DEFSTRG = 266,
     DEFBOOL = 267,
     DEFSET = 268,
     PRINT = 269,
     CHECK = 270,
     BINARY = 271,
     INTEGER = 272,
     REAL = 273,
     IMPLICIT = 274,
     ASGN = 275,
     DO = 276,
     WITH = 277,
     IN = 278,
     TO = 279,
     UNTIL = 280,
     BY = 281,
     FORALL = 282,
     EXISTS = 283,
     PRIORITY = 284,
     STARTVAL = 285,
     DEFAULT = 286,
     CMP_LE = 287,
     CMP_GE = 288,
     CMP_EQ = 289,
     CMP_LT = 290,
     CMP_GT = 291,
     CMP_NE = 292,
     INFTY = 293,
     AND = 294,
     OR = 295,
     XOR = 296,
     NOT = 297,
     SUM = 298,
     MIN = 299,
     MAX = 300,
     ARGMIN = 301,
     ARGMAX = 302,
     PROD = 303,
     IF = 304,
     THEN = 305,
     ELSE = 306,
     END = 307,
     INTER = 308,
     UNION = 309,
     CROSS = 310,
     SYMDIFF = 311,
     WITHOUT = 312,
     PROJ = 313,
     MOD = 314,
     DIV = 315,
     POW = 316,
     FAC = 317,
     CARD = 318,
     ABS = 319,
     SGN = 320,
     ROUND = 321,
     FLOOR = 322,
     CEIL = 323,
     LOG = 324,
     LN = 325,
     EXP = 326,
     SQRT = 327,
     RANDOM = 328,
     ORD = 329,
     READ = 330,
     AS = 331,
     SKIP = 332,
     USE = 333,
     COMMENT = 334,
     MATCH = 335,
     SUBSETS = 336,
     INDEXSET = 337,
     POWERSET = 338,
     VIF = 339,
     VABS = 340,
     TYPE1 = 341,
     TYPE2 = 342,
     LENGTH = 343,
     SUBSTR = 344,
     NUMBSYM = 345,
     STRGSYM = 346,
     VARSYM = 347,
     SETSYM = 348,
     NUMBDEF = 349,
     STRGDEF = 350,
     BOOLDEF = 351,
     SETDEF = 352,
     DEFNAME = 353,
     NAME = 354,
     STRG = 355,
     NUMB = 356,
     SCALE = 357,
     SEPARATE = 358,
     CHECKONLY = 359,
     INDICATOR = 360
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 293 of yacc.c  */
#line 79 "src/mmlparse2.y"

   unsigned int bits;
   Numb*        numb;
   const char*  strg;
   const char*  name;
   Symbol*      sym;
   Define*      def;
   CodeNode*    code;



/* Line 293 of yacc.c  */
#line 300 "src/mmlparse2.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 312 "src/mmlparse2.c"

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2875

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  118
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  290
/* YYNRULES -- Number of states.  */
#define YYNSTATES  821

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   360

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     113,   114,   108,   106,   112,   107,     2,   115,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   109,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   110,     2,   111,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   116,     2,   117,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    31,    40,    49,    57,    59,    63,
      70,    79,    84,    87,    96,   105,   114,   123,   125,   129,
     139,   148,   154,   156,   158,   160,   161,   164,   174,   181,
     190,   196,   206,   213,   225,   234,   235,   237,   240,   241,
     244,   248,   258,   268,   269,   272,   275,   284,   293,   294,
     297,   298,   301,   303,   307,   309,   312,   315,   319,   323,
     328,   334,   340,   346,   348,   352,   357,   363,   371,   376,
     381,   386,   391,   398,   405,   412,   419,   432,   445,   458,
     471,   484,   497,   510,   523,   536,   549,   562,   575,   588,
     601,   614,   627,   636,   645,   654,   663,   667,   671,   675,
     679,   683,   687,   691,   695,   699,   703,   707,   711,   715,
     719,   723,   727,   731,   735,   739,   743,   747,   750,   754,
     755,   759,   761,   763,   765,   767,   769,   771,   773,   775,
     779,   783,   787,   791,   795,   799,   801,   805,   809,   813,
     817,   819,   822,   825,   827,   831,   836,   839,   844,   852,
     856,   862,   867,   872,   873,   875,   877,   881,   884,   887,
     890,   893,   896,   901,   903,   905,   911,   915,   917,   921,
     925,   929,   933,   937,   941,   943,   948,   950,   954,   958,
     963,   966,   971,   974,   982,   988,   996,  1002,  1007,  1015,
    1020,  1028,  1032,  1036,  1040,  1044,  1050,  1056,  1063,  1068,
    1076,  1081,  1084,  1087,  1090,  1093,  1096,  1098,  1102,  1104,
    1108,  1112,  1116,  1120,  1124,  1128,  1132,  1136,  1140,  1144,
    1148,  1152,  1156,  1160,  1164,  1167,  1171,  1175,  1180,  1185,
    1193,  1196,  1200,  1201,  1205,  1207,  1211,  1213,  1217,  1221,
    1223,  1227,  1231,  1235,  1239,  1244,  1246,  1249,  1252,  1254,
    1258,  1263,  1268,  1273,  1278,  1283,  1285,  1287,  1289,  1292,
    1295,  1300,  1305,  1308,  1313,  1318,  1323,  1328,  1333,  1338,
    1343,  1348,  1353,  1358,  1362,  1367,  1376,  1383,  1391,  1400,
    1405
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     119,     0,    -1,   120,    -1,   128,    -1,   131,    -1,   141,
      -1,   142,    -1,   154,    -1,   123,    -1,   124,    -1,   125,
      -1,   126,    -1,   157,    -1,     3,    99,    20,   161,   109,
      -1,     3,    99,   110,   159,   111,    20,   161,   109,    -1,
       3,    99,   110,   159,   111,    20,   121,   109,    -1,     3,
      99,   110,   111,    20,   121,   109,    -1,   122,    -1,   121,
     112,   122,    -1,    81,   113,   161,   112,   172,   114,    -1,
      81,   113,   161,   112,   172,   112,   172,   114,    -1,    83,
     113,   161,   114,    -1,   169,   161,    -1,    10,    98,   113,
     127,   114,    20,   172,   109,    -1,    11,    98,   113,   127,
     114,    20,   172,   109,    -1,    12,    98,   113,   127,   114,
      20,   168,   109,    -1,    13,    98,   113,   127,   114,    20,
     161,   109,    -1,    99,    -1,   127,   112,    99,    -1,     4,
      99,   110,   159,   111,    20,   137,   130,   109,    -1,     4,
      99,   110,   159,   111,    20,   172,   109,    -1,     4,    99,
      20,   129,   109,    -1,     4,    -1,   137,    -1,   172,    -1,
      -1,    31,   172,    -1,     5,    99,   110,   159,   111,   132,
     133,   134,   109,    -1,     5,    99,   132,   133,   134,   109,
      -1,     5,    99,   110,   159,   111,    19,    16,   109,    -1,
       5,    99,    19,    16,   109,    -1,     5,    99,   110,   159,
     111,    16,   135,   136,   109,    -1,     5,    99,    16,   135,
     136,   109,    -1,     5,    99,   110,   159,   111,    17,   133,
     134,   135,   136,   109,    -1,     5,    99,    17,   133,   134,
     135,   136,   109,    -1,    -1,    18,    -1,    19,    17,    -1,
      -1,    33,   172,    -1,    33,   107,    38,    -1,    33,    49,
     168,    50,   172,    51,   107,    38,    52,    -1,    33,    49,
     168,    50,   107,    38,    51,   172,    52,    -1,    -1,    32,
     172,    -1,    32,    38,    -1,    32,    49,   168,    50,   172,
      51,    38,    52,    -1,    32,    49,   168,    50,    38,    51,
     172,    52,    -1,    -1,    29,   172,    -1,    -1,    30,   172,
      -1,   138,    -1,   137,   112,   138,    -1,   165,    -1,   139,
     140,    -1,   169,   172,    -1,    22,   171,    22,    -1,   139,
     171,    22,    -1,   140,   139,   171,    22,    -1,     6,    99,
      21,   149,   109,    -1,     7,    99,    21,   149,   109,    -1,
       8,    99,    21,   143,   109,    -1,   144,    -1,   143,    39,
     144,    -1,    27,   159,    21,   143,    -1,    49,   168,    50,
     143,    52,    -1,    49,   168,    50,   143,    51,   143,    52,
      -1,   149,   148,   149,   146,    -1,   149,   148,   172,   146,
      -1,   172,   148,   149,   146,    -1,   172,   148,   172,   146,
      -1,   172,   148,   149,    32,   172,   146,    -1,   172,   148,
     172,    32,   172,   146,    -1,   172,   148,   149,    33,   172,
     146,    -1,   172,   148,   172,    33,   172,   146,    -1,    84,
     145,    50,   149,   148,   149,    51,   149,   148,   149,    52,
     146,    -1,    84,   145,    50,   172,   148,   149,    51,   149,
     148,   149,    52,   146,    -1,    84,   145,    50,   149,   148,
     172,    51,   149,   148,   149,    52,   146,    -1,    84,   145,
      50,   149,   148,   149,    51,   172,   148,   149,    52,   146,
      -1,    84,   145,    50,   149,   148,   149,    51,   149,   148,
     172,    52,   146,    -1,    84,   145,    50,   172,   148,   172,
      51,   149,   148,   149,    52,   146,    -1,    84,   145,    50,
     172,   148,   149,    51,   172,   148,   149,    52,   146,    -1,
      84,   145,    50,   172,   148,   149,    51,   149,   148,   172,
      52,   146,    -1,    84,   145,    50,   149,   148,   172,    51,
     172,   148,   149,    52,   146,    -1,    84,   145,    50,   149,
     148,   172,    51,   149,   148,   172,    52,   146,    -1,    84,
     145,    50,   149,   148,   149,    51,   172,   148,   172,    52,
     146,    -1,    84,   145,    50,   172,   148,   172,    51,   172,
     148,   149,    52,   146,    -1,    84,   145,    50,   172,   148,
     172,    51,   149,   148,   172,    52,   146,    -1,    84,   145,
      50,   172,   148,   149,    51,   172,   148,   172,    52,   146,
      -1,    84,   145,    50,   149,   148,   172,    51,   172,   148,
     172,    52,   146,    -1,    84,   145,    50,   172,   148,   172,
      51,   172,   148,   172,    52,   146,    -1,    84,   145,    50,
     149,   148,   149,    52,   146,    -1,    84,   145,    50,   172,
     148,   149,    52,   146,    -1,    84,   145,    50,   149,   148,
     172,    52,   146,    -1,    84,   145,    50,   172,   148,   172,
      52,   146,    -1,   149,    37,   149,    -1,   172,    37,   149,
      -1,   149,    37,   172,    -1,   149,    34,   149,    -1,   172,
      34,   149,    -1,   149,    34,   172,    -1,   149,    32,   149,
      -1,   172,    32,   149,    -1,   149,    32,   172,    -1,   149,
      33,   149,    -1,   172,    33,   149,    -1,   149,    33,   172,
      -1,   149,    35,   149,    -1,   172,    35,   149,    -1,   149,
      35,   172,    -1,   149,    36,   149,    -1,   172,    36,   149,
      -1,   149,    36,   172,    -1,   145,    39,   145,    -1,   145,
      40,   145,    -1,   145,    41,   145,    -1,    42,   145,    -1,
     113,   145,   114,    -1,    -1,   146,   112,   147,    -1,   102,
      -1,   103,    -1,   104,    -1,   105,    -1,    32,    -1,    33,
      -1,    34,    -1,   150,    -1,   149,   106,   150,    -1,   149,
     107,   150,    -1,   149,   106,   173,    -1,   149,   107,   173,
      -1,   172,   106,   150,    -1,   172,   107,   150,    -1,   151,
      -1,   150,   108,   174,    -1,   150,   115,   174,    -1,   173,
     108,   151,    -1,   150,   108,   151,    -1,   152,    -1,   106,
     151,    -1,   107,   151,    -1,   153,    -1,   153,    61,   174,
      -1,    43,   159,    21,   150,    -1,    92,   170,    -1,    85,
     113,   149,   114,    -1,    49,   168,    50,   149,    51,   149,
      52,    -1,   113,   149,   114,    -1,     9,    99,    21,   155,
     109,    -1,   156,   135,    21,   149,    -1,    27,   159,    21,
     155,    -1,    -1,    86,    -1,    87,    -1,    21,   158,   109,
      -1,    14,   171,    -1,    14,   169,    -1,    14,   161,    -1,
      14,    92,    -1,    15,   168,    -1,    27,   159,    21,   158,
      -1,   160,    -1,   161,    -1,   169,    23,   161,    22,   168,
      -1,   169,    23,   161,    -1,   162,    -1,   161,    54,   162,
      -1,   161,   106,   162,    -1,   161,    56,   162,    -1,   161,
     107,   162,    -1,   161,    57,   162,    -1,   161,    53,   162,
      -1,   163,    -1,    54,   159,    21,   163,    -1,   164,    -1,
     163,    55,   164,    -1,   163,   108,   164,    -1,    53,   159,
      21,   164,    -1,    93,   170,    -1,    97,   113,   171,   114,
      -1,   116,   117,    -1,   116,   172,    24,   172,    26,   172,
     117,    -1,   116,   172,    24,   172,   117,    -1,   116,   172,
      25,   172,    26,   172,   117,    -1,   116,   172,    25,   172,
     117,    -1,    46,   159,    21,   172,    -1,    46,   113,   172,
     114,   159,    21,   172,    -1,    47,   159,    21,   172,    -1,
      47,   113,   172,   114,   159,    21,   172,    -1,   113,   161,
     114,    -1,   116,   167,   117,    -1,   116,   171,   117,    -1,
     116,   159,   117,    -1,   116,   159,    21,   172,   117,    -1,
     116,   159,    21,   169,   117,    -1,    58,   113,   161,   112,
     169,   114,    -1,    82,   113,    93,   114,    -1,    49,   168,
      50,   161,    51,   161,    52,    -1,    75,   172,    76,   172,
      -1,   165,   166,    -1,    77,   172,    -1,    78,   172,    -1,
      79,   172,    -1,    80,   172,    -1,   169,    -1,   167,   112,
     169,    -1,   165,    -1,   172,    34,   172,    -1,   172,    37,
     172,    -1,   172,    36,   172,    -1,   172,    33,   172,    -1,
     172,    35,   172,    -1,   172,    32,   172,    -1,   161,    34,
     161,    -1,   161,    37,   161,    -1,   161,    36,   161,    -1,
     161,    33,   161,    -1,   161,    35,   161,    -1,   161,    32,
     161,    -1,   168,    39,   168,    -1,   168,    40,   168,    -1,
     168,    41,   168,    -1,    42,   168,    -1,   113,   168,   114,
      -1,   169,    23,   161,    -1,    28,   113,   159,   114,    -1,
      96,   113,   171,   114,    -1,    49,   168,    50,   168,    51,
     168,    52,    -1,    35,    36,    -1,    35,   171,    36,    -1,
      -1,   110,   171,   111,    -1,   172,    -1,   171,   112,   172,
      -1,   173,    -1,   172,   106,   173,    -1,   172,   107,   173,
      -1,   174,    -1,   173,   108,   174,    -1,   173,   115,   174,
      -1,   173,    59,   174,    -1,   173,    60,   174,    -1,    48,
     159,    21,   174,    -1,   175,    -1,   106,   175,    -1,   107,
     175,    -1,   176,    -1,   176,    61,   174,    -1,    43,   159,
      21,   173,    -1,    44,   160,    21,   174,    -1,    45,   160,
      21,   174,    -1,    44,   113,   159,   114,    -1,    45,   113,
     159,   114,    -1,   101,    -1,   100,    -1,    99,    -1,    90,
     170,    -1,    91,   170,    -1,    94,   113,   171,   114,    -1,
      95,   113,   171,   114,    -1,   176,    62,    -1,    63,   113,
     161,   114,    -1,    64,   113,   172,   114,    -1,    65,   113,
     172,   114,    -1,    66,   113,   172,   114,    -1,    67,   113,
     172,   114,    -1,    68,   113,   172,   114,    -1,    69,   113,
     172,   114,    -1,    70,   113,   172,   114,    -1,    71,   113,
     172,   114,    -1,    72,   113,   172,   114,    -1,   113,   172,
     114,    -1,    88,   113,   172,   114,    -1,    89,   113,   172,
     112,   172,   112,   172,   114,    -1,    73,   113,   172,   112,
     172,   114,    -1,    49,   168,    50,   172,    51,   172,    52,
      -1,    74,   113,   161,   112,   172,   112,   172,   114,    -1,
      44,   113,   171,   114,    -1,    45,   113,   171,   114,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   147,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   165,   172,   178,   184,   194,   195,   198,
     201,   204,   210,   219,   228,   237,   246,   255,   258,   268,
     271,   274,   281,   284,   285,   292,   293,   301,   308,   317,
     327,   338,   347,   357,   361,   371,   372,   373,   377,   380,
     381,   382,   387,   395,   396,   397,   398,   403,   411,   412,
     416,   417,   425,   426,   429,   430,   434,   438,   442,   445,
     457,   460,   470,   476,   479,   482,   487,   492,   500,   503,
     508,   513,   520,   524,   529,   533,   539,   542,   547,   552,
     557,   561,   568,   575,   581,   587,   593,   598,   606,   615,
     624,   632,   643,   646,   650,   655,   663,   664,   667,   670,
     671,   674,   677,   678,   681,   684,   685,   688,   691,   692,
     695,   698,   699,   702,   705,   706,   707,   708,   709,   713,
     714,   718,   719,   720,   721,   725,   726,   727,   731,   732,
     733,   734,   735,   738,   739,   747,   748,   749,   753,   754,
     758,   759,   760,   766,   767,   770,   776,   779,   780,   783,
     791,   797,   800,   806,   807,   808,   816,   820,   821,   822,
     823,   824,   825,   835,   836,   843,   846,   852,   853,   854,
     857,   858,   861,   862,   865,   866,   870,   871,   872,   875,
     879,   882,   887,   888,   891,   894,   897,   900,   903,   906,
     909,   912,   913,   914,   915,   916,   917,   918,   921,   924,
     930,   931,   935,   936,   937,   938,   942,   945,   948,   952,
     953,   954,   955,   956,   957,   958,   959,   960,   961,   962,
     963,   964,   965,   966,   967,   968,   969,   970,   971,   976,
     982,   983,   987,   990,   996,   999,  1005,  1006,  1007,  1011,
    1012,  1013,  1014,  1015,  1016,  1022,  1023,  1024,  1028,  1029,
    1030,  1033,  1036,  1039,  1042,  1048,  1049,  1050,  1053,  1056,
    1059,  1064,  1069,  1070,  1071,  1072,  1073,  1074,  1075,  1076,
    1077,  1078,  1079,  1081,  1082,  1083,  1086,  1089,  1092,  1095,
    1098
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "DECLSET", "DECLPAR", "DECLVAR",
  "DECLMIN", "DECLMAX", "DECLSUB", "DECLSOS", "DEFNUMB", "DEFSTRG",
  "DEFBOOL", "DEFSET", "PRINT", "CHECK", "BINARY", "INTEGER", "REAL",
  "IMPLICIT", "ASGN", "DO", "WITH", "IN", "TO", "UNTIL", "BY", "FORALL",
  "EXISTS", "PRIORITY", "STARTVAL", "DEFAULT", "CMP_LE", "CMP_GE",
  "CMP_EQ", "CMP_LT", "CMP_GT", "CMP_NE", "INFTY", "AND", "OR", "XOR",
  "NOT", "SUM", "MIN", "MAX", "ARGMIN", "ARGMAX", "PROD", "IF", "THEN",
  "ELSE", "END", "INTER", "UNION", "CROSS", "SYMDIFF", "WITHOUT", "PROJ",
  "MOD", "DIV", "POW", "FAC", "CARD", "ABS", "SGN", "ROUND", "FLOOR",
  "CEIL", "LOG", "LN", "EXP", "SQRT", "RANDOM", "ORD", "READ", "AS",
  "SKIP", "USE", "COMMENT", "MATCH", "SUBSETS", "INDEXSET", "POWERSET",
  "VIF", "VABS", "TYPE1", "TYPE2", "LENGTH", "SUBSTR", "NUMBSYM",
  "STRGSYM", "VARSYM", "SETSYM", "NUMBDEF", "STRGDEF", "BOOLDEF", "SETDEF",
  "DEFNAME", "NAME", "STRG", "NUMB", "SCALE", "SEPARATE", "CHECKONLY",
  "INDICATOR", "'+'", "'-'", "'*'", "';'", "'['", "']'", "','", "'('",
  "')'", "'/'", "'{'", "'}'", "$accept", "stmt", "decl_set",
  "set_entry_list", "set_entry", "def_numb", "def_strg", "def_bool",
  "def_set", "name_list", "decl_par", "par_singleton", "par_default",
  "decl_var", "var_type", "lower", "upper", "priority", "startval",
  "cexpr_entry_list", "cexpr_entry", "matrix_head", "matrix_body",
  "decl_obj", "decl_sub", "constraint_list", "constraint", "vbool",
  "con_attr_list", "con_attr", "con_type", "vexpr", "vproduct", "vfactor",
  "vexpo", "vval", "decl_sos", "soset", "sos_type", "exec_do", "command",
  "idxset", "pure_idxset", "sexpr", "sunion", "sproduct", "sval", "read",
  "read_par", "tuple_list", "lexpr", "tuple", "symidx", "cexpr_list",
  "cexpr", "cproduct", "cfactor", "cexpo", "cval", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,    43,    45,    42,    59,
      91,    93,    44,    40,    41,    47,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   118,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   120,   120,   120,   121,   121,   121,
     121,   121,   122,   123,   124,   125,   126,   127,   127,   128,
     128,   128,   128,   129,   129,   130,   130,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   133,   133,
     133,   133,   133,   134,   134,   134,   134,   134,   135,   135,
     136,   136,   137,   137,   137,   137,   138,   139,   140,   140,
     141,   141,   142,   143,   143,   143,   143,   143,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   146,
     146,   147,   147,   147,   147,   148,   148,   148,   149,   149,
     149,   149,   149,   149,   149,   150,   150,   150,   150,   150,
     151,   151,   151,   152,   152,   152,   153,   153,   153,   153,
     154,   155,   155,   156,   156,   156,   157,   158,   158,   158,
     158,   158,   158,   159,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   162,   162,   163,   163,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   165,   166,   166,   166,   166,   167,   167,   167,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   172,   173,
     173,   173,   173,   173,   173,   174,   174,   174,   175,   175,
     175,   175,   175,   175,   175,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     176
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     5,     8,     8,     7,     1,     3,     6,
       8,     4,     2,     8,     8,     8,     8,     1,     3,     9,
       8,     5,     1,     1,     1,     0,     2,     9,     6,     8,
       5,     9,     6,    11,     8,     0,     1,     2,     0,     2,
       3,     9,     9,     0,     2,     2,     8,     8,     0,     2,
       0,     2,     1,     3,     1,     2,     2,     3,     3,     4,
       5,     5,     5,     1,     3,     4,     5,     7,     4,     4,
       4,     4,     6,     6,     6,     6,    12,    12,    12,    12,
      12,    12,    12,    12,    12,    12,    12,    12,    12,    12,
      12,    12,     8,     8,     8,     8,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     1,     3,     3,     3,     3,
       1,     2,     2,     1,     3,     4,     2,     4,     7,     3,
       5,     4,     4,     0,     1,     1,     3,     2,     2,     2,
       2,     2,     4,     1,     1,     5,     3,     1,     3,     3,
       3,     3,     3,     3,     1,     4,     1,     3,     3,     4,
       2,     4,     2,     7,     5,     7,     5,     4,     7,     4,
       7,     3,     3,     3,     3,     5,     5,     6,     4,     7,
       4,     2,     2,     2,     2,     2,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     4,     4,     7,
       2,     3,     0,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     4,     1,     2,     2,     1,     3,
       4,     4,     4,     4,     4,     1,     1,     1,     2,     2,
       4,     4,     2,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     3,     4,     8,     6,     7,     8,     4,
       4
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    32,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     8,     9,    10,    11,     3,
       4,     5,     6,     7,    12,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,    58,    48,    46,     0,     0,
      48,     0,     0,     0,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,   242,   170,   242,     0,
       0,     0,   267,   266,   265,     0,     0,     0,     0,   169,
     177,   184,   186,   168,   167,   244,   246,   249,   255,   258,
       0,     0,     0,     0,     0,     0,   171,     0,     0,     0,
       0,     0,   173,   174,     0,   166,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    62,     0,    64,     0,    34,
       0,     0,    60,     0,    53,     0,    47,     0,    53,     0,
       0,     0,   242,     0,     0,     0,     0,   138,   145,   150,
     153,     0,   246,     0,     0,     0,     0,     0,    73,     0,
       0,     0,   164,   165,     0,    58,    27,     0,     0,     0,
       0,   240,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   268,   269,   190,     0,     0,     0,   256,
     257,     0,     0,   192,     0,   218,     0,   216,     0,   244,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   272,     0,   234,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     0,     0,    31,
       0,     0,    65,     0,     0,     0,     0,   211,    66,     0,
      59,     0,     0,     0,     0,    49,     0,    58,    40,    45,
       0,     0,     0,     0,   156,     0,     0,   151,   152,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    72,
     135,   136,   137,     0,     0,     0,   160,     0,     0,     0,
       0,     0,     0,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   201,
     283,     0,   204,     0,   202,   203,     0,     0,   183,   178,
     180,   182,   179,   181,   187,   188,   245,   247,   248,   252,
     253,   250,   251,   259,     0,     0,     0,   235,   230,   228,
     225,   229,   227,   226,   231,   232,   233,   236,   224,   222,
     219,   223,   221,   220,     0,   172,   176,     0,     0,     0,
      17,     0,     0,    67,     0,     0,    63,     0,     0,   212,
     213,   214,   215,     0,    61,    42,     0,    50,    55,     0,
      54,    60,    58,    48,     0,    48,    38,     0,     0,     0,
       0,     0,     0,   159,   139,   141,   140,   142,   149,   146,
     147,   154,   143,   247,   144,   248,   148,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
     129,   129,   129,   129,   163,     0,    28,     0,     0,     0,
       0,   260,   263,   289,   261,   264,   290,   262,     0,   197,
       0,   199,   254,     0,     0,   189,   185,     0,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,     0,     0,
     208,   284,     0,   243,   270,   271,   191,     0,     0,   217,
       0,     0,   237,     0,     0,     0,   238,     0,     0,     0,
      16,     0,    22,     0,     0,   210,    68,     0,    35,     0,
       0,     0,     0,    60,    53,     0,    53,   155,   260,     0,
       0,   157,     0,     0,    75,     0,     0,     0,   128,   124,
     125,   126,     0,     0,   112,   114,   115,   117,   109,   111,
     118,   120,   121,   123,   106,   108,   113,   116,   110,   119,
     122,   107,    78,    79,     0,     0,    80,     0,     0,    81,
     162,   161,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   206,   205,     0,   194,     0,   196,
       0,   175,     0,     0,    18,    15,    14,    69,     0,     0,
      30,     0,     0,     0,    44,     0,    58,    39,     0,     0,
       0,     0,     0,    76,     0,     0,     0,   129,   129,   129,
     129,    23,    24,    25,    26,     0,     0,     0,     0,   207,
     286,     0,     0,     0,     0,     0,     0,    21,    36,    29,
       0,     0,     0,     0,    41,    60,    37,     0,     0,     0,
       0,     0,     0,     0,   131,   132,   133,   134,   130,    82,
      84,    83,    85,   198,   200,   209,   287,     0,     0,   193,
     195,   239,     0,     0,     0,     0,     0,     0,   158,    77,
       0,   129,     0,   129,     0,   129,     0,   129,   288,   285,
       0,    19,     0,     0,     0,     0,    43,     0,     0,   102,
       0,     0,   104,     0,     0,   103,     0,     0,   105,     0,
      52,    51,    57,    56,     0,     0,     0,     0,     0,     0,
       0,     0,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   129,   129,   129,    86,    90,    89,    96,    88,
      95,    94,   100,    87,    93,    92,    99,    91,    98,    97,
     101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   429,   430,    15,    16,    17,    18,   177,
      19,   133,   649,    20,    50,   144,   297,   142,   292,   134,
     135,   136,   282,    21,    22,   167,   168,   325,   612,   708,
     333,   326,   157,   158,   159,   160,    23,   174,   175,    24,
      39,   121,   122,   123,   100,   101,   102,   137,   287,   226,
     116,   124,   213,   104,   118,   106,   107,   108,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -457
static const yytype_int16 yypact[] =
{
    1641,   -49,   -45,   -26,   -10,    47,    74,    86,    97,   105,
     122,   144,   329,   227,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,    -6,     0,    10,   251,   258,
     282,   302,   229,   235,   263,   272,  1443,  1294,   912,   261,
    -457,   810,   851,  1218,   912,   363,   378,  -457,   427,   912,
     378,  2278,  2278,  1115,   126,   306,   306,   306,   306,  1680,
     912,    -5,    18,  1038,  1585,   912,  1294,   912,   912,   314,
     320,   354,   362,   368,   371,   375,   383,   417,   420,   428,
     464,   474,   477,   509,   538,   360,   360,  -457,   360,   541,
     545,   548,  -457,  -457,  -457,  2730,  2730,  2098,  1368,   886,
    -457,    16,  -457,  -457,   468,   467,   -14,  -457,  -457,   549,
     558,  1294,  1294,   572,  1294,   766,   793,   665,   294,  1294,
     810,   606,  -457,   886,   676,  -457,   702,   688,   601,  2444,
    1294,  2444,  2444,   608,   611,  -457,   723,   898,  2444,   467,
     643,  2444,   755,  2504,   765,   695,  -457,   699,   765,   912,
    1294,   700,   360,  2331,  2331,  2278,   524,   -56,  -457,  -457,
     756,   586,   274,   682,   912,  1294,  2158,    42,  -457,    15,
     110,   912,  -457,  -457,   709,   363,  -457,   -54,   324,   397,
     401,  -457,    -3,   800,  1517,   825,  1517,   828,  2098,   833,
    2098,   841,   844,   574,   845,   848,   810,   810,  2444,  2444,
    2444,  2444,  2444,  2444,  2444,  2444,  2444,  2444,   810,   777,
    2444,  2444,  2444,  -457,  -457,  -457,  2444,  2444,  2444,  -457,
    -457,   205,   246,  -457,   -17,   898,   -33,   676,   129,    31,
     810,   810,   810,   810,   810,   810,   419,   419,  2444,  2444,
    2444,  2677,  2677,  2677,  2677,  2677,  -457,   912,  -457,   729,
    2444,   248,    35,    33,   810,   810,   810,   810,   810,   810,
    1294,  1294,  1294,   810,  2444,  2444,  2444,  2444,  2444,  2444,
     871,   329,   810,  -457,   188,   856,    14,   997,   -19,  -457,
     847,  2444,   723,  2444,  2444,  2444,  2444,  -457,   467,   859,
     467,  2444,   786,  1294,  1919,   467,  1740,   363,  -457,  1252,
     799,   875,  1001,  2278,  -457,   391,   391,  -457,  -457,   393,
     502,  2278,  2278,  -457,  2384,  2677,  2677,  2278,  2278,  2384,
    -457,   881,  1013,  2158,  2158,  1016,   952,   982,  2218,  -457,
    -457,  -457,  -457,  2278,  2278,   920,  -457,   924,   837,   940,
     943,   970,   971,  -457,  2444,   832,   413,  2677,   892,   487,
    2677,   529,  2444,   787,  2444,  2677,  2098,   419,  2759,   550,
     821,   987,  1012,  1055,  1061,  1129,  1131,  1140,  1142,  1151,
     604,   915,   906,  1166,   668,   615,   591,   681,   775,  -457,
    -457,  1620,  -457,   847,  -457,  -457,  2444,  2444,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,   467,   -14,   -14,  -457,
    -457,  -457,  -457,  -457,   925,  1294,   803,  -457,   886,   886,
     886,   886,   886,   886,  -457,   973,   973,   886,   467,   467,
     467,   467,   467,   467,   810,  -457,    29,   932,   956,   -32,
    -457,   810,   660,  -457,  2444,  2444,  -457,    21,  2444,   467,
     467,   467,   467,  1218,   467,  -457,  1088,  -457,  -457,  1294,
     467,   755,   363,   378,   733,   378,  -457,  2278,  2278,  1188,
     912,  1294,  2278,  -457,   -56,   274,   -56,   274,  -457,  -457,
    -457,  -457,   -56,   274,   -56,   274,  -457,  1115,  1115,  -457,
      58,   535,   633,  2158,  2158,  2158,  2278,  2278,  2278,  2278,
    2278,  2278,  2278,  2278,  2278,  2278,  2278,  2278,  2278,  -457,
     654,   586,   158,   189,   126,  2278,  -457,  2444,  2444,  1294,
     810,   -14,  -457,  -457,  -457,  -457,  -457,  -457,   912,   467,
     912,   467,  -457,  1026,   137,  -457,    16,   847,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  2444,  2444,
    -457,  -457,  2444,  -457,  -457,  -457,  -457,   953,   200,  -457,
       8,    11,  -457,   730,   697,   807,  -457,  1294,   810,   810,
    -457,   847,   886,   255,  1087,   467,  -457,    22,     4,   917,
    2564,  1116,   967,   755,   765,   969,   765,   -56,   274,   150,
     215,  -457,  1060,  1192,  1047,   364,   145,   202,  -457,  -457,
    1051,  1051,    15,   110,   654,   586,   654,   586,   654,   586,
     654,   586,   654,   586,   654,   586,   654,   654,   654,   654,
     654,   654,   983,   983,  2444,  2444,   983,  2444,  2444,   983,
    -457,   654,   926,   958,   168,  1170,  1077,  1078,   810,  2444,
     986,  1197,   778,   867,  -457,  -457,  2444,  -457,  2444,  -457,
    1294,   793,  1018,   954,  -457,  -457,  -457,  -457,  2444,  1014,
    -457,  1978,   259,  1800,  -457,  1025,   363,  -457,  1027,  2278,
    2278,  2278,  1115,  -457,  2278,  2278,  1230,   467,   467,   467,
     467,  -457,  -457,  -457,  -457,  2444,  2444,  1318,   104,  -457,
    -457,  2444,  2444,   232,   240,    51,  2444,  -457,   467,  -457,
    1070,  2624,  1071,   289,  -457,   755,  -457,   273,   274,   224,
     167,   307,   322,   372,  -457,  -457,  -457,  -457,  -457,   983,
     983,   983,   983,   467,   467,  -457,  -457,  1209,  1214,  -457,
    -457,  -457,   818,  2444,  2037,  2444,  1860,  1028,  -457,  -457,
    2278,  -457,  2278,  -457,  2278,  -457,  2278,  -457,  -457,  -457,
    2444,  -457,   280,  1093,   339,  1095,  -457,    15,   110,   983,
      15,   110,   983,    15,   110,   983,    15,   110,   983,  1239,
    -457,  -457,  -457,  -457,  2278,  2278,  2278,  2278,  2278,  2278,
    2278,  2278,  -457,   357,   380,   387,   422,   433,   453,   456,
     469,   490,   512,   514,   531,   546,   553,   595,   645,  -457,
    -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,  -457,
    -457,  -457,  -457,  -457,  -457,   983,   983,   983,   983,   983,
     983,   983,   983,   983,   983,   983,   983,   983,   983,   983,
     983
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -457,  -457,  -457,   707,   587,  -457,  -457,  -457,  -457,   257,
    -457,  -457,  -457,  -457,   850,   -47,  -139,  -174,  -441,   727,
     873,  -125,  -457,  -457,  -457,  -456,   843,  -285,   313,  -457,
    -162,   186,  -299,  -122,  -457,  -457,  -457,   672,  -457,  -457,
     921,   226,   710,   741,  1288,   819,  -212,  1097,  -457,  -457,
      75,   769,   -46,   -57,   -36,    60,   176,   -90,  -457
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     105,   337,   182,   148,   381,   219,   220,   139,   334,   300,
     572,   281,   464,   466,    41,   161,   161,   170,   472,   474,
      43,   584,   585,   105,   394,   395,    45,    46,    47,    48,
      59,   307,   308,   343,   636,   648,   433,   638,   479,   480,
     214,   228,   215,   566,   647,   241,   242,   330,   331,   332,
      25,   557,   314,    59,    26,   386,   387,   435,   338,   315,
     339,   222,   229,   219,   220,   264,   265,   266,   267,   268,
     269,   236,   276,    27,   260,   261,   262,   560,   253,   383,
     561,   328,   230,   231,   384,   232,   233,   239,   240,    28,
     260,   261,   262,   105,   243,   278,   222,   483,   484,   485,
     382,   244,   288,   721,    42,   290,   304,   295,   184,   238,
      44,   162,   162,   162,   239,   240,   280,   239,   240,   310,
      49,   311,   312,   451,   237,   637,   238,   346,   639,   349,
     327,   186,   655,   238,   238,   234,   235,   239,   240,   239,
     240,   193,   330,   331,   332,   525,    29,   380,   105,   407,
     105,   329,   351,   171,   353,   375,   716,   438,   577,   376,
     377,   378,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   588,    30,   373,   374,   105,   330,   331,   332,
     105,   105,   105,   307,   308,    31,   248,   249,   629,   252,
     614,   615,   468,   406,   270,    32,   659,   476,   589,   590,
     591,   659,   396,    33,   220,   277,   699,   260,   261,   262,
     239,   240,   172,   173,   105,   162,   317,   318,   730,   731,
      34,   617,   618,    59,   437,   302,   162,    40,   418,   419,
     420,   421,   422,   423,   330,   331,   332,   156,   163,   169,
     322,   238,    35,   239,   240,   105,   385,   439,   440,   441,
     442,   311,   312,   629,   727,   444,   311,   312,   230,   231,
     450,   232,   233,   328,   311,   312,   629,   161,   128,   427,
     140,   428,    51,   311,   312,   147,   729,   673,   573,    52,
     254,   255,   256,   257,   258,   259,   183,   327,   482,   189,
     191,   192,   170,   194,   195,   317,   318,   501,   503,   397,
     398,   230,   231,    53,   232,   233,   239,   240,   317,   318,
     691,   234,   235,   178,   179,   180,   519,   635,   521,   379,
     524,   317,   318,    54,   224,   728,   264,   265,   266,   267,
     268,   269,   760,   241,   242,   414,   415,   416,   239,   240,
     726,   309,    55,    36,    37,   548,   239,   240,    56,   719,
     550,   551,   239,   240,   234,   235,    38,   720,   732,   733,
     380,   577,   379,   162,   645,   239,   240,   561,   446,   555,
     125,   465,   467,   734,   735,   301,    57,   473,   475,   311,
     312,   567,   319,   162,   162,    58,   239,   240,   162,   244,
     321,   762,   141,   162,   162,   239,   240,   335,   524,   565,
     239,   240,   105,   328,   511,   176,   574,   569,   576,   789,
     345,   143,   348,   317,   318,   662,   663,   399,   400,   401,
     402,   403,   580,   736,   737,   334,   161,   196,   311,   312,
     664,   665,   790,   197,   460,   656,   338,   658,   340,   791,
     461,   170,   587,   145,   146,   239,   240,   327,   327,   327,
     593,   595,   597,   599,   601,   603,   605,   161,   161,   161,
     161,   161,   161,   311,   312,    63,    64,   198,   119,   161,
     212,   622,   623,   404,   792,   199,   151,    69,   317,   318,
     554,   200,   695,   152,   201,   793,   317,   318,   202,   459,
     469,   470,   471,   311,   312,   401,   203,   305,   306,   311,
     312,    82,   631,   632,   462,   794,   633,   463,   795,   338,
     481,   341,    88,   338,   169,   342,    91,   578,   162,   500,
     502,   796,   162,   514,   571,   238,   517,   513,   317,   318,
     204,   522,   120,   205,   652,    98,   583,   162,   162,   311,
     312,   206,   797,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   317,
     318,   220,   311,   312,   798,   162,   799,   487,   488,   489,
     490,   491,   492,   239,   240,   317,   318,   207,   667,   668,
     238,   669,   670,   800,   624,   764,   765,   208,   766,   767,
     209,   768,   769,   678,   770,   771,   311,   312,   801,   238,
     683,   516,   684,   230,   231,   802,   232,   233,   317,   318,
     245,   246,   688,   260,   261,   262,   380,   693,   317,   318,
     311,   312,   210,   161,   356,   161,   170,   271,   701,   703,
     311,   312,   641,   313,   220,   239,   240,   317,   318,   713,
     714,   311,   312,   518,   579,   717,   718,   803,   309,   463,
     722,   211,   311,   312,   216,   678,   234,   235,   217,   317,
     318,   218,   527,   169,   586,   493,   494,   495,   496,   497,
     498,   247,   592,   594,   596,   598,   600,   602,   604,   606,
     607,   608,   609,   610,   611,   250,   582,   742,   263,   744,
     678,   621,   317,   318,   748,    59,   751,   804,   754,   272,
     757,   311,   312,   238,   759,   544,    63,    64,   274,   119,
     239,   240,   275,    67,    68,   685,   538,   279,    69,   162,
     698,   162,   162,   280,   162,   162,   543,   238,   774,   776,
     778,   780,   782,   784,   786,   788,   260,   261,   262,   317,
     318,   427,    82,   428,   626,   129,   627,   380,   640,   575,
     146,   317,   318,    88,   289,   230,   231,    91,   232,   233,
     311,   312,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   185,   187,   120,   239,   240,    98,    99,   115,   405,
     542,   628,   126,   230,   231,   291,   232,   233,   311,   312,
     162,   320,   162,   238,   162,   545,   162,   296,   254,   255,
     256,   257,   258,   259,   298,   103,   117,   115,   234,   235,
     299,   273,   138,   303,   613,   616,   619,   316,   336,   230,
     231,   344,   232,   233,   162,   162,   162,   162,   162,   162,
     162,   162,   260,   261,   262,   117,   234,   235,   221,   264,
     265,   266,   267,   268,   269,   697,   347,   579,   169,   350,
     700,   702,   115,   115,   352,   251,    63,    64,   629,   119,
     115,   221,   354,    67,    68,   355,   357,   227,    69,   358,
     372,   115,   234,   235,   230,   231,   432,   232,   233,   443,
     117,   117,    59,   117,   239,   240,    59,   238,   117,   546,
     681,   115,    82,   239,   240,   445,   457,    63,    64,   117,
     119,   520,   477,    88,    67,    68,   115,    91,   456,    69,
     260,   261,   262,   239,   240,   238,   747,   556,   750,   117,
     753,   424,   756,   120,   239,   240,    98,   234,   235,   221,
     740,   221,   741,    82,   117,   528,   506,   359,   360,   230,
     231,   504,   232,   233,    88,   505,   512,    59,    91,   371,
     773,   775,   777,   779,   781,   783,   785,   787,    63,    64,
     507,   119,   127,   508,   120,    67,    68,    98,   230,   231,
      69,   232,   233,   239,   240,   283,   284,   285,   286,   682,
     709,   710,   711,   712,   487,   488,   489,   490,   491,   492,
     509,   510,   234,   235,    82,   408,   409,   410,   411,   412,
     413,   115,   115,   115,   417,    88,   515,   230,   231,    91,
     232,   233,   260,   426,   493,   494,   495,   496,   497,   498,
     540,   234,   235,   239,   240,   120,   650,   539,    98,   117,
     117,   117,   239,   240,   115,   671,   260,   261,   262,   552,
     260,   261,   262,   431,   749,   558,   752,   434,   755,   138,
     758,   458,   260,   261,   262,   483,   484,   485,   311,   312,
     234,   235,   117,   478,   239,   240,   486,   672,   687,   559,
     634,   230,   231,    59,   232,   233,   654,   628,   657,   230,
     231,   660,   232,   233,    63,    64,   328,   119,   317,   318,
     483,    67,    68,   239,   240,   666,    69,   523,   675,   676,
     679,   529,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   239,   240,
      82,   723,   725,   689,   234,   235,   530,   260,   261,   262,
     686,    88,   234,   235,   694,    91,   696,   746,   570,   563,
     230,   231,   164,   232,   233,   761,   553,   763,   644,   455,
     547,   188,   549,   436,    98,   260,   261,   262,   149,    61,
      62,   239,   240,    65,   165,   523,   653,   239,   240,   531,
     568,   499,   562,   564,   117,   532,   620,   526,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
     115,     0,   425,   234,   235,   225,   646,     0,     0,   166,
     151,   431,   115,    83,    84,    85,    86,   152,     0,    89,
      90,     0,   138,     0,    92,    93,    94,     0,   117,     0,
       0,   153,   154,   230,   231,     0,   232,   233,   155,     0,
     117,   260,   261,   262,     0,   239,   240,   239,   240,     0,
     129,     0,   661,   533,     0,   534,   239,   240,   239,   240,
     115,   625,     0,    59,   535,     0,   536,   239,   240,     0,
       0,    60,    61,    62,     0,   537,    65,   130,   452,   453,
      47,   454,   239,   240,     0,     0,   234,   235,   117,   674,
     541,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   131,   311,   312,   630,     0,   115,   642,
     643,     0,   581,   239,   240,     0,    83,    84,    85,    86,
       0,   680,    89,    90,     0,   239,   240,    92,    93,    94,
     239,   240,   110,   738,    95,    96,   117,     0,   739,    59,
     431,   132,   704,   705,   706,   707,   111,    60,    61,    62,
      63,    64,    65,   112,     0,   239,   240,    67,    68,     0,
       0,     0,    69,   772,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,   677,
     715,   230,   231,     0,   232,   233,    82,     0,     0,     0,
       0,   115,    83,    84,    85,    86,     0,    88,    89,    90,
     113,    91,     0,    92,    93,    94,     0,     0,     0,     0,
      95,    96,     0,    59,     0,     0,     0,   114,     0,   117,
      98,    60,    61,    62,    63,    64,    65,    66,     0,     0,
       0,    67,    68,     0,   234,   235,    69,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,   131,     0,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,    83,    84,    85,    86,
       0,    88,    89,    90,     0,    91,     0,    92,    93,    94,
       0,     0,     0,     0,    95,    96,     0,     0,    59,     0,
       0,    97,     0,     0,    98,   223,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,    67,    68,     0,     0,
       0,    69,     0,     0,     0,     0,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,   388,   389,
     390,   391,   392,   393,     0,    82,     0,     0,     0,     0,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
      91,     0,    92,    93,    94,     0,     0,     0,     0,    95,
      96,     0,    59,     0,     0,     0,    97,     0,     0,    98,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
      67,    68,     0,     0,     0,    69,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,    83,    84,    85,    86,     0,
      88,    89,    90,     0,    91,     0,    92,    93,    94,     0,
      59,     0,     0,    95,    96,     0,     0,     0,     0,     0,
      97,    63,    64,    98,   119,     0,     0,     0,    67,    68,
       0,     0,     0,    69,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    59,     0,     0,     0,     0,
       0,     0,    12,    60,    61,    62,     0,    82,    65,   130,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,    91,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,   190,     0,
       0,    98,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,    89,    90,   181,     0,     0,    92,
      93,    94,     0,    60,    61,    62,    95,    96,    65,   130,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,    89,    90,     0,     0,   448,    92,
      93,    94,     0,    60,    61,    62,    95,    96,    65,   449,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,    89,    90,     0,     0,   692,    92,
      93,    94,     0,    60,    61,    62,    95,    96,    65,   130,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,    89,    90,     0,     0,   745,    92,
      93,    94,     0,    60,    61,    62,    95,    96,    65,   130,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,    84,
      85,    86,     0,     0,    89,    90,     0,   447,     0,    92,
      93,    94,    60,    61,    62,     0,    95,    96,   130,     0,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,    84,    85,
      86,     0,     0,    89,    90,     0,   690,     0,    92,    93,
      94,    60,    61,    62,     0,     0,     0,   130,     0,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
       0,     0,    89,    90,     0,   743,     0,    92,    93,    94,
      60,    61,    62,     0,     0,     0,   130,     0,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,     0,
       0,    89,    90,     0,     0,     0,    92,    93,    94,     0,
       0,    60,    61,    62,    63,    64,    65,    66,     0,     0,
     132,    67,    68,     0,     0,     0,    69,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,    83,    84,    85,    86,
       0,    88,    89,    90,     0,    91,     0,    92,    93,    94,
     323,   149,    61,    62,    95,    96,    65,   150,     0,     0,
       0,    97,     0,     0,    98,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,    83,    84,    85,    86,
     152,     0,    89,    90,     0,     0,     0,    92,    93,    94,
       0,   149,    61,    62,   153,   154,    65,   150,     0,     0,
       0,   324,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   151,     0,     0,    83,    84,    85,    86,
     152,     0,    89,    90,     0,     0,     0,    92,    93,    94,
       0,   149,    61,    62,   153,   154,    65,   150,     0,     0,
       0,   155,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   151,     0,     0,    83,    84,    85,    86,
     152,     0,    89,    90,   149,    61,    62,    92,    93,    94,
     150,     0,     0,     0,   153,   154,     0,     0,     0,     0,
       0,   155,     0,     0,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   151,     0,     0,    83,
      84,    85,    86,   152,     0,    89,    90,   149,    61,    62,
      92,    93,    94,   150,     0,     0,     0,   305,   306,     0,
       0,     0,     0,     0,   155,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   151,
       0,     0,    83,    84,    85,    86,   152,     0,    89,    90,
       0,     0,     0,    92,    93,    94,     0,    60,    61,    62,
     153,   154,    65,   130,     0,     0,     0,   155,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    89,    90,
       0,     0,     0,    92,    93,    94,     0,    60,    61,    62,
      95,    96,    65,   293,     0,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    89,    90,
       0,     0,     0,    92,    93,    94,     0,    60,    61,    62,
      95,   294,    65,   130,     0,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    89,    90,
       0,     0,     0,    92,    93,    94,     0,    60,    61,    62,
      95,   651,    65,   130,     0,     0,     0,   132,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,     0,     0,    89,    90,
      60,    61,    62,    92,    93,    94,   130,     0,     0,     0,
      95,   724,     0,     0,     0,     0,     0,   132,     0,     0,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    84,    85,    86,     0,
       0,    89,    90,    60,    61,    62,    92,    93,    94,   130,
       0,     0,     0,    95,    96,     0,     0,     0,     0,     0,
     132,     0,     0,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    63,    64,     0,   119,     0,
       0,     0,    67,     0,     0,     0,     0,    69,    83,    84,
      85,    86,     0,     0,    89,    90,     0,     0,     0,    92,
      93,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,    98
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-457))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      36,   175,    59,    50,    21,    95,    96,    43,   170,   148,
     451,   136,   311,   312,    20,    51,    52,    53,   317,   318,
      20,   477,   478,    59,   236,   237,    16,    17,    18,    19,
      35,   153,   154,    36,    26,    31,    22,    26,   323,   324,
      86,    98,    88,    22,    22,    59,    60,    32,    33,    34,
      99,    22,   108,    35,    99,    24,    25,    76,   112,   115,
     114,    97,    98,   153,   154,    32,    33,    34,    35,    36,
      37,    55,   129,    99,    39,    40,    41,   109,   114,   112,
     112,    39,    53,    54,   117,    56,    57,   106,   107,    99,
      39,    40,    41,   129,   108,   131,   132,    39,    40,    41,
     117,   115,   138,    52,   110,   141,   152,   143,   113,   112,
     110,    51,    52,    53,   106,   107,   112,   106,   107,   155,
     110,   106,   107,   297,   108,   117,   112,   184,   117,   186,
     166,   113,   573,   112,   112,   106,   107,   106,   107,   106,
     107,    66,    32,    33,    34,   357,    99,   114,   184,   114,
     186,   109,   188,    27,   190,   212,    52,   282,   457,   216,
     217,   218,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   114,    99,   210,   211,   212,    32,    33,    34,
     216,   217,   218,   305,   306,    99,   111,   112,    51,   114,
      32,    33,   314,   250,   119,    98,    51,   319,   483,   484,
     485,    51,   238,    98,   294,   130,   662,    39,    40,    41,
     106,   107,    86,    87,   250,   155,   106,   107,    51,    52,
      98,    32,    33,    35,   281,   150,   166,     0,   264,   265,
     266,   267,   268,   269,    32,    33,    34,    51,    52,    53,
     165,   112,    98,   106,   107,   281,   117,   283,   284,   285,
     286,   106,   107,    51,   695,   291,   106,   107,    53,    54,
     296,    56,    57,    39,   106,   107,    51,   303,    42,    81,
      44,    83,    21,   106,   107,    49,    52,   109,   452,    21,
      32,    33,    34,    35,    36,    37,    60,   323,   324,    63,
      64,    65,   328,    67,    68,   106,   107,   333,   334,   239,
     240,    53,    54,    21,    56,    57,   106,   107,   106,   107,
      51,   106,   107,    56,    57,    58,   352,   117,   354,   114,
     356,   106,   107,    21,    98,    52,    32,    33,    34,    35,
      36,    37,    52,    59,    60,   260,   261,   262,   106,   107,
      51,   155,   113,    14,    15,   381,   106,   107,   113,   117,
     386,   387,   106,   107,   106,   107,    27,   117,    51,    52,
     114,   660,   114,   303,   109,   106,   107,   112,   293,   405,
     109,   311,   312,    51,    52,   149,   113,   317,   318,   106,
     107,   438,   108,   323,   324,   113,   106,   107,   328,   115,
     164,    52,    29,   333,   334,   106,   107,   171,   434,   435,
     106,   107,   438,    39,   344,    99,   453,   443,   455,    52,
     184,    33,   186,   106,   107,    51,    52,   241,   242,   243,
     244,   245,   458,    51,    52,   587,   462,   113,   106,   107,
     592,   593,    52,   113,    43,   574,   112,   576,   114,    52,
      49,   477,   478,    16,    17,   106,   107,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   106,   107,    46,    47,   113,    49,   505,
     110,   507,   508,   247,    52,   113,    85,    58,   106,   107,
     405,   113,   656,    92,   113,    52,   106,   107,   113,   303,
     314,   315,   316,   106,   107,   319,   113,   106,   107,   106,
     107,    82,   538,   539,   113,    52,   542,   114,    52,   112,
     324,   114,    93,   112,   328,   114,    97,   457,   458,   333,
     334,    52,   462,   347,   449,   112,   350,   114,   106,   107,
     113,   355,   113,   113,   570,   116,   461,   477,   478,   106,
     107,   113,    52,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   106,
     107,   651,   106,   107,    52,   505,    52,    32,    33,    34,
      35,    36,    37,   106,   107,   106,   107,   113,   614,   615,
     112,   617,   618,    52,   509,   747,   748,   113,   750,   751,
     113,   753,   754,   629,   756,   757,   106,   107,    52,   112,
     636,   114,   638,    53,    54,    52,    56,    57,   106,   107,
      61,    62,   648,    39,    40,    41,   114,   653,   106,   107,
     106,   107,   113,   659,    50,   661,   662,    21,   664,   665,
     106,   107,   557,   109,   724,   106,   107,   106,   107,   675,
     676,   106,   107,   114,   458,   681,   682,    52,   462,   114,
     686,   113,   106,   107,   113,   691,   106,   107,   113,   106,
     107,   113,   112,   477,   478,    32,    33,    34,    35,    36,
      37,   113,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   113,   460,   723,    23,   725,
     726,   505,   106,   107,   730,    35,   732,    52,   734,    23,
     736,   106,   107,   112,   740,   114,    46,    47,    20,    49,
     106,   107,   111,    53,    54,   640,   112,   109,    58,   659,
     660,   661,   662,   112,   664,   665,   111,   112,   764,   765,
     766,   767,   768,   769,   770,   771,    39,    40,    41,   106,
     107,    81,    82,    83,   518,    22,   520,   114,    51,    16,
      17,   106,   107,    93,   111,    53,    54,    97,    56,    57,
     106,   107,    32,    33,    34,    35,    36,    37,    39,    40,
      41,    61,    62,   113,   106,   107,   116,    36,    37,    50,
     112,    51,    41,    53,    54,    30,    56,    57,   106,   107,
     730,   109,   732,   112,   734,   114,   736,    32,    32,    33,
      34,    35,    36,    37,   109,    36,    37,    66,   106,   107,
     111,   109,    43,   113,   501,   502,   503,    61,   109,    53,
      54,    21,    56,    57,   764,   765,   766,   767,   768,   769,
     770,   771,    39,    40,    41,    66,   106,   107,    97,    32,
      33,    34,    35,    36,    37,   659,    21,   661,   662,    21,
     664,   665,   111,   112,    21,   114,    46,    47,    51,    49,
     119,   120,    21,    53,    54,    21,    21,    98,    58,    21,
      93,   130,   106,   107,    53,    54,    20,    56,    57,    20,
     111,   112,    35,   114,   106,   107,    35,   112,   119,   114,
     112,   150,    82,   106,   107,   109,    21,    46,    47,   130,
      49,   114,    21,    93,    53,    54,   165,    97,   109,    58,
      39,    40,    41,   106,   107,   112,   730,   114,   732,   150,
     734,    50,   736,   113,   106,   107,   116,   106,   107,   188,
     112,   190,   114,    82,   165,   114,    99,   196,   197,    53,
      54,    21,    56,    57,    93,    21,   114,    35,    97,   208,
     764,   765,   766,   767,   768,   769,   770,   771,    46,    47,
      20,    49,   111,    20,   113,    53,    54,   116,    53,    54,
      58,    56,    57,   106,   107,    77,    78,    79,    80,   112,
     667,   668,   669,   670,    32,    33,    34,    35,    36,    37,
      20,    20,   106,   107,    82,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    93,   114,    53,    54,    97,
      56,    57,    39,   272,    32,    33,    34,    35,    36,    37,
     114,   106,   107,   106,   107,   113,   109,   112,   116,   260,
     261,   262,   106,   107,   293,   109,    39,    40,    41,   114,
      39,    40,    41,   274,   731,   113,   733,    50,   735,   280,
     737,    50,    39,    40,    41,    39,    40,    41,   106,   107,
     106,   107,   293,    50,   106,   107,    50,   109,   114,   113,
     117,    53,    54,    35,    56,    57,   109,    51,   109,    53,
      54,    21,    56,    57,    46,    47,    39,    49,   106,   107,
      39,    53,    54,   106,   107,   112,    58,   356,    21,    21,
     114,   114,   789,   790,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,   801,   802,   803,   804,   106,   107,
      82,    51,    51,   109,   106,   107,   114,    39,    40,    41,
     112,    93,   106,   107,   109,    97,   109,   109,    50,   432,
      53,    54,    27,    56,    57,    52,   405,    52,   561,   299,
     381,   113,   383,   280,   116,    39,    40,    41,    43,    44,
      45,   106,   107,    48,    49,   424,    50,   106,   107,   114,
     443,   328,   431,   432,   405,   114,   504,   358,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
     449,    -1,   271,   106,   107,    98,   109,    -1,    -1,    84,
      85,   432,   461,    88,    89,    90,    91,    92,    -1,    94,
      95,    -1,   443,    -1,    99,   100,   101,    -1,   449,    -1,
      -1,   106,   107,    53,    54,    -1,    56,    57,   113,    -1,
     461,    39,    40,    41,    -1,   106,   107,   106,   107,    -1,
      22,    -1,    50,   114,    -1,   114,   106,   107,   106,   107,
     509,   510,    -1,    35,   114,    -1,   114,   106,   107,    -1,
      -1,    43,    44,    45,    -1,   114,    48,    49,    16,    17,
      18,    19,   106,   107,    -1,    -1,   106,   107,   509,   109,
     114,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,   106,   107,   527,    -1,   557,   558,
     559,    -1,   114,   106,   107,    -1,    88,    89,    90,    91,
      -1,   114,    94,    95,    -1,   106,   107,    99,   100,   101,
     106,   107,    28,   114,   106,   107,   557,    -1,   114,    35,
     561,   113,   102,   103,   104,   105,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,   106,   107,    53,    54,    -1,
      -1,    -1,    58,   114,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,   628,
      52,    53,    54,    -1,    56,    57,    82,    -1,    -1,    -1,
      -1,   640,    88,    89,    90,    91,    -1,    93,    94,    95,
      96,    97,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,
     106,   107,    -1,    35,    -1,    -1,    -1,   113,    -1,   640,
     116,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
      -1,    53,    54,    -1,   106,   107,    58,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      -1,    93,    94,    95,    -1,    97,    -1,    99,   100,   101,
      -1,    -1,    -1,    -1,   106,   107,    -1,    -1,    35,    -1,
      -1,   113,    -1,    -1,   116,   117,    43,    44,    45,    46,
      47,    48,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,
      -1,    58,    -1,    -1,    -1,    -1,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,   230,   231,
     232,   233,   234,   235,    -1,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      97,    -1,    99,   100,   101,    -1,    -1,    -1,    -1,   106,
     107,    -1,    35,    -1,    -1,    -1,   113,    -1,    -1,   116,
      43,    44,    45,    46,    47,    48,    49,    -1,    -1,    -1,
      53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,
      93,    94,    95,    -1,    97,    -1,    99,   100,   101,    -1,
      35,    -1,    -1,   106,   107,    -1,    -1,    -1,    -1,    -1,
     113,    46,    47,   116,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    58,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    43,    44,    45,    -1,    82,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      -1,    -1,    97,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    95,    36,    -1,    -1,    99,
     100,   101,    -1,    43,    44,    45,   106,   107,    48,    49,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    38,    99,
     100,   101,    -1,    43,    44,    45,   106,   107,    48,    49,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    38,    99,
     100,   101,    -1,    43,    44,    45,   106,   107,    48,    49,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    38,    99,
     100,   101,    -1,    43,    44,    45,   106,   107,    48,    49,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    38,    -1,    99,
     100,   101,    43,    44,    45,    -1,   106,   107,    49,    -1,
      -1,    -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,
      91,    -1,    -1,    94,    95,    -1,    38,    -1,    99,   100,
     101,    43,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      -1,    -1,    94,    95,    -1,    38,    -1,    99,   100,   101,
      43,    44,    45,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,    -1,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    -1,
     113,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,
      -1,    93,    94,    95,    -1,    97,    -1,    99,   100,   101,
      42,    43,    44,    45,   106,   107,    48,    49,    -1,    -1,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,
      -1,    43,    44,    45,   106,   107,    48,    49,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    85,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    94,    95,    -1,    -1,    -1,    99,   100,   101,
      -1,    43,    44,    45,   106,   107,    48,    49,    -1,    -1,
      -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    88,    89,    90,    91,
      92,    -1,    94,    95,    43,    44,    45,    99,   100,   101,
      49,    -1,    -1,    -1,   106,   107,    -1,    -1,    -1,    -1,
      -1,   113,    -1,    -1,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    88,
      89,    90,    91,    92,    -1,    94,    95,    43,    44,    45,
      99,   100,   101,    49,    -1,    -1,    -1,   106,   107,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    88,    89,    90,    91,    92,    -1,    94,    95,
      -1,    -1,    -1,    99,   100,   101,    -1,    43,    44,    45,
     106,   107,    48,    49,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    94,    95,
      -1,    -1,    -1,    99,   100,   101,    -1,    43,    44,    45,
     106,   107,    48,    49,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    94,    95,
      -1,    -1,    -1,    99,   100,   101,    -1,    43,    44,    45,
     106,   107,    48,    49,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    94,    95,
      -1,    -1,    -1,    99,   100,   101,    -1,    43,    44,    45,
     106,   107,    48,    49,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    89,    90,    91,    -1,    -1,    94,    95,
      43,    44,    45,    99,   100,   101,    49,    -1,    -1,    -1,
     106,   107,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    89,    90,    91,    -1,
      -1,    94,    95,    43,    44,    45,    99,   100,   101,    49,
      -1,    -1,    -1,   106,   107,    -1,    -1,    -1,    -1,    -1,
     113,    -1,    -1,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    46,    47,    -1,    49,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    88,    89,
      90,    91,    -1,    -1,    94,    95,    -1,    -1,    -1,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    -1,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,    -1,   116
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    21,   119,   120,   123,   124,   125,   126,   128,
     131,   141,   142,   154,   157,    99,    99,    99,    99,    99,
      99,    99,    98,    98,    98,    98,    14,    15,    27,   158,
       0,    20,   110,    20,   110,    16,    17,    18,    19,   110,
     132,    21,    21,    21,    21,   113,   113,   113,   113,    35,
      43,    44,    45,    46,    47,    48,    49,    53,    54,    58,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    82,    88,    89,    90,    91,    92,    93,    94,
      95,    97,    99,   100,   101,   106,   107,   113,   116,   161,
     162,   163,   164,   169,   171,   172,   173,   174,   175,   176,
      28,    42,    49,    96,   113,   161,   168,   169,   172,    49,
     113,   159,   160,   161,   169,   109,   161,   111,   159,    22,
      49,    75,   113,   129,   137,   138,   139,   165,   169,   172,
     159,    29,   135,    33,   133,    16,    17,   159,   133,    43,
      49,    85,    92,   106,   107,   113,   149,   150,   151,   152,
     153,   172,   173,   149,    27,    49,    84,   143,   144,   149,
     172,    27,    86,    87,   155,   156,    99,   127,   127,   127,
     127,    36,   171,   159,   113,   160,   113,   160,   113,   159,
     113,   159,   159,   168,   159,   159,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   110,   170,   170,   170,   113,   113,   113,   175,
     175,   161,   172,   117,   159,   165,   167,   169,   171,   172,
      53,    54,    56,    57,   106,   107,    55,   108,   112,   106,
     107,    59,    60,   108,   115,    61,    62,   113,   168,   168,
     113,   161,   168,   172,    32,    33,    34,    35,    36,    37,
      39,    40,    41,    23,    32,    33,    34,    35,    36,    37,
     168,    21,    23,   109,    20,   111,   171,   168,   172,   109,
     112,   139,   140,    77,    78,    79,    80,   166,   172,   111,
     172,    30,   136,    49,   107,   172,    32,   134,   109,   111,
     134,   159,   168,   113,   170,   106,   107,   151,   151,   149,
     172,   106,   107,   109,   108,   115,    61,   106,   107,   108,
     109,   159,   168,    42,   113,   145,   149,   172,    39,   109,
      32,    33,    34,   148,   148,   159,   109,   135,   112,   114,
     114,   114,   114,    36,    21,   159,   171,    21,   159,   171,
      21,   172,    21,   172,    21,    21,    50,    21,    21,   161,
     161,   172,   172,   172,   172,   172,   172,   172,   172,   172,
     172,   161,    93,   172,   172,   171,   171,   171,   171,   114,
     114,    21,   117,   112,   117,   117,    24,    25,   162,   162,
     162,   162,   162,   162,   164,   164,   172,   173,   173,   174,
     174,   174,   174,   174,   159,    50,   171,   114,   161,   161,
     161,   161,   161,   161,   168,   168,   168,   161,   172,   172,
     172,   172,   172,   172,    50,   158,   161,    81,    83,   121,
     122,   169,    20,    22,    50,    76,   138,   171,   139,   172,
     172,   172,   172,    20,   172,   109,   168,    38,    38,    49,
     172,   135,    16,    17,    19,   132,   109,    21,    50,   149,
      43,    49,   113,   114,   150,   173,   150,   173,   151,   174,
     174,   174,   150,   173,   150,   173,   151,    21,    50,   145,
     145,   149,   172,    39,    40,    41,    50,    32,    33,    34,
      35,    36,    37,    32,    33,    34,    35,    36,    37,   144,
     149,   172,   149,   172,    21,    21,    99,    20,    20,    20,
      20,   173,   114,   114,   174,   114,   114,   174,   114,   172,
     114,   172,   174,   161,   172,   164,   163,   112,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   112,   112,
     114,   114,   112,   111,   114,   114,   114,   169,   172,   169,
     172,   172,   114,   161,   168,   172,   114,    22,   113,   113,
     109,   112,   161,   121,   161,   172,    22,   171,   137,   172,
      50,   168,   136,   135,   133,    16,   133,   150,   173,   149,
     172,   114,   159,   168,   143,   143,   149,   172,   114,   145,
     145,   145,   149,   172,   149,   172,   149,   172,   149,   172,
     149,   172,   149,   172,   149,   172,   149,   149,   149,   149,
     149,   149,   146,   146,    32,    33,   146,    32,    33,   146,
     155,   149,   172,   172,   168,   161,   159,   159,    51,    51,
     169,   172,   172,   172,   117,   117,    26,   117,    26,   117,
      51,   168,   161,   161,   122,   109,   109,    22,    31,   130,
     109,   107,   172,    50,   109,   136,   134,   109,   134,    51,
      21,    50,    51,    52,   148,   148,   112,   172,   172,   172,
     172,   109,   109,   109,   109,    21,    21,   161,   172,   114,
     114,   112,   112,   172,   172,   168,   112,   114,   172,   109,
      38,    51,    38,   172,   109,   135,   109,   149,   173,   143,
     149,   172,   149,   172,   102,   103,   104,   105,   147,   146,
     146,   146,   146,   172,   172,    52,    52,   172,   172,   117,
     117,    52,   172,    51,   107,    51,    51,   136,    52,    52,
      51,    52,    51,    52,    51,    52,    51,    52,   114,   114,
     112,   114,   172,    38,   172,    38,   109,   149,   172,   146,
     149,   172,   146,   149,   172,   146,   149,   172,   146,   172,
      52,    52,    52,    52,   148,   148,   148,   148,   148,   148,
     148,   148,   114,   149,   172,   149,   172,   149,   172,   149,
     172,   149,   172,   149,   172,   149,   172,   149,   172,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
        case 2:

/* Line 1806 of yacc.c  */
#line 147 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 148 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 149 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 150 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 151 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 152 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 153 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 154 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 155 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 156 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 157 "src/mmlparse2.y"
    { code_set_root((yyvsp[(1) - (1)].code)); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 165 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_set1, 3,
            code_new_name((yyvsp[(2) - (5)].name)),                                       /* Name */
            code_new_inst(i_idxset_pseudo_new, 1,               /* index set */
               code_new_inst(i_bool_true, 0)),              
            (yyvsp[(4) - (5)].code));                                              /* initial set */
      }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 172 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_set1, 3,
            code_new_name((yyvsp[(2) - (8)].name)),                                       /* Name */
            (yyvsp[(4) - (8)].code),                                                 /* index set */
            (yyvsp[(7) - (8)].code));                                                      /* set */
      }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 178 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_set2, 3,
            code_new_name((yyvsp[(2) - (8)].name)),                                       /* Name */
            (yyvsp[(4) - (8)].code),                                                 /* index set */
            (yyvsp[(7) - (8)].code));                                   /* initial set_entry_list */
      }
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 184 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_set2, 3,
            code_new_name((yyvsp[(2) - (7)].name)),                                       /* Name */
            code_new_inst(i_idxset_pseudo_new, 1,               /* index set */
               code_new_inst(i_bool_true, 0)),              
            (yyvsp[(6) - (7)].code));                                   /* initial set_entry_list */
      }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 194 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_entry_list_new, 1, (yyvsp[(1) - (1)].code)); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 195 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_entry_list_add, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 198 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_entry_list_subsets, 3, (yyvsp[(3) - (6)].code), (yyvsp[(5) - (6)].code), code_new_numb(numb_new_integer(-1)));
      }
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 201 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_entry_list_subsets, 3, (yyvsp[(3) - (8)].code), (yyvsp[(5) - (8)].code), (yyvsp[(7) - (8)].code));
      }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 204 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_entry_list_powerset, 1, (yyvsp[(3) - (4)].code));
      }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 210 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_entry, 2, (yyvsp[(1) - (2)].code), (yyvsp[(2) - (2)].code)); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 219 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[(2) - (8)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(4) - (8)].code)),
            (yyvsp[(7) - (8)].code));
      }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 228 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[(2) - (8)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(4) - (8)].code)),
            (yyvsp[(7) - (8)].code));
      }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 237 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[(2) - (8)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(4) - (8)].code)),
            (yyvsp[(7) - (8)].code));
      }
    break;

  case 26:

/* Line 1806 of yacc.c  */
#line 246 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newdef, 3,
            code_new_define((yyvsp[(2) - (8)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(4) - (8)].code)),
            (yyvsp[(7) - (8)].code));
      }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 255 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_elem_list_new, 1, code_new_name((yyvsp[(1) - (1)].name)));
      }
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 258 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_elem_list_add, 2, (yyvsp[(1) - (3)].code), code_new_name((yyvsp[(3) - (3)].name)));
      }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 268 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_para1, 4, code_new_name((yyvsp[(2) - (9)].name)), (yyvsp[(4) - (9)].code), (yyvsp[(7) - (9)].code), (yyvsp[(8) - (9)].code));
      }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 271 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_para2, 4, code_new_name((yyvsp[(2) - (8)].name)), (yyvsp[(4) - (8)].code), (yyvsp[(7) - (8)].code), code_new_inst(i_nop, 0));
      }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 274 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_para1, 4,
            code_new_name((yyvsp[(2) - (5)].name)),
            code_new_inst(i_idxset_pseudo_new, 1, code_new_inst(i_bool_true, 0)),
            (yyvsp[(4) - (5)].code),
            code_new_inst(i_nop, 0));
      }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 281 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_nop, 0); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 284 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 285 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_entry_list_new, 1,
            code_new_inst(i_entry, 2, code_new_inst(i_tuple_empty, 0), (yyvsp[(1) - (1)].code)));
      }
    break;

  case 35:

/* Line 1806 of yacc.c  */
#line 292 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_nop, 0); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 293 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_entry, 2, code_new_inst(i_tuple_empty, 0), (yyvsp[(2) - (2)].code)); }
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 301 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (9)].name)),
            (yyvsp[(4) - (9)].code), (yyvsp[(6) - (9)].code), (yyvsp[(7) - (9)].code), (yyvsp[(8) - (9)].code),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 308 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (6)].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            (yyvsp[(3) - (6)].code), (yyvsp[(4) - (6)].code), (yyvsp[(5) - (6)].code),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 317 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (8)].name)),
            (yyvsp[(4) - (8)].code),
            code_new_varclass(VAR_IMP),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 327 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (5)].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            code_new_varclass(VAR_IMP),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            code_new_numb(numb_copy(numb_unknown())),
            code_new_numb(numb_copy(numb_unknown())));
      }
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 338 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (9)].name)),
            (yyvsp[(4) - (9)].code),
            code_new_varclass(VAR_INT),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            (yyvsp[(7) - (9)].code), (yyvsp[(8) - (9)].code));
      }
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 347 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (6)].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            code_new_varclass(VAR_INT),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0))),
            code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(1))),
            (yyvsp[(4) - (6)].code), (yyvsp[(5) - (6)].code));
      }
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 357 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (11)].name)), (yyvsp[(4) - (11)].code), code_new_varclass(VAR_INT), (yyvsp[(7) - (11)].code), (yyvsp[(8) - (11)].code), (yyvsp[(9) - (11)].code), (yyvsp[(10) - (11)].code));
      }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 361 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_newsym_var, 7,
            code_new_name((yyvsp[(2) - (8)].name)),
            code_new_inst(i_idxset_pseudo_new, 1,
               code_new_inst(i_bool_true, 0)),              
            code_new_varclass(VAR_INT), (yyvsp[(4) - (8)].code), (yyvsp[(5) - (8)].code), (yyvsp[(6) - (8)].code), (yyvsp[(7) - (8)].code));
      }
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 371 "src/mmlparse2.y"
    { (yyval.code) = code_new_varclass(VAR_CON); }
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 372 "src/mmlparse2.y"
    { (yyval.code) = code_new_varclass(VAR_CON); }
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 373 "src/mmlparse2.y"
    { (yyval.code) = code_new_varclass(VAR_IMP); }
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 377 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_bound_new, 1, code_new_numb(numb_new_integer(0)));
      }
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 380 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bound_new, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 381 "src/mmlparse2.y"
    { (yyval.code) = code_new_bound(BOUND_MINUS_INFTY); }
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 382 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(3) - (9)].code),
            code_new_inst(i_bound_new, 1, (yyvsp[(5) - (9)].code)),
            code_new_bound(BOUND_MINUS_INFTY));
      }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 387 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(3) - (9)].code),
            code_new_bound(BOUND_MINUS_INFTY),
            code_new_inst(i_bound_new, 1, (yyvsp[(8) - (9)].code)));
      }
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 395 "src/mmlparse2.y"
    { (yyval.code) = code_new_bound(BOUND_INFTY); }
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 396 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bound_new, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 397 "src/mmlparse2.y"
    { (yyval.code) = code_new_bound(BOUND_INFTY); }
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 398 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(3) - (8)].code),
            code_new_inst(i_bound_new, 1, (yyvsp[(5) - (8)].code)),
            code_new_bound(BOUND_INFTY));
      }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 403 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(3) - (8)].code),
            code_new_bound(BOUND_INFTY),
            code_new_inst(i_bound_new, 1, (yyvsp[(7) - (8)].code)));
      }
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 411 "src/mmlparse2.y"
    { (yyval.code) = code_new_numb(numb_new_integer(0)); }
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 412 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (2)].code); }
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 416 "src/mmlparse2.y"
    { (yyval.code) = code_new_numb(numb_copy(numb_unknown())); }
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 417 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (2)].code); }
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 425 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_entry_list_new, 1, (yyvsp[(1) - (1)].code)); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 426 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_entry_list_add, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 429 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read, 1, (yyvsp[(1) - (1)].code)); }
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 430 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_list_matrix, 2, (yyvsp[(1) - (2)].code), (yyvsp[(2) - (2)].code)); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 434 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_entry, 2, (yyvsp[(1) - (2)].code), (yyvsp[(2) - (2)].code)); }
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 438 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 442 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_matrix_list_new, 2, (yyvsp[(1) - (3)].code), (yyvsp[(2) - (3)].code));
      }
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 445 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_matrix_list_add, 3, (yyvsp[(1) - (4)].code), (yyvsp[(2) - (4)].code), (yyvsp[(3) - (4)].code));
      }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 457 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_object_min, 2, code_new_name((yyvsp[(2) - (5)].name)), (yyvsp[(4) - (5)].code));
      }
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 460 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_object_max, 2, code_new_name((yyvsp[(2) - (5)].name)), (yyvsp[(4) - (5)].code));
      }
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 470 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_subto, 2, code_new_name((yyvsp[(2) - (5)].name)), (yyvsp[(4) - (5)].code));
     }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 476 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, (yyvsp[(1) - (1)].code), code_new_inst(i_nop, 0));
     }
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 479 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
     }
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 482 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, 
           code_new_inst(i_forall, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code)),
           code_new_inst(i_nop, 0));
     }
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 487 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, 
           code_new_inst(i_expr_if_else, 3, (yyvsp[(2) - (5)].code), (yyvsp[(4) - (5)].code), code_new_inst(i_nop, 0)),
           code_new_inst(i_nop, 0));
      }
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 492 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint_list, 2, 
           code_new_inst(i_expr_if_else, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code)),
           code_new_inst(i_nop, 0));
      }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 500 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint, 4, (yyvsp[(1) - (4)].code), (yyvsp[(2) - (4)].code), (yyvsp[(3) - (4)].code), code_new_bits((yyvsp[(4) - (4)].bits)));
     }
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 503 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint, 4, (yyvsp[(1) - (4)].code), (yyvsp[(2) - (4)].code),
           code_new_inst(i_term_expr, 1, (yyvsp[(3) - (4)].code)),
           code_new_bits((yyvsp[(4) - (4)].bits)));
     }
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 508 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_constraint, 4,
           code_new_inst(i_term_expr, 1, (yyvsp[(1) - (4)].code)),
           (yyvsp[(2) - (4)].code), (yyvsp[(3) - (4)].code), code_new_bits((yyvsp[(4) - (4)].bits)));
     }
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 513 "src/mmlparse2.y"
    { 
        (yyval.code) = code_new_inst(i_constraint, 4,
           code_new_inst(i_term_expr, 1, (yyvsp[(1) - (4)].code)),
           (yyvsp[(2) - (4)].code),
           code_new_inst(i_term_expr, 1, (yyvsp[(3) - (4)].code)),
           code_new_bits((yyvsp[(4) - (4)].bits)));
     }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 520 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[(1) - (6)].code), (yyvsp[(3) - (6)].code), (yyvsp[(5) - (6)].code), (yyvsp[(2) - (6)].code),
           code_new_contype(CON_RHS), code_new_bits((yyvsp[(6) - (6)].bits))); 
     }
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 524 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[(1) - (6)].code),
           code_new_inst(i_term_expr, 1, (yyvsp[(3) - (6)].code)), (yyvsp[(5) - (6)].code), (yyvsp[(2) - (6)].code),
           code_new_contype(CON_RHS), code_new_bits((yyvsp[(6) - (6)].bits))); 
     }
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 529 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[(5) - (6)].code), (yyvsp[(3) - (6)].code), (yyvsp[(1) - (6)].code), (yyvsp[(2) - (6)].code),
           code_new_contype(CON_LHS), code_new_bits((yyvsp[(6) - (6)].bits))); 
     }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 533 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_rangeconst, 6, (yyvsp[(5) - (6)].code),
           code_new_inst(i_term_expr, 1, (yyvsp[(3) - (6)].code)),
           (yyvsp[(1) - (6)].code), (yyvsp[(2) - (6)].code),
           code_new_contype(CON_LHS), code_new_bits((yyvsp[(6) - (6)].bits))); 
     }
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 539 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code), (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 542 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code), (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 547 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 552 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 557 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code), (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 561 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 568 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 575 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code), (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 581 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 587 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 593 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)), (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 598 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code), (yyvsp[(10) - (12)].code), code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 606 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            (yyvsp[(8) - (12)].code), (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), 
            code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 615 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code), (yyvsp[(6) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), 
            code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 624 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code), (yyvsp[(4) - (12)].code), (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), 
            code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 632 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif_else, 8, (yyvsp[(2) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (12)].code)),
            (yyvsp[(5) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (12)].code)),
            code_new_inst(i_term_expr, 1, (yyvsp[(8) - (12)].code)),
            (yyvsp[(9) - (12)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(10) - (12)].code)), 
            code_new_bits((yyvsp[(12) - (12)].bits)));
      }
    break;

  case 102:

/* Line 1806 of yacc.c  */
#line 643 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[(2) - (8)].code), (yyvsp[(4) - (8)].code), (yyvsp[(5) - (8)].code), (yyvsp[(6) - (8)].code), code_new_bits((yyvsp[(8) - (8)].bits)));
      }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 646 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[(2) - (8)].code), 
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (8)].code)), (yyvsp[(5) - (8)].code), (yyvsp[(6) - (8)].code), code_new_bits((yyvsp[(8) - (8)].bits)));
      }
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 650 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[(2) - (8)].code), 
            (yyvsp[(4) - (8)].code), (yyvsp[(5) - (8)].code), code_new_inst(i_term_expr, 1, (yyvsp[(6) - (8)].code)), 
            code_new_bits((yyvsp[(8) - (8)].bits)));
      }
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 655 "src/mmlparse2.y"
    { /* ??? This is an error */
         (yyval.code) = code_new_inst(i_vif, 5, (yyvsp[(2) - (8)].code),
            code_new_inst(i_term_expr, 1, (yyvsp[(4) - (8)].code)), (yyvsp[(5) - (8)].code), 
            code_new_inst(i_term_expr, 1, (yyvsp[(6) - (8)].code)), code_new_bits((yyvsp[(8) - (8)].bits)));
      }
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 663 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_ne, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 664 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_ne, 2, code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)), (yyvsp[(3) - (3)].code));
      }
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 667 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_ne, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 670 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_eq, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 671 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_eq, 2, code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)), (yyvsp[(3) - (3)].code));
      }
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 674 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_eq, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 677 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_le, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 113:

/* Line 1806 of yacc.c  */
#line 678 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_le, 2, code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)), (yyvsp[(3) - (3)].code));
      }
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 681 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_le, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 684 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_ge, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 685 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_ge, 2, code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)), (yyvsp[(3) - (3)].code));
      }
    break;

  case 117:

/* Line 1806 of yacc.c  */
#line 688 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_ge, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 118:

/* Line 1806 of yacc.c  */
#line 691 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_lt, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 119:

/* Line 1806 of yacc.c  */
#line 692 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_lt, 2, code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)), (yyvsp[(3) - (3)].code));
      }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 695 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_lt, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 698 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_gt, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 699 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_gt, 2, code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)), (yyvsp[(3) - (3)].code));
      }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 702 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_vbool_gt, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 124:

/* Line 1806 of yacc.c  */
#line 705 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_and, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 125:

/* Line 1806 of yacc.c  */
#line 706 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_or,  2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 126:

/* Line 1806 of yacc.c  */
#line 707 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_xor, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 708 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vbool_not, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 709 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 713 "src/mmlparse2.y"
    { (yyval.bits) = 0; }
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 714 "src/mmlparse2.y"
    { (yyval.bits) = (yyvsp[(1) - (3)].bits) | (yyvsp[(3) - (3)].bits); }
    break;

  case 131:

/* Line 1806 of yacc.c  */
#line 718 "src/mmlparse2.y"
    { (yyval.bits) = LP_FLAG_CON_SCALE; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 719 "src/mmlparse2.y"
    { (yyval.bits) = LP_FLAG_CON_SEPAR; }
    break;

  case 133:

/* Line 1806 of yacc.c  */
#line 720 "src/mmlparse2.y"
    { (yyval.bits) = LP_FLAG_CON_CHECK; }
    break;

  case 134:

/* Line 1806 of yacc.c  */
#line 721 "src/mmlparse2.y"
    { (yyval.bits) = LP_FLAG_CON_INDIC; }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 725 "src/mmlparse2.y"
    { (yyval.code) = code_new_contype(CON_RHS); }
    break;

  case 136:

/* Line 1806 of yacc.c  */
#line 726 "src/mmlparse2.y"
    { (yyval.code) = code_new_contype(CON_LHS); }
    break;

  case 137:

/* Line 1806 of yacc.c  */
#line 727 "src/mmlparse2.y"
    { (yyval.code) = code_new_contype(CON_EQUAL); }
    break;

  case 138:

/* Line 1806 of yacc.c  */
#line 731 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 139:

/* Line 1806 of yacc.c  */
#line 732 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_add, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 140:

/* Line 1806 of yacc.c  */
#line 733 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_sub, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 734 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_const, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 142:

/* Line 1806 of yacc.c  */
#line 735 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_term_sub, 2, (yyvsp[(1) - (3)].code), code_new_inst(i_term_expr, 1, (yyvsp[(3) - (3)].code)));
      }
    break;

  case 143:

/* Line 1806 of yacc.c  */
#line 738 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_const, 2, (yyvsp[(3) - (3)].code), (yyvsp[(1) - (3)].code)); }
    break;

  case 144:

/* Line 1806 of yacc.c  */
#line 739 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_term_sub, 2,
            code_new_inst(i_term_expr, 1, (yyvsp[(1) - (3)].code)),
            (yyvsp[(3) - (3)].code));
      }
    break;

  case 145:

/* Line 1806 of yacc.c  */
#line 747 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 146:

/* Line 1806 of yacc.c  */
#line 748 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));  }
    break;

  case 147:

/* Line 1806 of yacc.c  */
#line 749 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[(1) - (3)].code),
            code_new_inst(i_expr_div, 2, code_new_numb(numb_new_integer(1)), (yyvsp[(3) - (3)].code)));
      }
    break;

  case 148:

/* Line 1806 of yacc.c  */
#line 753 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[(3) - (3)].code), (yyvsp[(1) - (3)].code)); }
    break;

  case 149:

/* Line 1806 of yacc.c  */
#line 754 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_term_mul, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 151:

/* Line 1806 of yacc.c  */
#line 759 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (2)].code); }
    break;

  case 152:

/* Line 1806 of yacc.c  */
#line 760 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_term_coeff, 2, (yyvsp[(2) - (2)].code), code_new_numb(numb_new_integer(-1)));
      }
    break;

  case 153:

/* Line 1806 of yacc.c  */
#line 766 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 154:

/* Line 1806 of yacc.c  */
#line 767 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_term_power, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 155:

/* Line 1806 of yacc.c  */
#line 770 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_term_sum, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 156:

/* Line 1806 of yacc.c  */
#line 776 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[(1) - (2)].sym)), (yyvsp[(2) - (2)].code));
      }
    break;

  case 157:

/* Line 1806 of yacc.c  */
#line 779 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_vabs, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 158:

/* Line 1806 of yacc.c  */
#line 780 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code));
      }
    break;

  case 159:

/* Line 1806 of yacc.c  */
#line 783 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 160:

/* Line 1806 of yacc.c  */
#line 791 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_sos, 2, code_new_name((yyvsp[(2) - (5)].name)), (yyvsp[(4) - (5)].code));
     }
    break;

  case 161:

/* Line 1806 of yacc.c  */
#line 797 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_soset, 3, (yyvsp[(4) - (4)].code), (yyvsp[(1) - (4)].code), (yyvsp[(2) - (4)].code));
     }
    break;

  case 162:

/* Line 1806 of yacc.c  */
#line 800 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_forall, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 163:

/* Line 1806 of yacc.c  */
#line 806 "src/mmlparse2.y"
    { (yyval.code) = code_new_numb(numb_new_integer(1)); }
    break;

  case 164:

/* Line 1806 of yacc.c  */
#line 807 "src/mmlparse2.y"
    { (yyval.code) = code_new_numb(numb_new_integer(1)); }
    break;

  case 165:

/* Line 1806 of yacc.c  */
#line 808 "src/mmlparse2.y"
    { (yyval.code) = code_new_numb(numb_new_integer(2)); }
    break;

  case 166:

/* Line 1806 of yacc.c  */
#line 816 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 167:

/* Line 1806 of yacc.c  */
#line 820 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 168:

/* Line 1806 of yacc.c  */
#line 821 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 169:

/* Line 1806 of yacc.c  */
#line 822 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_print, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 170:

/* Line 1806 of yacc.c  */
#line 823 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_print, 1, code_new_symbol((yyvsp[(2) - (2)].sym))); }
    break;

  case 171:

/* Line 1806 of yacc.c  */
#line 824 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_check, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 172:

/* Line 1806 of yacc.c  */
#line 825 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_forall, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
     }
    break;

  case 173:

/* Line 1806 of yacc.c  */
#line 835 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 174:

/* Line 1806 of yacc.c  */
#line 836 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_idxset_new, 3,
            code_new_inst(i_tuple_empty, 0), (yyvsp[(1) - (1)].code), code_new_inst(i_bool_true, 0));
      }
    break;

  case 175:

/* Line 1806 of yacc.c  */
#line 843 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_idxset_new, 3, (yyvsp[(1) - (5)].code), (yyvsp[(3) - (5)].code), (yyvsp[(5) - (5)].code));
      }
    break;

  case 176:

/* Line 1806 of yacc.c  */
#line 846 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_idxset_new, 3, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code), code_new_inst(i_bool_true, 0));
      }
    break;

  case 178:

/* Line 1806 of yacc.c  */
#line 853 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_union, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 179:

/* Line 1806 of yacc.c  */
#line 854 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_union, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 180:

/* Line 1806 of yacc.c  */
#line 857 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_sdiff, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 181:

/* Line 1806 of yacc.c  */
#line 858 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_minus, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 182:

/* Line 1806 of yacc.c  */
#line 861 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_minus, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 183:

/* Line 1806 of yacc.c  */
#line 862 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_inter, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 185:

/* Line 1806 of yacc.c  */
#line 866 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_union2, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code)); }
    break;

  case 187:

/* Line 1806 of yacc.c  */
#line 871 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_cross, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 188:

/* Line 1806 of yacc.c  */
#line 872 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_cross, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 189:

/* Line 1806 of yacc.c  */
#line 875 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_inter2, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code)); }
    break;

  case 190:

/* Line 1806 of yacc.c  */
#line 879 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[(1) - (2)].sym)), (yyvsp[(2) - (2)].code));
      }
    break;

  case 191:

/* Line 1806 of yacc.c  */
#line 882 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[(1) - (4)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(3) - (4)].code)));
      }
    break;

  case 192:

/* Line 1806 of yacc.c  */
#line 887 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_empty, 1, code_new_size(0)); }
    break;

  case 193:

/* Line 1806 of yacc.c  */
#line 888 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_range2, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code));
      }
    break;

  case 194:

/* Line 1806 of yacc.c  */
#line 891 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_range2, 3, (yyvsp[(2) - (5)].code), (yyvsp[(4) - (5)].code), code_new_numb(numb_new_integer(1)));
      }
    break;

  case 195:

/* Line 1806 of yacc.c  */
#line 894 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_range, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code));
      }
    break;

  case 196:

/* Line 1806 of yacc.c  */
#line 897 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_range, 3, (yyvsp[(2) - (5)].code), (yyvsp[(4) - (5)].code), code_new_numb(numb_new_integer(1)));
      }
    break;

  case 197:

/* Line 1806 of yacc.c  */
#line 900 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_argmin, 3, code_new_numb(numb_new_integer(1)), (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 198:

/* Line 1806 of yacc.c  */
#line 903 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_argmin, 3, (yyvsp[(3) - (7)].code), (yyvsp[(5) - (7)].code), (yyvsp[(7) - (7)].code));
      }
    break;

  case 199:

/* Line 1806 of yacc.c  */
#line 906 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_argmax, 3, code_new_numb(numb_new_integer(1)), (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 200:

/* Line 1806 of yacc.c  */
#line 909 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_argmax, 3, (yyvsp[(3) - (7)].code), (yyvsp[(5) - (7)].code), (yyvsp[(7) - (7)].code));
      }
    break;

  case 201:

/* Line 1806 of yacc.c  */
#line 912 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 202:

/* Line 1806 of yacc.c  */
#line 913 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_new_tuple, 1, (yyvsp[(2) - (3)].code)); }
    break;

  case 203:

/* Line 1806 of yacc.c  */
#line 914 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_new_elem, 1, (yyvsp[(2) - (3)].code)); }
    break;

  case 204:

/* Line 1806 of yacc.c  */
#line 915 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_idxset, 1, (yyvsp[(2) - (3)].code)); }
    break;

  case 205:

/* Line 1806 of yacc.c  */
#line 916 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_expr, 2, (yyvsp[(2) - (5)].code), (yyvsp[(4) - (5)].code)); }
    break;

  case 206:

/* Line 1806 of yacc.c  */
#line 917 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_set_expr, 2, (yyvsp[(2) - (5)].code), (yyvsp[(4) - (5)].code)); }
    break;

  case 207:

/* Line 1806 of yacc.c  */
#line 918 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_set_proj, 2, (yyvsp[(3) - (6)].code), (yyvsp[(5) - (6)].code));
       }
    break;

  case 208:

/* Line 1806 of yacc.c  */
#line 921 "src/mmlparse2.y"
    {
          (yyval.code) = code_new_inst(i_set_indexset, 1, code_new_symbol((yyvsp[(3) - (4)].sym)));
       }
    break;

  case 209:

/* Line 1806 of yacc.c  */
#line 924 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code));
      }
    break;

  case 210:

/* Line 1806 of yacc.c  */
#line 930 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read_new, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code)); }
    break;

  case 211:

/* Line 1806 of yacc.c  */
#line 931 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read_param, 2, (yyvsp[(1) - (2)].code), (yyvsp[(2) - (2)].code)); }
    break;

  case 212:

/* Line 1806 of yacc.c  */
#line 935 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read_skip, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 213:

/* Line 1806 of yacc.c  */
#line 936 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read_use, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 214:

/* Line 1806 of yacc.c  */
#line 937 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read_comment, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 215:

/* Line 1806 of yacc.c  */
#line 938 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read_match, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 216:

/* Line 1806 of yacc.c  */
#line 942 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_tuple_list_new, 1, (yyvsp[(1) - (1)].code));
      }
    break;

  case 217:

/* Line 1806 of yacc.c  */
#line 945 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_tuple_list_add, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 218:

/* Line 1806 of yacc.c  */
#line 948 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_read, 1, (yyvsp[(1) - (1)].code)); }
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 952 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_eq, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 220:

/* Line 1806 of yacc.c  */
#line 953 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_ne, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 954 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_gt, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 222:

/* Line 1806 of yacc.c  */
#line 955 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_ge, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 956 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_lt, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 224:

/* Line 1806 of yacc.c  */
#line 957 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_le, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 958 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_seq, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 226:

/* Line 1806 of yacc.c  */
#line 959 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_sneq, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 960 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_subs, 2, (yyvsp[(3) - (3)].code), (yyvsp[(1) - (3)].code)); }
    break;

  case 228:

/* Line 1806 of yacc.c  */
#line 961 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_sseq, 2, (yyvsp[(3) - (3)].code), (yyvsp[(1) - (3)].code)); }
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 962 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_subs, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 230:

/* Line 1806 of yacc.c  */
#line 963 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_sseq, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 964 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_and, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 232:

/* Line 1806 of yacc.c  */
#line 965 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_or,  2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 233:

/* Line 1806 of yacc.c  */
#line 966 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_xor, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 234:

/* Line 1806 of yacc.c  */
#line 967 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_not, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 235:

/* Line 1806 of yacc.c  */
#line 968 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 236:

/* Line 1806 of yacc.c  */
#line 969 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_is_elem, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 237:

/* Line 1806 of yacc.c  */
#line 970 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_bool_exists, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 238:

/* Line 1806 of yacc.c  */
#line 971 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[(1) - (4)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(3) - (4)].code)));
      }
    break;

  case 239:

/* Line 1806 of yacc.c  */
#line 976 "src/mmlparse2.y"
    {
        (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code));
     }
    break;

  case 240:

/* Line 1806 of yacc.c  */
#line 982 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_tuple_empty, 0); }
    break;

  case 241:

/* Line 1806 of yacc.c  */
#line 983 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_tuple_new, 1, (yyvsp[(2) - (3)].code));  }
    break;

  case 242:

/* Line 1806 of yacc.c  */
#line 987 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_tuple_empty, 0);
      }
    break;

  case 243:

/* Line 1806 of yacc.c  */
#line 990 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_tuple_new, 1, (yyvsp[(2) - (3)].code));
      }
    break;

  case 244:

/* Line 1806 of yacc.c  */
#line 996 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_elem_list_new, 1, (yyvsp[(1) - (1)].code));
      }
    break;

  case 245:

/* Line 1806 of yacc.c  */
#line 999 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_elem_list_add, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code));
      }
    break;

  case 246:

/* Line 1806 of yacc.c  */
#line 1005 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 247:

/* Line 1806 of yacc.c  */
#line 1006 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_add, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 248:

/* Line 1806 of yacc.c  */
#line 1007 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_sub, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 249:

/* Line 1806 of yacc.c  */
#line 1011 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(1) - (1)].code); }
    break;

  case 250:

/* Line 1806 of yacc.c  */
#line 1012 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_mul, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 251:

/* Line 1806 of yacc.c  */
#line 1013 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_div, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 252:

/* Line 1806 of yacc.c  */
#line 1014 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_mod, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 253:

/* Line 1806 of yacc.c  */
#line 1015 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_intdiv, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 254:

/* Line 1806 of yacc.c  */
#line 1016 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_prod, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 256:

/* Line 1806 of yacc.c  */
#line 1023 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (2)].code); }
    break;

  case 257:

/* Line 1806 of yacc.c  */
#line 1024 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_neg, 1, (yyvsp[(2) - (2)].code)); }
    break;

  case 259:

/* Line 1806 of yacc.c  */
#line 1029 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_pow, 2, (yyvsp[(1) - (3)].code), (yyvsp[(3) - (3)].code)); }
    break;

  case 260:

/* Line 1806 of yacc.c  */
#line 1030 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_sum, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 261:

/* Line 1806 of yacc.c  */
#line 1033 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_min, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 262:

/* Line 1806 of yacc.c  */
#line 1036 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_max, 2, (yyvsp[(2) - (4)].code), (yyvsp[(4) - (4)].code));
      }
    break;

  case 263:

/* Line 1806 of yacc.c  */
#line 1039 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_sglmin, 1, (yyvsp[(3) - (4)].code));
         }
    break;

  case 264:

/* Line 1806 of yacc.c  */
#line 1042 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_sglmax, 1, (yyvsp[(3) - (4)].code));
      }
    break;

  case 265:

/* Line 1806 of yacc.c  */
#line 1048 "src/mmlparse2.y"
    { (yyval.code) = code_new_numb((yyvsp[(1) - (1)].numb)); }
    break;

  case 266:

/* Line 1806 of yacc.c  */
#line 1049 "src/mmlparse2.y"
    { (yyval.code) = code_new_strg((yyvsp[(1) - (1)].strg));  }
    break;

  case 267:

/* Line 1806 of yacc.c  */
#line 1050 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_local_deref, 1, code_new_name((yyvsp[(1) - (1)].name)));
      }
    break;

  case 268:

/* Line 1806 of yacc.c  */
#line 1053 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[(1) - (2)].sym)), (yyvsp[(2) - (2)].code));
      }
    break;

  case 269:

/* Line 1806 of yacc.c  */
#line 1056 "src/mmlparse2.y"
    { 
         (yyval.code) = code_new_inst(i_symbol_deref, 2, code_new_symbol((yyvsp[(1) - (2)].sym)), (yyvsp[(2) - (2)].code));
      }
    break;

  case 270:

/* Line 1806 of yacc.c  */
#line 1059 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[(1) - (4)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(3) - (4)].code)));
      }
    break;

  case 271:

/* Line 1806 of yacc.c  */
#line 1064 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_define_deref, 2,
            code_new_define((yyvsp[(1) - (4)].def)),
            code_new_inst(i_tuple_new, 1, (yyvsp[(3) - (4)].code)));
      }
    break;

  case 272:

/* Line 1806 of yacc.c  */
#line 1069 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_fac, 1, (yyvsp[(1) - (2)].code)); }
    break;

  case 273:

/* Line 1806 of yacc.c  */
#line 1070 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_card, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 274:

/* Line 1806 of yacc.c  */
#line 1071 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_abs, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 275:

/* Line 1806 of yacc.c  */
#line 1072 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_sgn, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 276:

/* Line 1806 of yacc.c  */
#line 1073 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_round, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 277:

/* Line 1806 of yacc.c  */
#line 1074 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_floor, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 278:

/* Line 1806 of yacc.c  */
#line 1075 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_ceil, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 279:

/* Line 1806 of yacc.c  */
#line 1076 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_log, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 280:

/* Line 1806 of yacc.c  */
#line 1077 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_ln, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 281:

/* Line 1806 of yacc.c  */
#line 1078 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_exp, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 282:

/* Line 1806 of yacc.c  */
#line 1079 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_sqrt, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 283:

/* Line 1806 of yacc.c  */
#line 1081 "src/mmlparse2.y"
    { (yyval.code) = (yyvsp[(2) - (3)].code); }
    break;

  case 284:

/* Line 1806 of yacc.c  */
#line 1082 "src/mmlparse2.y"
    { (yyval.code) = code_new_inst(i_expr_length, 1, (yyvsp[(3) - (4)].code)); }
    break;

  case 285:

/* Line 1806 of yacc.c  */
#line 1083 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_substr, 3, (yyvsp[(3) - (8)].code), (yyvsp[(5) - (8)].code), (yyvsp[(7) - (8)].code));
      }
    break;

  case 286:

/* Line 1806 of yacc.c  */
#line 1086 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_rand, 2, (yyvsp[(3) - (6)].code), (yyvsp[(5) - (6)].code));
      }
    break;

  case 287:

/* Line 1806 of yacc.c  */
#line 1089 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_if_else, 3, (yyvsp[(2) - (7)].code), (yyvsp[(4) - (7)].code), (yyvsp[(6) - (7)].code));
      }
    break;

  case 288:

/* Line 1806 of yacc.c  */
#line 1092 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_ord, 3, (yyvsp[(3) - (8)].code), (yyvsp[(5) - (8)].code), (yyvsp[(7) - (8)].code));
      }
    break;

  case 289:

/* Line 1806 of yacc.c  */
#line 1095 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_min2, 1, (yyvsp[(3) - (4)].code));
      }
    break;

  case 290:

/* Line 1806 of yacc.c  */
#line 1098 "src/mmlparse2.y"
    {
         (yyval.code) = code_new_inst(i_expr_max2, 1, (yyvsp[(3) - (4)].code));
      }
    break;



/* Line 1806 of yacc.c  */
#line 5084 "src/mmlparse2.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



