

%{

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include<string.h>
#include "y.tab.h"
int yylineno;
int cmnt_strt = 0;
char strbuffer[200];
char array7[32];
int errors=0;
int scope=0;
FILE *fd; 
char arr[100];
//int k;
//char dectype[100];

%}

L [a-zA-Z]
D [0-9]
ws [ \t\r\f\v]+
identifier (_|{L})({L}|{D}|_){1,32}
hex [0-9a-f]
ascii [ -~]
spec [NnFfTtVvBbRr]

%x COMMENTS
%x STRINGS
%%
#include("\""({L}|{D})({L}|{D})*"\.h"?""\") {printf("%-30s : %3s\n",yytext,"T_HEADER1" );return T_HEADER1;} 
#include<({L}|{D})({L}|{D})*"\.h"?> {printf("%-30s : %3s\n",yytext,"T_HEADER2" );return T_HEADER2;}
"#define"[ ]+[a-zA-Z_][a-zA-Z_0-9]* {printf("%-30s : %3s\n",yytext,"DEFINE" );return DEFINE;} 
"main" { return T_MAIN; }
"void" { return T_VOID; }	
"class" { return T_CLASS; }
"public" { return T_PUBLIC; }
"private" { return T_PRIVATE; }	
"static" { return T_STATIC; }
"int" {printf("%-30s : %3s\n",yytext,"T_INT" );return INT;} 
"float" {printf("%-30s : %3s\n",yytext,"T_FLOAT" );return FLOAT;} 
"long" {printf("%-30s : %3s\n",yytext,"T_LONG" );return LONG;}
"char" {printf("%-30s : %3s\n",yytext,"T_CHAR" );return CHAR;} 
 
"long long" {printf("%-30s : %3s\n",yytext,"T_LONG_LONG" );return LONG_LONG;}
"short" {printf("%-30s : %3s\n",yytext,"T_SHORT" );return SHORT;}
"signed" {printf("%-30s : %3s\n",yytext,"T_SIGNED" );return SIGNED;}
"unsigned" {printf("%-30s : %3s\n",yytext,"T_UNSIGNED" );return UNSIGNED;}
"for" {printf("%-30s : %3s\n",yytext,"T_FOR" );return FOR;}
"break" {printf("%-30s : %3s\n",yytext,"T_BREAK" );return BREAK;}
"continue" {printf("%-30s : %3s\n",yytext,"T_CONTINUE" );return CONTINUE;}
"if" {printf("%-30s : %3s\n",yytext,"T_IF" ); return IF;}//{printf("\t%-30s : %3d\n",yytext,IF);}
"else" {printf("%-30s : %3s\n",yytext,"T_ELSE" );return ELSE;}
"return" {printf("%-30s : %3s\n",yytext,"T_RETURN" );return RETURN;}
"TRUE" {yylval.boolean = 1; return(T_TRUE);}
"FALSE" {yylval.boolean = 0; return(T_FALSE);}
"while" {printf("%-30s : %3s\n",yytext,"T_WHILE" );yylval.string = strdup(yytext); return(T_WHILE);} 
"cin" {printf("%-30s : %3s\n",yytext,"T_CIN" );yylval.string=strdup(yytext); return T_CIN;}
"cout" {printf("%-30s : %3s\n",yytext,"T_COUT" );yylval.string=strdup(yytext); return T_COUT;} 
{ws} ;

[+\-]?[0][x|X]{hex}+[lLuU]? { printf("%-30s : %3s\n",yytext,"T_HEX_CONSTANT");yylval.dval = (int)strtol(yytext, NULL, 16); return HEX_CONSTANT;}



({D}({D})*)?\.([0]|({D})*{D}) { printf("%-30s : %3s\n",yytext,"T_FLOATING_CONSTANT" );yylval.floating= strtod(yytext,NULL);return(T_FCONST);}

[+\-]?{D}+[lLuU]? {printf("%-30s : %3s\n",yytext,"T_DEC_CONSTANT" );yylval.dval = atoi(yytext); return DEC_CONSTANT;}

[']{ascii}[']|['][\\]{spec}['] {printf("%-30s : %3s\n",yytext,"T_CCONST" );yylval.character=yytext[1];return(T_CCONST);} //CHAR CONST


"/*" {BEGIN(COMMENTS);}
<COMMENTS>"*/" {BEGIN(INITIAL);}
<COMMENTS>\n {yylineno++;} //increase the line counter when newline occurs in a comment
<COMMENTS><<EOF>> {printf("\nunterminated comment",yytext); errors++; }
"//".* ;
(_|{L})({L}|{D}|_)* { strncpy(array7,yytext,31); yylval.entry = insert(symbol_table, array7, INT_MAX,yylineno,scope); printf("%s\n\n",yylval.entry->lexeme);printf("%s\n",array7);if(strlen(yytext)>31) { printf("\nERROR:length>31 so truncated\n",yytext); errors++; printf("\nTruncated string is %s \n",array7);} return T_ID;}
	
["] {BEGIN(STRINGS);strbuffer[0] = '\0';}
<STRINGS>["] {BEGIN(INITIAL);strncpy(arr,yytext,strlen(yytext)-1);printf("%-17s : %3s\n",arr,"STRING");strcpy(yylval.string, arr);return(STRING);}

<STRINGS>[\\]["] {strcat(strbuffer, yytext);}
<STRINGS><<EOF>> { errors++;printf("Strings must close with \" !",yytext);}
<STRINGS>\n { errors++;yylineno++; printf("invalid string");} //increase the line counter when newline occurs in a string
{D}+({L}|_)+	{ errors++; printf("Line %3d: Illegal identifier name %s\n",yylineno,yytext);}

\n {yylineno++;}

"--"	{printf("%-30s : %3s\n",yytext,"T_DECREMENT" );return DECREMENT;}
"++"	{printf("%-30s : %3s\n",yytext,"T_INCREMENT" );return INCREMENT;}
 /* "->"	{return PTR_SELECT;} */
"+=" {printf("%-30s : %3s\n",yytext,"T_ADD_ASSIGN" );return ADD_ASSIGN;}
"-=" {printf("%-30s : %3s\n",yytext,"T_SUB_ASSIGN");return SUB_ASSIGN;}
"*=" {printf("%-30s : %3s\n",yytext,"T_MUL_ASSIGN" );return MUL_ASSIGN;}
"/=" {printf("%-30s : %3s\n",yytext,"T_DIV_ASSIGN" );return DIV_ASSIGN;}
"%=" {printf("%-30s : %3s\n",yytext,"T_MOD_ASSIGN" );return MOD_ASSIGN;}

"<<" { printf("%-30s : %3s\n",yytext,"T_OPREDIR" );return T_OPREDIR;}
">>" { printf("%-30s : %3s\n",yytext,"T_IPREDIR" );return T_IPREDIR;}
"&&"	{printf("%-30s : %3s\n",yytext,"T_LOGICAL_AND" );return LOGICAL_AND;}
"||"	{printf("%-30s : %3s\n",yytext,"T_LOGICAL_OR" );return LOGICAL_OR;}
"<="	{printf("%-30s : %3s\n",yytext,"T_LS_EQ" );return LS_EQ;}
">="	{printf("%-30s : %3s\n",yytext,"T_GR_EQ" );return GR_EQ;}
"=="	{printf("%-30s : %3s\n",yytext,"T_EQ" );return EQ;}
"!="	{printf("%-30s : %3s\n",yytext,"T_NOT_EQ" );return NOT_EQ;}
"{" {scope++;printf("%-30s : %3s\n",yytext,"T_RCURL" );return R_CURL;}
"}" {scope--;printf("%-30s : %3s\n",yytext,"T_LCURL" );return L_CURL;}

. {printf("%-30s : %3d\n",yytext,yytext[0] );
return yytext[0];}




%%
