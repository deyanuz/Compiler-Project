
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
     Id = 258,
     Num = 259,
     Str = 260,
     Float = 261,
     GO = 262,
     EOL = 263,
     START = 264,
     END = 265,
     NL = 266,
     INT = 267,
     FLOAT = 268,
     CHAR = 269,
     CIN = 270,
     COUT = 271,
     NOT = 272,
     AND = 273,
     XOR = 274,
     OR = 275,
     FACT = 276,
     SIN = 277,
     COS = 278,
     TAN = 279,
     SQRT = 280,
     LOG = 281,
     LN = 282,
     POW = 283,
     IF = 284,
     ELIF = 285,
     ELSE = 286,
     SWITCH = 287,
     DEFAULT = 288,
     CASE = 289,
     EQ = 290,
     FORS = 291,
     FORE = 292,
     MOVBY = 293,
     DO = 294,
     UNTIL = 295,
     PPLUS = 296,
     MMINUS = 297,
     LT = 298,
     LTE = 299,
     GT = 300,
     GTE = 301,
     CKEQ = 302,
     NOTEQ = 303,
     PLUS = 304,
     MINUS = 305,
     MUL = 306,
     DIV = 307,
     MOD = 308,
     MAX = 309,
     MIN = 310,
     COMMENT = 311,
     GCD = 312,
     LCM = 313,
     APPEND = 314,
     SWAP = 315,
     GREEQ = 316,
     GRE = 317,
     LESSEQ = 318,
     LESS = 319
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 132 ".\\main.y"

	int i;
	double d;
	char s[1000];



/* Line 1676 of yacc.c  */
#line 124 "main.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


