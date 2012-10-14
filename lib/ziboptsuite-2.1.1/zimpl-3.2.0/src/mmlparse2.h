/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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

/* Line 2068 of yacc.c  */
#line 79 "src/mmlparse2.y"

   unsigned int bits;
   Numb*        numb;
   const char*  strg;
   const char*  name;
   Symbol*      sym;
   Define*      def;
   CodeNode*    code;



/* Line 2068 of yacc.c  */
#line 167 "src/mmlparse2.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif




