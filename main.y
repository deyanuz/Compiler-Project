%{
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

%}


%union{
	int i;
	double d;
	char s[1000];
}


%type <d> expr
%type <s> strexpr
%token <s> Id
%token <i> Num
%token <s> Str
%token <d> Float

%token GO EOL START END NL
%token INT FLOAT CHAR
%token CIN COUT
%token NOT AND XOR OR FACT SIN COS TAN SQRT LOG LN POW
%token IF ELIF ELSE SWITCH DEFAULT CASE EQ
%token FORS FORE MOVBY DO UNTIL
%token PPLUS MMINUS LT LTE GT GTE CKEQ NOTEQ PLUS MINUS MUL DIV MOD
%token MAX MIN COMMENT
%token GCD LCM APPEND SWAP


%nonassoc ELIF 
%nonassoc ELSE
%left DEFAULT
%left CASE



%left EQ CKEQ NOTEQ LESS LESSEQ GRE GREEQ
%left PLUS MINUS 
%left MUL DIV 
%left POW MOD
%left PPLUS MMINUS
%left AND OR XOR NOT
%left LOG LN SQRT 
%right FACT
%left SIN COS TAN


%%

	code  :  		GO START statement END { printf("Compilation Successful!!!\n"); }
					;
	statement: 		
					|statement declaration EOL {}
					|statement assignment EOL {}
					|statement input EOL {}
					|statement output EOL {}
				    |statement ifstatement {}
					|statement loop {}
				   	|statement function EOL {}
				    |statement switchstmnt {}
					|statement expr EOL {}
					;
	//declartion
	declaration : 	type var {}
					;
	type		: 	INT | FLOAT | CHAR {}
					;
	var			: 	vars ',' var {}
					|vars {}
					;
	vars   		: 	Id	
					{
						int a = addval($1,0);
						if(!a) {
							printf("%s is already exist\n",$1);
							exit(-1);
						}

					}
					|Id EQ expr 	
					{
						int a = addval($1,$3);
						if(!a) {
							printf(" %s is already exist\n",$1);
							exit(-1);
							}
					}
					|Id EQ strexpr
					{
						int a = addstr($1,$3);
						if(!a) {
							printf(" %s is already exist\n",$1);
							exit(-1);
							}
					}

					;

	//assignment
	assignment : Id EQ expr
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							setval($1,$3);
						}
				    }
					| Id EQ strexpr
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							setstr($1,$3);
						}
					}
					;
	//for printing value
	output :	COUT '(' Id ')'
				{
					if(!ifExists($3)){
							printf("%s is not declared\n",$3);
							exit(-1);
						}
						else{
							int a = getval($3);
							char *b = getstr($3);
							if(strcmp(b,"")==0){printf("%d",a);}
							else if(a=='\0') printf("%s",b);
							 
						}
				}
				|COUT '(' expr ')'
				{
					printf("%lf",$3);
				}
				|COUT '(' Str ')'
				{
					int len = strlen($3);
						int i;
						for(i = 1;  i < len-1; i++) printf("%c",$3[i]);
				}
				|COUT '(' NL ')'
				{
					printf("\n");
				}
				|COUT '(' strexpr ')'
				{
					printf("%s",$3);
				}
				;
	//for taking input
	input:		CIN '(' Id ')'
				{
					int a;
					scanf("%d",&a);
					setval($3,a);
					
				}
	//for different expressions
	expr : 		  Num {$$ = $1;}
				| Float {$$ = $1;}
				| Id	
					{
						if(!ifExists($1)) {
							printf("%s is not declared\n",$1);
							exit(-1);
						}
						else{
							$$ = getval($1);
						}
				 	}
				| MINUS expr
						{$$ = - $2;}
				| expr PLUS expr 
						{$$ = $1 + $3;}
				| expr MINUS expr
						{$$ = $1 - $3;}
				| expr MUL expr 
						{$$ = $1 * $3;}
				| expr DIV expr 
						{
							if($3) {
								$$ = $1 / $3;
								}
							else {
								$$ = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						}
				| expr MOD expr 
						{
							if($3) {
								$$ = (int)$1 % (int)$3;
								}
							else {
								$$ = 0;
								printf("\nRuntime Error: division by zero is not allowed!!!\n");
								exit(-1);
							} 
						}
				| expr POW expr 
						{$$ = pow($1,$3);}
				| expr LT expr	
						{ $$ = $1 < $3; }
				| expr GT expr	
						{ $$ = $1 > $3; }
				| expr LTE expr	
						{ $$ = $1 <= $3; }
				| expr GTE expr	
						{ $$ = $1 >= $3; }
				| expr CKEQ expr
						{ $$ = $1 == $3; }
				| expr NOTEQ expr
				 		{ $$ = $1 != $3; }
				| expr AND expr      
						{$$ = ($1 && $3);}       
				| expr OR expr       
						{$$ = ($1 || $3);}         
				| expr XOR expr     
						{$$ = ((int)$1 ^ (int)$3);}          	
				| NOT expr          
						{$$ = !$2;}               	
				| '(' expr ')'      
						{$$ = $2}       
				| SIN '(' expr ')'  
						{$$ = sin($3);}    
				| COS '(' expr ')'  
						{$$ = cos($3);}     
				| TAN '(' expr ')'  
						{$$ = tan($3);}      
				| LOG '(' expr ')'  
						{$$ = log10($3);}      
				| LN '(' expr ')'   
						{$$ = log($3);}       
				| SQRT '(' expr ')' 
						{$$ = sqrt($3);}  
				| MAX '(' expr ',' expr ')'
						{if($3 <= $5) { 
							$$ = $5;
						}
						else {
							$$ = $3;
							}
						}
				| MIN '(' expr ',' expr ')'
						{
							if($3 >= $5) { 
							$$ = $5;
						}
						else {
							$$ = $3;
							}
						}
				| expr PPLUS
						{
							$$ = $1 + 1;
						}
				| expr MMINUS
						{
							$$ = $1 - 1;
						}
				| expr FACT
						{
							long long x = 1;
							for(long long i=1;i<=$1;i++) x*=i;
							$$ = x;
						}
	strexpr :		Str
					{
						if($1[0]=='"'){
						int len = strlen($1);
						char temp[len];
						for(int i=0;i<len-1;i++) temp[i] = $1[i+1];
						temp[len-2] = '\0';
						strcpy($$,temp);
						}
						else{
							strcpy($$,$1);
						}
					}
					| strexpr PLUS strexpr
					{
						int len1 = strlen($1);
						int len2 = strlen($3);
						char temp[len1+len2];
						strcpy(temp,$1);
						strcat(temp,$3);
						strcpy($$,temp);
						printf("%s",$3);
					}
				; 
	//For conditional statement
	ifstatement: IF '(' ifexpr ')' '{' statement '}' elseif
						{
							ifdone[ifptr] = 0;
							ifptr--;
						}
				;
	ifexpr:   	expr 
						{
							ifptr++;
							ifdone[ifptr] = 0;
							if($1){
								printf("\nIf block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nIf block:False\n");
							}
						}
				;
	elseif 	: 
				| elseif ELIF '(' expr ')' '{' statement '}'
						{
							if($4 && ifdone[ifptr] == 0){
								printf("\nElse if block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse if block:False\n");
							}
						}
				| elseif ELSE '{' statement '}'
						{
							if(ifdone[ifptr] == 0){
								printf("\nElse block:True\n");
								ifdone[ifptr] = 1;
							}
							else
							{
								printf("\nElse block:False\n");
							}
						}

				;
	loop :		FORS '<' expr '>' FORE '<' expr '>' MOVBY '<' expr '>' '{' statement '}'	
					{
						int srt = $3;
						int end = $7;
						int diff = $11;
						int cnt = 0;
						int i = 0;
						for(i = srt; i <= end; i += diff){
							cnt++;
							printf("Step no : %d\n",i);
						}	
						printf("\nLoop has turned around %d times\n",cnt);
					}
				|UNTIL '<' expr '>' DO '{' statement '}'
					{
						int i=0;
						int cnt = 0;
						for(i=$3;i>0;i--)
						{
							cnt++;
							printf("Step no :%d\n",i);
						}
						printf("\nLoop has turned around %d times\n",cnt);
					}
				;
	//For built in functions
	function:	expr APPEND LCM '(' expr ')' 
					{
						lcm($1,$5);
					}
				|expr APPEND GCD '(' expr ')'
					{
						gcd($1,$5);
					}
				|expr APPEND SWAP '(' expr ')'
					{
						int a=(int)$1;
						int b=(int)$5;
						swap(&a,&b);
						$1=a;
						$5=b;
					}
				;
	//For Switch Statements
	switchstmnt	: SWITCH '(' exprswch ')' '{' cases '}' 
				;

	exprswch 	:  expr
					{
						swdone = 0;
						swvar = $1;
					}
			;


	cases	: 	/* empty */
				|DEFAULT ':' '{' statement '}' cases
					{
						if(swdone == 0){
							swdone = 1;
							printf("Default Case is True\n");
						}
						else
						{
							printf("Default Case is False\n");
						}
					}
				|CASE expr ':' '{' statement '}' cases
				{
					if($2 == swvar){
						printf("Case :%d is True\n",(int)$2);
						swdone = 1;
					}
					else
					{
						printf("Case :%d is False\n",(int)$2);
					}					
				}
				;
		

%%
int main(int argc, char **argv)
{

	yyin = freopen("input.txt","r",stdin);
	yyout = freopen("output.txt","w",stdout);
    printf("\n\n     -------Starting Program Execution-------\n\n\n");
	yyparse();
	return 0;
} 