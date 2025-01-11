
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
#line 1 ".\\main.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>
	#include <math.h>

	extern FILE *yyin;
	extern FILE *yyout;
	int yyparse();
	int yylex();
	int yyerror();

    int vptr = 0;
    int val[1000];
    char variables[1000][1000];
    char strings[1000][1000];

	void assignNull(){
		for(int i=0;i<1000;i++){
			val[i]='\0';
		}
	}
	void lcm(int a,int b)
	{
		int c=fmax(a,b);
		while(1)
		{
			if(c%a==0 && c%b==0)
			{
				printf("LCM of %d & %d is %d\n",a,b,c);
				break;
			}
			c++;
		}
	}
	void gcd(int a,int b)
	{
		int gcd;
		for(int i=1; i <= a && i <= b; ++i)
		{
			if(a%i==0 && b%i==0)
				gcd = i;
		}
    	printf("GCD of %d & %d is %d\n", a, b, gcd);
	}
	void swap(int *x,int *y)
	{
		int temp = *x;
		*x = *y;
		*y = temp;
	}
    int ifExists(char str[]){//check if a variable already exists
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) return 1;
        }
        return 0;
    }
    
    int addval(char str[],int newval){// if a variable does not already exist add new value
        if(ifExists(str) == 1) return 0;
        strcpy(variables[vptr],str);
        val[vptr] = newval;
        vptr++;
        return 1;
    }

	int addstr(char str[],char newstr[]){ // if a variable does not already exist add new string
		if(ifExists(str) == 1) return 0;
		strcpy(variables[vptr],str);
		strcpy(strings[vptr],newstr);
		vptr++;
		return 1;
	}

    int getval(char str[]){//for getting value
        int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        return val[idx];
    }

	char* getstr(char str[]){
		int idx = -1;
		int i;
		for(i = 0; i < vptr; i++){
			if(strcmp(variables[i],str) == 0) {
				idx = i;
				break;
			}
		}
		return strings[idx];
	}
    int setval(char str[], int newval){
    	int idx = -1;
        int i;
        for(i = 0; i < vptr; i++){
            if(strcmp(variables[i],str) == 0) {
                idx = i;
                break;
            }
        }
        val[idx] = newval;

    }
	int setstr(char str[],char newstr[]){
		int idx = -1;
		int i;
		for(i = 0; i < vptr; i++){
			if(strcmp(variables[i],str) == 0) {
				idx = i;
				break;
			}
		}
		strcpy(strings[idx],newstr);
	}
	int swdone = 0;
	double swvar;

	int ifvar[1000];
	int ifptr = -1;
	int ifdone[1000];



/* Line 189 of yacc.c  */
#line 204 "main.tab.c"

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

/* Line 214 of yacc.c  */
#line 132 ".\\main.y"

	int i;
	double d;
	char s[1000];



/* Line 214 of yacc.c  */
#line 312 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 324 "main.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1525

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  78
/* YYNRULES -- Number of states.  */
#define YYNSTATES  213

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   319

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,    67,     2,     2,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    72,     2,
      70,     2,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    68,     2,    69,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    17,    21,    25,    28,
      31,    35,    38,    42,    45,    47,    49,    51,    55,    57,
      59,    63,    67,    71,    75,    80,    85,    90,    95,   100,
     105,   107,   109,   111,   114,   118,   122,   126,   130,   134,
     138,   142,   146,   150,   154,   158,   162,   166,   170,   174,
     177,   181,   186,   191,   196,   201,   206,   211,   218,   225,
     228,   231,   234,   236,   240,   249,   251,   252,   261,   267,
     283,   292,   299,   306,   313,   321,   323,   324,   331
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      74,     0,    -1,     7,     9,    75,    10,    -1,    -1,    75,
      76,     8,    -1,    75,    80,     8,    -1,    75,    82,     8,
      -1,    75,    81,     8,    -1,    75,    85,    -1,    75,    88,
      -1,    75,    89,     8,    -1,    75,    90,    -1,    75,    83,
       8,    -1,    77,    78,    -1,    12,    -1,    13,    -1,    14,
      -1,    79,    65,    78,    -1,    79,    -1,     3,    -1,     3,
      35,    83,    -1,     3,    35,    84,    -1,     3,    35,    83,
      -1,     3,    35,    84,    -1,    16,    66,     3,    67,    -1,
      16,    66,    83,    67,    -1,    16,    66,     5,    67,    -1,
      16,    66,    11,    67,    -1,    16,    66,    84,    67,    -1,
      15,    66,     3,    67,    -1,     4,    -1,     6,    -1,     3,
      -1,    50,    83,    -1,    83,    49,    83,    -1,    83,    50,
      83,    -1,    83,    51,    83,    -1,    83,    52,    83,    -1,
      83,    53,    83,    -1,    83,    28,    83,    -1,    83,    43,
      83,    -1,    83,    45,    83,    -1,    83,    44,    83,    -1,
      83,    46,    83,    -1,    83,    47,    83,    -1,    83,    48,
      83,    -1,    83,    18,    83,    -1,    83,    20,    83,    -1,
      83,    19,    83,    -1,    17,    83,    -1,    66,    83,    67,
      -1,    22,    66,    83,    67,    -1,    23,    66,    83,    67,
      -1,    24,    66,    83,    67,    -1,    26,    66,    83,    67,
      -1,    27,    66,    83,    67,    -1,    25,    66,    83,    67,
      -1,    54,    66,    83,    65,    83,    67,    -1,    55,    66,
      83,    65,    83,    67,    -1,    83,    41,    -1,    83,    42,
      -1,    83,    21,    -1,     5,    -1,    84,    49,    84,    -1,
      29,    66,    86,    67,    68,    75,    69,    87,    -1,    83,
      -1,    -1,    87,    30,    66,    83,    67,    68,    75,    69,
      -1,    87,    31,    68,    75,    69,    -1,    36,    70,    83,
      71,    37,    70,    83,    71,    38,    70,    83,    71,    68,
      75,    69,    -1,    40,    70,    83,    71,    39,    68,    75,
      69,    -1,    83,    59,    58,    66,    83,    67,    -1,    83,
      59,    57,    66,    83,    67,    -1,    83,    59,    60,    66,
      83,    67,    -1,    32,    66,    91,    67,    68,    92,    69,
      -1,    83,    -1,    -1,    33,    72,    68,    75,    69,    92,
      -1,    34,    83,    72,    68,    75,    69,    92,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   177,   177,   179,   180,   181,   182,   183,   184,   185,
     186,   187,   188,   191,   193,   193,   193,   195,   196,   198,
     207,   215,   227,   237,   249,   263,   267,   273,   277,   283,
     291,   292,   293,   303,   305,   307,   309,   311,   322,   333,
     335,   337,   339,   341,   343,   345,   347,   349,   351,   353,
     355,   357,   359,   361,   363,   365,   367,   369,   377,   386,
     390,   394,   400,   413,   425,   431,   445,   446,   457,   470,
     483,   496,   500,   504,   514,   517,   525,   526,   537
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Id", "Num", "Str", "Float", "GO", "EOL",
  "START", "END", "NL", "INT", "FLOAT", "CHAR", "CIN", "COUT", "NOT",
  "AND", "XOR", "OR", "FACT", "SIN", "COS", "TAN", "SQRT", "LOG", "LN",
  "POW", "IF", "ELIF", "ELSE", "SWITCH", "DEFAULT", "CASE", "EQ", "FORS",
  "FORE", "MOVBY", "DO", "UNTIL", "PPLUS", "MMINUS", "LT", "LTE", "GT",
  "GTE", "CKEQ", "NOTEQ", "PLUS", "MINUS", "MUL", "DIV", "MOD", "MAX",
  "MIN", "COMMENT", "GCD", "LCM", "APPEND", "SWAP", "GREEQ", "GRE",
  "LESSEQ", "LESS", "','", "'('", "')'", "'{'", "'}'", "'<'", "'>'", "':'",
  "$accept", "code", "statement", "declaration", "type", "var", "vars",
  "assignment", "output", "input", "expr", "strexpr", "ifstatement",
  "ifexpr", "elseif", "loop", "function", "switchstmnt", "exprswch",
  "cases", 0
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
     315,   316,   317,   318,   319,    44,    40,    41,   123,   125,
      60,    62,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    77,    77,    77,    78,    78,    79,
      79,    79,    80,    80,    81,    81,    81,    81,    81,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    84,    84,    85,    86,    87,    87,    87,    88,
      88,    89,    89,    89,    90,    91,    92,    92,    92
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     3,     3,     3,     2,     2,
       3,     2,     3,     2,     1,     1,     1,     3,     1,     1,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     4,     4,     4,     4,     4,     6,     6,     2,
       2,     2,     1,     3,     8,     1,     0,     8,     5,    15,
       8,     6,     6,     6,     7,     1,     0,     6,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    32,    30,    31,     2,
      14,    15,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     8,     9,     0,    11,
       0,     0,     0,    32,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     4,
      19,    13,    18,     5,     7,     6,    12,     0,     0,     0,
      61,     0,    59,    60,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    62,    22,    23,
       0,    32,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,    75,     0,     0,     0,     0,     0,
      50,     0,     0,    46,    48,    47,    39,    40,    42,    41,
      43,    44,    45,    34,    35,    36,    37,    38,     0,     0,
       0,     0,    29,    24,    26,    27,    25,    28,    51,    52,
      53,    56,    54,    55,     0,     0,     0,     0,     0,     0,
      20,    21,    17,     0,     0,     0,    63,     3,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     3,    57,    58,    72,    71,    73,    66,     0,     0,
      74,     0,     0,    64,     3,     0,     0,    70,     0,     0,
       0,     3,     0,     0,     3,    76,     0,     0,     0,     0,
      77,    76,     0,     0,    68,    78,     0,     3,     3,     0,
       0,    67,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    30,    31,    61,    62,    32,    33,    34,
      35,    89,    36,   103,   183,    37,    38,    39,   105,   169
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -193
static const yytype_int16 yypact[] =
{
      -1,     1,     8,  -193,  -193,   519,   -20,  -193,  -193,  -193,
    -193,  -193,  -193,   -48,   -44,   640,   -43,   -42,   -40,   -38,
     -37,   -26,   -19,   -11,   -51,   -13,   640,    18,    20,   640,
      79,    85,    81,    83,    84,   786,  -193,  -193,    90,  -193,
     587,    97,   572,  -193,     0,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,  1453,   640,   640,   822,  -193,
      58,  -193,    36,  -193,  -193,  -193,  -193,   640,   640,   640,
    -193,   640,  -193,  -193,   640,   640,   640,   640,   640,   640,
     640,   640,   640,   640,   640,   -53,  -193,  -193,  1398,    60,
      43,    44,    54,    57,   858,   -47,   894,   930,   966,  1002,
    1038,  1074,  1398,    59,  1398,    61,   630,   668,  1326,  1362,
    -193,   587,    85,     0,     0,     0,   777,  1398,  1398,  1398,
    1398,  1434,  1434,  1453,  1453,  1472,  1472,   777,    63,    64,
      66,   120,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -193,
    -193,  -193,  -193,  -193,    69,    74,   106,   105,   640,   640,
    1398,    60,  -193,   640,   640,   640,  -193,  -193,   -21,    77,
      80,  1110,  1146,  1182,  1218,  1254,    91,    78,   640,    82,
     640,  -193,  -193,  -193,  -193,  -193,  -193,  -193,    86,    30,
    -193,   704,   171,   -14,  -193,    88,   111,  -193,    92,    93,
     229,  -193,    89,   640,  -193,   -21,   287,   640,  1290,   345,
    -193,   -21,   740,    94,  -193,  -193,    95,  -193,  -193,   403,
     461,  -193,  -193
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -193,  -193,   -72,  -193,  -193,    40,  -193,  -193,  -193,  -193,
     -15,   -41,  -193,  -193,  -193,  -193,  -193,  -193,  -193,  -192
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,    95,   131,   200,   128,   129,     1,   130,     4,   205,
       3,    55,   167,   168,    58,    40,   188,   189,    41,    53,
     137,    70,    42,    45,    46,    88,    47,    94,    48,    49,
      96,    97,    98,    99,   100,   101,   102,   104,   106,   107,
      50,   108,   109,    74,    75,    76,    77,    51,    67,    68,
      69,    70,   113,   114,   115,    52,   116,    54,    71,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     151,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    56,   166,    57,    59,    60,    63,
     156,    64,    65,   111,     6,     7,   150,     8,    86,   182,
      90,   112,   185,    10,    11,    12,    13,    14,    15,   131,
     132,   133,   190,    16,    17,    18,    19,    20,    21,   196,
      22,   134,   199,    23,   135,    87,   144,    24,   145,   153,
     154,    25,   155,   161,   162,   209,   210,   157,   163,   164,
     165,    26,   158,   159,   160,    27,    28,   170,   171,   192,
     178,   180,   152,   179,   184,   181,   191,    29,   193,   197,
     177,   194,   207,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,     8,   198,     0,
       0,     0,   202,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,    18,    19,    20,    21,     0,
      22,     0,     0,    23,     0,     0,     0,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,    27,    28,     0,     0,     0,
       0,     0,     6,     7,     0,     8,     0,    29,     0,     0,
     187,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,    18,    19,    20,    21,     0,    22,     0,
       0,    23,     0,     0,     0,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    27,    28,     0,     0,     0,     0,     0,
       6,     7,     0,     8,     0,    29,     0,     0,   195,    10,
      11,    12,    13,    14,    15,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,     0,    22,     0,     0,    23,
       0,     0,     0,    24,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,    27,    28,     0,     0,     0,     0,     0,     6,     7,
       0,     8,     0,    29,     0,     0,   201,    10,    11,    12,
      13,    14,    15,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,     0,    22,     0,     0,    23,     0,     0,
       0,    24,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,    27,
      28,     0,     0,     0,     0,     0,     6,     7,     0,     8,
       0,    29,     0,     0,   204,    10,    11,    12,    13,    14,
      15,     0,     0,     0,     0,    16,    17,    18,    19,    20,
      21,     0,    22,     0,     0,    23,     0,     0,     0,    24,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,    27,    28,     0,
       0,     0,     0,     0,     6,     7,     0,     8,     0,    29,
       0,     0,   211,    10,    11,    12,    13,    14,    15,     0,
       0,     0,     0,    16,    17,    18,    19,    20,    21,     0,
      22,     0,     0,    23,     0,     0,     0,    24,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,     0,     0,    27,    28,     0,     0,     0,
       0,     0,     6,     7,     0,     8,     0,    29,     0,     9,
     212,    10,    11,    12,    13,    14,    15,     0,     0,     0,
       0,    16,    17,    18,    19,    20,    21,     0,    22,     0,
       0,    23,     0,     0,     0,    24,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    26,
       0,     0,     0,    27,    28,    91,     7,    92,     8,     0,
       0,     0,     0,    93,     0,    29,     0,     0,     0,    15,
      43,     7,    87,     8,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,    15,     0,     0,     0,     0,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,    26,     0,     0,     0,    27,    28,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,    29,     0,
       0,    27,    28,    43,     7,     0,     8,     0,    67,    68,
      69,    70,     0,    29,     0,     0,     0,    15,    71,     0,
       0,     0,    16,    17,    18,    19,    20,    21,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,     0,    67,    68,    69,    70,
      26,     0,     0,     0,    27,    28,    71,     0,     0,     0,
       0,   146,     0,     0,     0,     0,    29,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,   147,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,     0,     0,   186,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    67,    68,    69,    70,     0,     0,
       0,   206,     0,     0,    71,     0,     0,     0,    72,    73,
      74,    75,    76,    77,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      67,    68,    69,    70,     0,    85,     0,     0,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    67,    68,    69,    70,
       0,     0,     0,     0,     0,     0,    71,     0,     0,   110,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,    71,     0,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,    71,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    67,    68,    69,    70,     0,     0,
       0,     0,     0,     0,    71,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
      71,     0,     0,   140,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    67,    68,    69,    70,
       0,     0,     0,     0,     0,     0,    71,     0,     0,   141,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,    71,     0,     0,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,    71,     0,
       0,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    67,    68,    69,    70,     0,     0,
       0,     0,     0,     0,    71,     0,     0,   172,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
      71,     0,     0,   173,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    67,    68,    69,    70,
       0,     0,     0,     0,     0,     0,    71,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,    71,     0,     0,   175,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,    71,     0,
       0,   176,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    67,    68,    69,    70,     0,     0,
       0,     0,     0,     0,    71,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      67,    68,    69,    70,     0,     0,     0,     0,     0,     0,
      71,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    67,    68,    69,    70,
       0,     0,     0,     0,     0,     0,    71,   149,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    67,    68,    69,    70,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,    67,    68,    69,    70,    72,    73,    74,    75,    76,
      77,    71,     0,    80,    81,    82,    83,    84,     0,     0,
      67,    68,    69,    70,    72,    73,    74,    75,    76,    77,
      71,     0,     0,     0,    82,    83,    84,     0,     0,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,    84
};

static const yytype_int16 yycheck[] =
{
      15,    42,    49,   195,    57,    58,     7,    60,     0,   201,
       9,    26,    33,    34,    29,    35,    30,    31,    66,    70,
      67,    21,    66,    66,    66,    40,    66,    42,    66,    66,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      66,    56,    57,    43,    44,    45,    46,    66,    18,    19,
      20,    21,    67,    68,    69,    66,    71,    70,    28,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     111,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    66,   157,    66,     8,     3,     8,
     131,     8,     8,    35,     3,     4,   111,     6,     8,   171,
       3,    65,    72,    12,    13,    14,    15,    16,    17,    49,
      67,    67,   184,    22,    23,    24,    25,    26,    27,   191,
      29,    67,   194,    32,    67,     5,    67,    36,    67,    66,
      66,    40,    66,   148,   149,   207,   208,    68,   153,   154,
     155,    50,    68,    37,    39,    54,    55,    70,    68,    38,
      72,    69,   112,   168,    68,   170,    68,    66,    66,    70,
      69,    68,    68,    68,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,   193,    -1,
      -1,    -1,   197,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,    -1,    66,    -1,    -1,
      69,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,     6,    -1,    66,    -1,    -1,    69,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    55,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,     6,    -1,    66,    -1,    -1,    69,    12,    13,    14,
      15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    -1,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      55,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,     6,
      -1,    66,    -1,    -1,    69,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,     6,    -1,    66,
      -1,    -1,    69,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    -1,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,     6,    -1,    66,    -1,    10,
      69,    12,    13,    14,    15,    16,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    -1,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    54,    55,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    11,    -1,    66,    -1,    -1,    -1,    17,
       3,     4,     5,     6,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    66,    -1,
      -1,    54,    55,     3,     4,    -1,     6,    -1,    18,    19,
      20,    21,    -1,    66,    -1,    -1,    -1,    17,    28,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    -1,    18,    19,    20,    21,
      50,    -1,    -1,    -1,    54,    55,    28,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    66,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     8,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    71,    -1,    -1,    28,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    46,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      18,    19,    20,    21,    -1,    59,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    -1,    -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    65,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    41,    42,    43,    44,    45,
      46,    28,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      18,    19,    20,    21,    41,    42,    43,    44,    45,    46,
      28,    -1,    -1,    -1,    51,    52,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    74,     9,     0,    75,     3,     4,     6,    10,
      12,    13,    14,    15,    16,    17,    22,    23,    24,    25,
      26,    27,    29,    32,    36,    40,    50,    54,    55,    66,
      76,    77,    80,    81,    82,    83,    85,    88,    89,    90,
      35,    66,    66,     3,    83,    66,    66,    66,    66,    66,
      66,    66,    66,    70,    70,    83,    66,    66,    83,     8,
       3,    78,    79,     8,     8,     8,     8,    18,    19,    20,
      21,    28,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    59,     8,     5,    83,    84,
       3,     3,     5,    11,    83,    84,    83,    83,    83,    83,
      83,    83,    83,    86,    83,    91,    83,    83,    83,    83,
      67,    35,    65,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    83,    83,    57,    58,
      60,    49,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    71,    71,    65,    65,
      83,    84,    78,    66,    66,    66,    84,    68,    68,    37,
      39,    83,    83,    83,    83,    83,    75,    33,    34,    92,
      70,    68,    67,    67,    67,    67,    67,    69,    72,    83,
      69,    83,    75,    87,    68,    72,    71,    69,    30,    31,
      75,    68,    38,    66,    68,    69,    75,    70,    83,    75,
      92,    69,    83,    67,    69,    92,    71,    68,    68,    75,
      75,    69,    69
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
        case 2:

/* Line 1455 of yacc.c  */
#line 177 ".\\main.y"
    { printf("Compilation Successful!!!\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 180 ".\\main.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 181 ".\\main.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 182 ".\\main.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 183 ".\\main.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 184 ".\\main.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 185 ".\\main.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 186 ".\\main.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 187 ".\\main.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 188 ".\\main.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 191 ".\\main.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 193 ".\\main.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 195 ".\\main.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 196 ".\\main.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 199 ".\\main.y"
    {
						int a = addval((yyvsp[(1) - (1)].s),0);
						if(!a) {
							printf("%s is already exist\n",(yyvsp[(1) - (1)].s));
							exit(-1);
						}

					;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 208 ".\\main.y"
    {
						int a = addval((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].d));
						if(!a) {
							printf(" %s is already exist\n",(yyvsp[(1) - (3)].s));
							exit(-1);
							}
					;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 216 ".\\main.y"
    {
						int a = addstr((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].s));
						if(!a) {
							printf(" %s is already exist\n",(yyvsp[(1) - (3)].s));
							exit(-1);
							}
					;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 228 ".\\main.y"
    {
						if(!ifExists((yyvsp[(1) - (3)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (3)].s));
							exit(-1);
						}
						else{
							setval((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].d));
						}
				    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 238 ".\\main.y"
    {
						if(!ifExists((yyvsp[(1) - (3)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (3)].s));
							exit(-1);
						}
						else{
							setstr((yyvsp[(1) - (3)].s),(yyvsp[(3) - (3)].s));
						}
					;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 250 ".\\main.y"
    {
					if(!ifExists((yyvsp[(3) - (4)].s))){
							printf("%s is not declared\n",(yyvsp[(3) - (4)].s));
							exit(-1);
						}
						else{
							int a = getval((yyvsp[(3) - (4)].s));
							char *b = getstr((yyvsp[(3) - (4)].s));
							if(strcmp(b,"")==0){printf("%d",a);}
							else if(a=='\0') printf("%s",b);
							 
						}
				;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 264 ".\\main.y"
    {
					printf("%lf",(yyvsp[(3) - (4)].d));
				;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 268 ".\\main.y"
    {
					int len = strlen((yyvsp[(3) - (4)].s));
						int i;
						for(i = 1;  i < len-1; i++) printf("%c",(yyvsp[(3) - (4)].s)[i]);
				;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 274 ".\\main.y"
    {
					printf("\n");
				;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 278 ".\\main.y"
    {
					printf("%s",(yyvsp[(3) - (4)].s));
				;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 284 ".\\main.y"
    {
					int a;
					scanf("%d",&a);
					setval((yyvsp[(3) - (4)].s),a);
					
				;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 291 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (1)].i);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 292 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (1)].d);;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 294 ".\\main.y"
    {
						if(!ifExists((yyvsp[(1) - (1)].s))) {
							printf("%s is not declared\n",(yyvsp[(1) - (1)].s));
							exit(-1);
						}
						else{
							(yyval.d) = getval((yyvsp[(1) - (1)].s));
						}
				 	;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 304 ".\\main.y"
    {(yyval.d) = - (yyvsp[(2) - (2)].d);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 306 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 308 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 310 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 312 ".\\main.y"
    {
							if((yyvsp[(3) - (3)].d)) {
								(yyval.d) = (yyvsp[(1) - (3)].d) / (yyvsp[(3) - (3)].d);
								}
							else {
								(yyval.d) = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 323 ".\\main.y"
    {
							if((yyvsp[(3) - (3)].d)) {
								(yyval.d) = (int)(yyvsp[(1) - (3)].d) % (int)(yyvsp[(3) - (3)].d);
								}
							else {
								(yyval.d) = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 334 ".\\main.y"
    {(yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 336 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 338 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 340 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 342 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 344 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 346 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 348 ".\\main.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 350 ".\\main.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 352 ".\\main.y"
    {(yyval.d) = ((int)(yyvsp[(1) - (3)].d) ^ (int)(yyvsp[(3) - (3)].d));;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 354 ".\\main.y"
    {(yyval.d) = !(yyvsp[(2) - (2)].d);;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 356 ".\\main.y"
    {(yyval.d) = (yyvsp[(2) - (3)].d);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 358 ".\\main.y"
    {(yyval.d) = sin((yyvsp[(3) - (4)].d));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 360 ".\\main.y"
    {(yyval.d) = cos((yyvsp[(3) - (4)].d));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 362 ".\\main.y"
    {(yyval.d) = tan((yyvsp[(3) - (4)].d));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 364 ".\\main.y"
    {(yyval.d) = log10((yyvsp[(3) - (4)].d));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 366 ".\\main.y"
    {(yyval.d) = log((yyvsp[(3) - (4)].d));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 368 ".\\main.y"
    {(yyval.d) = sqrt((yyvsp[(3) - (4)].d));;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 370 ".\\main.y"
    {if((yyvsp[(3) - (6)].d) <= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 378 ".\\main.y"
    {
							if((yyvsp[(3) - (6)].d) >= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 387 ".\\main.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) + 1;
						;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 391 ".\\main.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) - 1;
						;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 395 ".\\main.y"
    {
							long long x = 1;
							for(long long i=1;i<=(yyvsp[(1) - (2)].d);i++) x*=i;
							(yyval.d) = x;
						;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 401 ".\\main.y"
    {
						if((yyvsp[(1) - (1)].s)[0]=='"'){
						int len = strlen((yyvsp[(1) - (1)].s));
						char temp[len];
						for(int i=0;i<len-1;i++) temp[i] = (yyvsp[(1) - (1)].s)[i+1];
						temp[len-2] = '\0';
						strcpy((yyval.s),temp);
						}
						else{
							strcpy((yyval.s),(yyvsp[(1) - (1)].s));
						}
					;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 414 ".\\main.y"
    {
						int len1 = strlen((yyvsp[(1) - (3)].s));
						int len2 = strlen((yyvsp[(3) - (3)].s));
						char temp[len1+len2];
						strcpy(temp,(yyvsp[(1) - (3)].s));
						strcat(temp,(yyvsp[(3) - (3)].s));
						strcpy((yyval.s),temp);
						printf("%s",(yyvsp[(3) - (3)].s));
					;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 426 ".\\main.y"
    {
							ifdone[ifptr] = 0;
							ifptr--;
						;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 432 ".\\main.y"
    {
							ifptr++;
							ifdone[ifptr] = 0;
							if((yyvsp[(1) - (1)].d)){
								printf("\nIf block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nIf block:False\n");
							}
						;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 447 ".\\main.y"
    {
							if((yyvsp[(4) - (8)].d) && ifdone[ifptr] == 0){
								printf("\nElse if block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse if block:False\n");
							}
						;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 458 ".\\main.y"
    {
							if(ifdone[ifptr] == 0){
								printf("\nElse block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse block:False\n");
							}
						;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 471 ".\\main.y"
    {
						int srt = (yyvsp[(3) - (15)].d);
						int end = (yyvsp[(7) - (15)].d);
						int diff = (yyvsp[(11) - (15)].d);
						int cnt = 0;
						int i = 0;
						for(i = srt; i <= end; i += diff){
							cnt++;
							printf("Step no : %d\n",i);
						}	
						printf("\nLoop has turned around %d times\n",cnt);
					;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 484 ".\\main.y"
    {
						int i=0;
						int cnt = 0;
						for(i=(yyvsp[(3) - (8)].d);i>0;i--)
						{
							cnt++;
							printf("Step no :%d\n",i);
						}
						printf("\nLoop has turned around %d times\n",cnt);
					;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 497 ".\\main.y"
    {
						lcm((yyvsp[(1) - (6)].d),(yyvsp[(5) - (6)].d));
					;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 501 ".\\main.y"
    {
						gcd((yyvsp[(1) - (6)].d),(yyvsp[(5) - (6)].d));
					;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 505 ".\\main.y"
    {
						int a=(int)(yyvsp[(1) - (6)].d);
						int b=(int)(yyvsp[(5) - (6)].d);
						swap(&a,&b);
						(yyvsp[(1) - (6)].d)=a;
						(yyvsp[(5) - (6)].d)=b;
					;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 518 ".\\main.y"
    {
						swdone = 0;
						swvar = (yyvsp[(1) - (1)].d);
					;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 527 ".\\main.y"
    {
						if(swdone == 0){
							swdone = 1;
							printf("Default Case is True\n");
						}
						else
						{
							printf("Default Case is False\n");
						}
					;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 538 ".\\main.y"
    {
					if((yyvsp[(2) - (7)].d) == swvar){
						printf("Case :%d is True\n",(int)(yyvsp[(2) - (7)].d));
						swdone = 1;
					}
					else
					{
						printf("Case :%d is False\n",(int)(yyvsp[(2) - (7)].d));
					}					
				;}
    break;



/* Line 1455 of yacc.c  */
#line 2662 "main.tab.c"
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
#line 551 ".\\main.y"

int main(int argc, char **argv)
{

	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
    printf("\n\n     -------Starting Program Execution-------\n\n\n");
	yyparse();
	return 0;
} 
