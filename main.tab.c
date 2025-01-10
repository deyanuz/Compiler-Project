
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

	// void assignNull(){
	// 	for(int i=0;i<1000;i++){
	// 		val[i]='\0';
	// 	}
	// }
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

/* Line 214 of yacc.c  */
#line 132 ".\\main.y"

	int i;
	double d;
	char s[1000];



/* Line 214 of yacc.c  */
#line 311 "main.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 323 "main.tab.c"

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
#define YYLAST   1482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  20
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNRULES -- Number of states.  */
#define YYNSTATES  210

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      65,    66,     2,     2,    64,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    71,     2,
      69,     2,    70,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,    68,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    17,    21,    25,    28,
      31,    35,    38,    42,    45,    47,    49,    51,    55,    57,
      59,    63,    67,    71,    75,    80,    85,    90,    95,   100,
     105,   107,   109,   112,   116,   120,   124,   128,   132,   136,
     140,   144,   148,   152,   156,   160,   164,   168,   172,   175,
     179,   184,   189,   194,   199,   204,   209,   216,   223,   226,
     229,   232,   234,   243,   245,   246,   255,   261,   277,   286,
     293,   300,   307,   315,   317,   318,   325
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      73,     0,    -1,     6,     8,    74,     9,    -1,    -1,    74,
      75,     7,    -1,    74,    79,     7,    -1,    74,    81,     7,
      -1,    74,    80,     7,    -1,    74,    84,    -1,    74,    87,
      -1,    74,    88,     7,    -1,    74,    89,    -1,    74,    82,
       7,    -1,    76,    77,    -1,    11,    -1,    12,    -1,    13,
      -1,    78,    64,    77,    -1,    78,    -1,     3,    -1,     3,
      34,    82,    -1,     3,    34,    83,    -1,     3,    34,    82,
      -1,     3,    34,    83,    -1,    15,    65,     3,    66,    -1,
      15,    65,    82,    66,    -1,    15,    65,     5,    66,    -1,
      15,    65,    10,    66,    -1,    15,    65,    83,    66,    -1,
      14,    65,     3,    66,    -1,     4,    -1,     3,    -1,    49,
      82,    -1,    82,    48,    82,    -1,    82,    49,    82,    -1,
      82,    50,    82,    -1,    82,    51,    82,    -1,    82,    52,
      82,    -1,    82,    27,    82,    -1,    82,    42,    82,    -1,
      82,    44,    82,    -1,    82,    43,    82,    -1,    82,    45,
      82,    -1,    82,    46,    82,    -1,    82,    47,    82,    -1,
      82,    17,    82,    -1,    82,    19,    82,    -1,    82,    18,
      82,    -1,    16,    82,    -1,    65,    82,    66,    -1,    21,
      65,    82,    66,    -1,    22,    65,    82,    66,    -1,    23,
      65,    82,    66,    -1,    25,    65,    82,    66,    -1,    26,
      65,    82,    66,    -1,    24,    65,    82,    66,    -1,    53,
      65,    82,    64,    82,    66,    -1,    54,    65,    82,    64,
      82,    66,    -1,    82,    40,    -1,    82,    41,    -1,    82,
      20,    -1,     5,    -1,    28,    65,    85,    66,    67,    74,
      68,    86,    -1,    82,    -1,    -1,    86,    29,    65,    82,
      66,    67,    74,    68,    -1,    86,    30,    67,    74,    68,
      -1,    35,    69,    82,    70,    36,    69,    82,    70,    37,
      69,    82,    70,    67,    74,    68,    -1,    39,    69,    82,
      70,    38,    67,    74,    68,    -1,    82,    58,    57,    65,
      82,    66,    -1,    82,    58,    56,    65,    82,    66,    -1,
      82,    58,    59,    65,    82,    66,    -1,    31,    65,    90,
      66,    67,    91,    68,    -1,    82,    -1,    -1,    32,    71,
      67,    74,    68,    91,    -1,    33,    82,    71,    67,    74,
      68,    91,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   176,   176,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   190,   192,   192,   192,   194,   195,   197,
     206,   214,   226,   236,   248,   260,   264,   270,   274,   280,
     288,   289,   299,   301,   303,   305,   307,   318,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   357,   359,   361,   363,   365,   373,   382,   386,
     390,   396,   406,   412,   426,   427,   438,   451,   464,   477,
     481,   485,   495,   498,   506,   507,   518
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "Id", "Num", "Str", "GO", "EOL", "START",
  "END", "NL", "INT", "FLOAT", "CHAR", "CIN", "COUT", "NOT", "AND", "XOR",
  "OR", "FACT", "SIN", "COS", "TAN", "SQRT", "LOG", "LN", "POW", "IF",
  "ELIF", "ELSE", "SWITCH", "DEFAULT", "CASE", "EQ", "FORS", "FORE",
  "MOVBY", "DO", "UNTIL", "PPLUS", "MMINUS", "LT", "LTE", "GT", "GTE",
  "CKEQ", "NOTEQ", "PLUS", "MINUS", "MUL", "DIV", "MOD", "MAX", "MIN",
  "COMMENT", "GCD", "LCM", "APPEND", "SWAP", "GREEQ", "GRE", "LESSEQ",
  "LESS", "','", "'('", "')'", "'{'", "'}'", "'<'", "'>'", "':'",
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
     315,   316,   317,   318,    44,    40,    41,   123,   125,    60,
      62,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    72,    73,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    76,    76,    76,    77,    77,    78,
      78,    78,    79,    79,    80,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    83,    84,    85,    86,    86,    86,    87,    87,    88,
      88,    88,    89,    90,    91,    91,    91
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     3,     3,     3,     2,     2,
       3,     2,     3,     2,     1,     1,     1,     3,     1,     1,
       3,     3,     3,     3,     4,     4,     4,     4,     4,     4,
       1,     1,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       4,     4,     4,     4,     4,     4,     6,     6,     2,     2,
       2,     1,     8,     1,     0,     8,     5,    15,     8,     6,
       6,     6,     7,     1,     0,     6,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     3,     1,     0,    31,    30,     2,    14,
      15,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     8,     9,     0,    11,     0,
       0,     0,    31,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,     4,    19,
      13,    18,     5,     7,     6,    12,     0,     0,     0,    60,
       0,    58,    59,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    61,    22,    23,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    63,     0,    73,     0,     0,     0,     0,     0,    49,
       0,     0,    45,    47,    46,    38,    39,    41,    40,    42,
      43,    44,    33,    34,    35,    36,    37,     0,     0,     0,
      29,    24,    26,    27,    25,    28,    50,    51,    52,    55,
      53,    54,     0,     0,     0,     0,     0,     0,    20,    21,
      17,     0,     0,     0,     3,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    56,
      57,    70,    69,    71,    64,     0,     0,    72,     0,     0,
      62,     3,     0,     0,    68,     0,     0,     0,     3,     0,
       0,     3,    74,     0,     0,     0,     0,    75,    74,     0,
       0,    66,    76,     0,     3,     3,     0,     0,    65,    67
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     5,    29,    30,    60,    61,    31,    32,    33,
      34,    88,    35,   102,   180,    36,    37,    38,   104,   166
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -191
static const yytype_int16 yypact[] =
{
      -1,     7,    16,  -191,  -191,   431,   -27,  -191,  -191,  -191,
    -191,  -191,   -48,   -47,   526,   -46,   -45,   -44,   -43,   -41,
     -39,   -37,   -36,   -29,   -26,   526,   -16,   -15,   526,    44,
      52,    50,    65,    66,   744,  -191,  -191,    67,  -191,   512,
      72,   478,  -191,     3,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,  1411,   526,   526,   780,  -191,    42,
    -191,    13,  -191,  -191,  -191,  -191,   526,   526,   526,  -191,
     526,  -191,  -191,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   -53,  -191,  -191,  1356,  -191,    17,
      18,    19,    20,   816,    27,   852,   888,   924,   960,   996,
    1032,  1356,    37,  1356,    39,   590,   626,  1284,  1320,  -191,
     512,    52,     3,     3,     3,   735,  1356,  1356,  1356,  1356,
    1392,  1392,  1411,  1411,  1430,  1430,   735,    41,    43,    45,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,    15,    46,    73,    74,   526,   526,  1356,  -191,
    -191,   526,   526,   526,  -191,   -23,    47,    51,  1068,  1104,
    1140,  1176,  1212,    76,    48,   526,    49,   526,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,    53,   554,  -191,   662,   143,
     -17,  -191,    54,    77,  -191,    57,    56,   191,  -191,    55,
     526,  -191,   -23,   239,   526,  1248,   287,  -191,   -23,   698,
      59,  -191,  -191,    60,  -191,  -191,   335,   383,  -191,  -191
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -110,  -191,  -191,    23,  -191,  -191,  -191,  -191,
     -14,   -40,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -190
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      43,    94,   197,   127,   128,     1,   129,    39,   202,   164,
     165,    54,   185,   186,    57,     3,     4,    40,    41,    44,
      45,    46,    47,    69,    48,    87,    49,    93,    50,    51,
      95,    96,    97,    98,    99,   100,   101,   103,   105,   106,
      52,   107,   108,    53,   163,    73,    74,    75,    76,    55,
      56,    58,   112,   113,   114,    59,   115,    62,   179,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     149,   187,    63,    64,    85,    89,   110,   111,   193,     6,
       7,   196,   154,   130,   131,   132,   133,     9,    10,    11,
      12,    13,    14,   135,   206,   207,   148,    15,    16,    17,
      18,    19,    20,   142,    21,   143,   151,    22,   152,   156,
     153,    23,   157,   155,   189,    24,   167,   177,   168,   175,
     181,   188,   190,   191,   194,    25,   204,   205,     0,    26,
      27,     0,   158,   159,   150,     0,     0,   160,   161,   162,
       0,    28,     0,     0,   174,     0,     6,     7,     0,     0,
       0,   176,     0,   178,     9,    10,    11,    12,    13,    14,
       0,     0,     0,     0,    15,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,   195,     0,    23,     0,
     199,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     6,     7,    26,    27,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    28,     0,
       0,   184,    15,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,     0,     0,    23,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,     0,     6,     7,    26,    27,     0,     0,     0,     0,
       9,    10,    11,    12,    13,    14,    28,     0,     0,   192,
      15,    16,    17,    18,    19,    20,     0,    21,     0,     0,
      22,     0,     0,     0,    23,     0,     0,     0,    24,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    25,     0,
       6,     7,    26,    27,     0,     0,     0,     0,     9,    10,
      11,    12,    13,    14,    28,     0,     0,   198,    15,    16,
      17,    18,    19,    20,     0,    21,     0,     0,    22,     0,
       0,     0,    23,     0,     0,     0,    24,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     6,     7,
      26,    27,     0,     0,     0,     0,     9,    10,    11,    12,
      13,    14,    28,     0,     0,   201,    15,    16,    17,    18,
      19,    20,     0,    21,     0,     0,    22,     0,     0,     0,
      23,     0,     0,     0,    24,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    25,     0,     6,     7,    26,    27,
       0,     0,     0,     0,     9,    10,    11,    12,    13,    14,
      28,     0,     0,   208,    15,    16,    17,    18,    19,    20,
       0,    21,     0,     0,    22,     0,     0,     0,    23,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    25,     0,     6,     7,    26,    27,     0,     0,
       8,     0,     9,    10,    11,    12,    13,    14,    28,     0,
       0,   209,    15,    16,    17,    18,    19,    20,     0,    21,
       0,     0,    22,     0,     0,     0,    23,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      25,    90,     7,    91,    26,    27,     0,     0,    92,     0,
       0,     0,     0,     0,    14,     0,    28,     0,     0,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     7,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,    14,    42,
       7,    26,    27,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    14,    28,     0,     0,     0,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,     0,     0,     0,
       0,    25,     0,     0,     0,    26,    27,     0,     0,     0,
       0,    66,    67,    68,    69,    25,     0,    28,     0,    26,
      27,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    28,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,   182,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     0,     0,
     144,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,   183,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    65,    66,    67,    68,    69,     0,     0,     0,     0,
       0,    66,    67,    68,    69,     0,     0,     0,   203,     0,
       0,    70,     0,     0,     0,    71,    72,    73,    74,    75,
      76,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    66,    67,    68,
      69,     0,    84,     0,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,     0,     0,   109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,    70,
       0,     0,   134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,    70,     0,     0,   136,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    66,    67,    68,    69,     0,     0,     0,     0,     0,
       0,    70,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,    70,     0,     0,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,     0,     0,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,    70,
       0,     0,   140,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,    70,     0,     0,   141,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    66,    67,    68,    69,     0,     0,     0,     0,     0,
       0,    70,     0,     0,   169,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,    70,     0,     0,
     170,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,     0,     0,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,    70,
       0,     0,   172,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    66,    67,    68,    69,     0,
       0,     0,     0,     0,     0,    70,     0,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    66,    67,    68,    69,     0,     0,     0,     0,     0,
       0,    70,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    66,    67,    68,
      69,     0,     0,     0,     0,     0,     0,    70,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    66,    67,    68,    69,     0,     0,     0,
       0,     0,     0,    70,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    66,
      67,    68,    69,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    67,
      68,    69,    71,    72,    73,    74,    75,    76,    70,     0,
      79,    80,    81,    82,    83,     0,     0,    66,    67,    68,
      69,    71,    72,    73,    74,    75,    76,    70,     0,     0,
       0,    81,    82,    83,     0,     0,     0,     0,     0,     0,
      71,    72,    73,    74,    75,    76,     0,     0,     0,     0,
       0,     0,    83
};

static const yytype_int16 yycheck[] =
{
      14,    41,   192,    56,    57,     6,    59,    34,   198,    32,
      33,    25,    29,    30,    28,     8,     0,    65,    65,    65,
      65,    65,    65,    20,    65,    39,    65,    41,    65,    65,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      69,    55,    56,    69,   154,    42,    43,    44,    45,    65,
      65,     7,    66,    67,    68,     3,    70,     7,   168,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     110,   181,     7,     7,     7,     3,    34,    64,   188,     3,
       4,   191,    67,    66,    66,    66,    66,    11,    12,    13,
      14,    15,    16,    66,   204,   205,   110,    21,    22,    23,
      24,    25,    26,    66,    28,    66,    65,    31,    65,    36,
      65,    35,    38,    67,    37,    39,    69,    68,    67,    71,
      67,    67,    65,    67,    69,    49,    67,    67,    -1,    53,
      54,    -1,   146,   147,   111,    -1,    -1,   151,   152,   153,
      -1,    65,    -1,    -1,    68,    -1,     3,     4,    -1,    -1,
      -1,   165,    -1,   167,    11,    12,    13,    14,    15,    16,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,   190,    -1,    35,    -1,
     194,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,     3,     4,    53,    54,    -1,    -1,
      -1,    -1,    11,    12,    13,    14,    15,    16,    65,    -1,
      -1,    68,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,     3,     4,    53,    54,    -1,    -1,    -1,    -1,
      11,    12,    13,    14,    15,    16,    65,    -1,    -1,    68,
      21,    22,    23,    24,    25,    26,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
       3,     4,    53,    54,    -1,    -1,    -1,    -1,    11,    12,
      13,    14,    15,    16,    65,    -1,    -1,    68,    21,    22,
      23,    24,    25,    26,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,     3,     4,
      53,    54,    -1,    -1,    -1,    -1,    11,    12,    13,    14,
      15,    16,    65,    -1,    -1,    68,    21,    22,    23,    24,
      25,    26,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,     3,     4,    53,    54,
      -1,    -1,    -1,    -1,    11,    12,    13,    14,    15,    16,
      65,    -1,    -1,    68,    21,    22,    23,    24,    25,    26,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,     3,     4,    53,    54,    -1,    -1,
       9,    -1,    11,    12,    13,    14,    15,    16,    65,    -1,
      -1,    68,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,     3,     4,     5,    53,    54,    -1,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    16,    -1,    65,    -1,    -1,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    16,     3,
       4,    53,    54,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    16,    65,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    49,    -1,    65,    -1,    53,
      54,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     7,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    70,    -1,
      -1,    27,    -1,    -1,    -1,    40,    41,    42,    43,    44,
      45,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    17,    18,    19,
      20,    -1,    58,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    27,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    27,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    40,    41,    42,    43,    44,    45,    27,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    17,    18,    19,
      20,    40,    41,    42,    43,    44,    45,    27,    -1,    -1,
      -1,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    42,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    73,     8,     0,    74,     3,     4,     9,    11,
      12,    13,    14,    15,    16,    21,    22,    23,    24,    25,
      26,    28,    31,    35,    39,    49,    53,    54,    65,    75,
      76,    79,    80,    81,    82,    84,    87,    88,    89,    34,
      65,    65,     3,    82,    65,    65,    65,    65,    65,    65,
      65,    65,    69,    69,    82,    65,    65,    82,     7,     3,
      77,    78,     7,     7,     7,     7,    17,    18,    19,    20,
      27,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    58,     7,     5,    82,    83,     3,
       3,     5,    10,    82,    83,    82,    82,    82,    82,    82,
      82,    82,    85,    82,    90,    82,    82,    82,    82,    66,
      34,    64,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    56,    57,    59,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    70,    70,    64,    64,    82,    83,
      77,    65,    65,    65,    67,    67,    36,    38,    82,    82,
      82,    82,    82,    74,    32,    33,    91,    69,    67,    66,
      66,    66,    66,    66,    68,    71,    82,    68,    82,    74,
      86,    67,    71,    70,    68,    29,    30,    74,    67,    37,
      65,    67,    68,    74,    69,    82,    74,    91,    68,    82,
      66,    68,    91,    70,    67,    67,    74,    74,    68,    68
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
#line 176 ".\\main.y"
    { printf("Compilation Successful!!!\n"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 179 ".\\main.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 180 ".\\main.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 181 ".\\main.y"
    {;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 182 ".\\main.y"
    {;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 183 ".\\main.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 184 ".\\main.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 185 ".\\main.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 186 ".\\main.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 187 ".\\main.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 190 ".\\main.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 192 ".\\main.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 194 ".\\main.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 195 ".\\main.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 198 ".\\main.y"
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
#line 207 ".\\main.y"
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
#line 215 ".\\main.y"
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
#line 227 ".\\main.y"
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
#line 237 ".\\main.y"
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
#line 249 ".\\main.y"
    {
					if(!ifExists((yyvsp[(3) - (4)].s))){
							printf("%s is not declared\n",(yyvsp[(3) - (4)].s));
							exit(-1);
						}
						else{
							int a = getval((yyvsp[(3) - (4)].s));
							if(a=='\0') printf("%s",getstr((yyvsp[(3) - (4)].s)));
							else printf("%d",a);
						}
				;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 261 ".\\main.y"
    {
					printf("%lf",(yyvsp[(3) - (4)].d));
				;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 265 ".\\main.y"
    {
					int len = strlen((yyvsp[(3) - (4)].s));
						int i;
						for(i = 1;  i < len-1; i++) printf("%c",(yyvsp[(3) - (4)].s)[i]);
				;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 271 ".\\main.y"
    {
					printf("\n");
				;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 275 ".\\main.y"
    {
					printf("%s",(yyvsp[(3) - (4)].s));
				;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 281 ".\\main.y"
    {
					int a;
					scanf("%d",&a);
					setval((yyvsp[(3) - (4)].s),a);
					
				;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 288 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (1)].i);;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 290 ".\\main.y"
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

  case 32:

/* Line 1455 of yacc.c  */
#line 300 ".\\main.y"
    {(yyval.d) = - (yyvsp[(2) - (2)].d);;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 302 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) + (yyvsp[(3) - (3)].d);;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 304 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) - (yyvsp[(3) - (3)].d);;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 306 ".\\main.y"
    {(yyval.d) = (yyvsp[(1) - (3)].d) * (yyvsp[(3) - (3)].d);;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 308 ".\\main.y"
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

  case 37:

/* Line 1455 of yacc.c  */
#line 319 ".\\main.y"
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

  case 38:

/* Line 1455 of yacc.c  */
#line 330 ".\\main.y"
    {(yyval.d) = pow((yyvsp[(1) - (3)].d),(yyvsp[(3) - (3)].d));;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 332 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) < (yyvsp[(3) - (3)].d); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 334 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) > (yyvsp[(3) - (3)].d); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 336 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) <= (yyvsp[(3) - (3)].d); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 338 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) >= (yyvsp[(3) - (3)].d); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 340 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) == (yyvsp[(3) - (3)].d); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 342 ".\\main.y"
    { (yyval.d) = (yyvsp[(1) - (3)].d) != (yyvsp[(3) - (3)].d); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 344 ".\\main.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) && (yyvsp[(3) - (3)].d));;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 346 ".\\main.y"
    {(yyval.d) = ((yyvsp[(1) - (3)].d) || (yyvsp[(3) - (3)].d));;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 348 ".\\main.y"
    {(yyval.d) = ((int)(yyvsp[(1) - (3)].d) ^ (int)(yyvsp[(3) - (3)].d));;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 350 ".\\main.y"
    {(yyval.d) = !(yyvsp[(2) - (2)].d);;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 352 ".\\main.y"
    {(yyval.d) = (yyvsp[(2) - (3)].d);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 354 ".\\main.y"
    {(yyval.d) = sin((yyvsp[(3) - (4)].d));;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 356 ".\\main.y"
    {(yyval.d) = cos((yyvsp[(3) - (4)].d));;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 358 ".\\main.y"
    {(yyval.d) = tan((yyvsp[(3) - (4)].d));;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 360 ".\\main.y"
    {(yyval.d) = log10((yyvsp[(3) - (4)].d));;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 362 ".\\main.y"
    {(yyval.d) = log((yyvsp[(3) - (4)].d));;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 364 ".\\main.y"
    {(yyval.d) = sqrt((yyvsp[(3) - (4)].d));;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 366 ".\\main.y"
    {if((yyvsp[(3) - (6)].d) <= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 374 ".\\main.y"
    {
							if((yyvsp[(3) - (6)].d) >= (yyvsp[(5) - (6)].d)) { 
							(yyval.d) = (yyvsp[(5) - (6)].d);
						}
						else {
							(yyval.d) = (yyvsp[(3) - (6)].d);
							}
						;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 383 ".\\main.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) + 1;
						;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 387 ".\\main.y"
    {
							(yyval.d) = (yyvsp[(1) - (2)].d) - 1;
						;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 391 ".\\main.y"
    {
							long long x = 1;
							for(long long i=1;i<=(yyvsp[(1) - (2)].d);i++) x*=i;
							(yyval.d) = x;
						;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 397 ".\\main.y"
    {
						int len = strlen((yyvsp[(1) - (1)].s));
						char temp[len];
						for(int i=1;i<len-1;i++) temp[i-1] = (yyvsp[(1) - (1)].s)[i];
						temp[len-1] = '\0';
						strcpy((yyval.s),temp);
					;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 407 ".\\main.y"
    {
							ifdone[ifptr] = 0;
							ifptr--;
						;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 413 ".\\main.y"
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

  case 65:

/* Line 1455 of yacc.c  */
#line 428 ".\\main.y"
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

  case 66:

/* Line 1455 of yacc.c  */
#line 439 ".\\main.y"
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

  case 67:

/* Line 1455 of yacc.c  */
#line 452 ".\\main.y"
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

  case 68:

/* Line 1455 of yacc.c  */
#line 465 ".\\main.y"
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

  case 69:

/* Line 1455 of yacc.c  */
#line 478 ".\\main.y"
    {
						lcm((yyvsp[(1) - (6)].d),(yyvsp[(5) - (6)].d));
					;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 482 ".\\main.y"
    {
						gcd((yyvsp[(1) - (6)].d),(yyvsp[(5) - (6)].d));
					;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 486 ".\\main.y"
    {
						int a=(int)(yyvsp[(1) - (6)].d);
						int b=(int)(yyvsp[(5) - (6)].d);
						swap(&a,&b);
						(yyvsp[(1) - (6)].d)=a;
						(yyvsp[(5) - (6)].d)=b;
					;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 499 ".\\main.y"
    {
						swdone = 0;
						swvar = (yyvsp[(1) - (1)].d);
					;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 508 ".\\main.y"
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

  case 76:

/* Line 1455 of yacc.c  */
#line 519 ".\\main.y"
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
#line 2621 "main.tab.c"
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
#line 532 ".\\main.y"

int main(int argc, char **argv)
{

	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
    printf("\n\n     -------Starting Program Execution-------\n\n\n");
	yyparse();
	return 0;
} 
