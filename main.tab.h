
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
     GO = 261,
     EOL = 262,
     START = 263,
     END = 264,
     NL = 265,
     INT = 266,
     FLOAT = 267,
     CHAR = 268,
     CIN = 269,
     COUT = 270,
     NOT = 271,
     AND = 272,
     XOR = 273,
     OR = 274,
     FACT = 275,
     SIN = 276,
     COS = 277,
     TAN = 278,
     SQRT = 279,
     LOG = 280,
     LN = 281,
     POW = 282,
     IF = 283,
     ELIF = 284,
     ELSE = 285,
     SWITCH = 286,
     DEFAULT = 287,
     CASE = 288,
     EQ = 289,
     FORS = 290,
     FORE = 291,
     MOVBY = 292,
     DO = 293,
     UNTIL = 294,
     PPLUS = 295,
     MMINUS = 296,
     LT = 297,
     LTE = 298,
     GT = 299,
     GTE = 300,
     CKEQ = 301,
     NOTEQ = 302,
     PLUS = 303,
     MINUS = 304,
     MUL = 305,
     DIV = 306,
     MOD = 307,
     MAX = 308,
     MIN = 309,
     COMMENT = 310,
     GCD = 311,
     LCM = 312,
     APPEND = 313,
     SWAP = 314,
     GREEQ = 315,
     GRE = 316,
     LESSEQ = 317,
     LESS = 318
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 94 ".\\main.y"

	int i;
	double d;
	char s[1000];



/* Line 1676 of yacc.c  */
#line 123 "main.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


