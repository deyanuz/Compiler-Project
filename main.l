%{
#include <stdio.h>
#include "main.tab.h"
#include <string.h>
#include <math.h>
extern FILE *yyin;
extern FILE *yyout;
int line = 1;
%}

%%
"start"			{return GO;}
";"				{return EOL;}
"int"			{return INT;}
"float"		{return FLOAT;}
"char"		{return CHAR;}
"if"			{return IF;}
"elif"			{return ELIF;}
"else"			{return ELSE;}
"forst"			{return FORS;}
"foren"			{return FORE;}
"step"			{return MOVBY;}
"do"			{return DO;}
"until"			{return UNTIL;}
"change"		{return SWITCH;}
"none"			{return DEFAULT;}
"in"			{return CIN;}
"out"			{return COUT;}
":="			{return EQ;}
"pp"			{return PPLUS;}
"mm"			{return MMINUS;}
"lt"			{return LT;}
"lte"			{return LTE;}
"gt"			{return GT;}
"gte"			{return GTE;}
":=="			{return CKEQ;}
"!:="			{return NOTEQ;}
"not"			{return NOT;}
"and"			{return AND;}
"or"			{return OR;}
"xor"			{return XOR;}
"case"			{return CASE;}
"fact"			{return FACT;}
"sin" 			{return SIN;}
"cos" 			{return COS;}
"tan" 			{return TAN;}
"sqr" 			{return SQRT;}
"log" 			{return LOG;}
"ln"  			{return LN;} 
"+"			{return PLUS;}
"-"			{return MINUS;}
"*"			{return MUL;}
"/"			{return DIV;}
"mod"			{return MOD;}
"pow"			{return POW;}
"max"			{return MAX;}
"min"			{return MIN;}
"<<"			{return START;}
">>"			{return END;}
"**"[^*]+"**"	{printf("\n%s\n",yytext);}
"//"				{return NL;}
"lcm"			{return LCM;}
"gcd"			{return GCD;}
"->"			{return APPEND;}
"swp"			{return SWAP;}
[-]?[0-9]+	{yylval.i = atoi(yytext);
						return Num; }
[-]?[0-9]+[.][0-9]+	{
                         yylval.d = atof(yytext);
                         return Float;
                       }
[a-zA-z0-9]+	{ strcpy(yylval.s,yytext);return Id;}
"()" 						{}

"\""(.)*"\"" {strcpy(yylval.s,yytext);return Str;}
[,.:<>(){}\]\[]	 {return yytext[0];}
[ \t\n]					{if(yytext[0] == '\n') line++;}
.										{printf("don't know\n", yytext);}

%%
int yywrap()
{
	return 1;
}

int yyerror(char *s){
	printf("error: %s near '%s' at line %d\n", s, yytext, line);
}
