%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
char name[100];
char value[100];
char type[100];
int scope=0;
%}
alpha [A-Za-z_]
digit [0-9]
digits	{digit}+
opFraction	(\.{digits})?
opExponent	([Ee][+-]?{digits})?
number	{digits}{opFraction}{opExponent}
%%

[\n][ \t|' ']* yylineno = yylineno + 1;
[\t|' '] ;
\/\/.* ;	//
\/\*(.*\n)*.*\*\/ ; /* */
"#include"([ ]+)?((<(\\.|[^>])+>)|(\"(\\.|[^"])+\")) { printf("%s\n","T_INCLUDE");return HEADER;}
"using namespace std;" return NAMESPACE;
"main" return MAIN;
\"({alpha}|{digit}|[ ])\" {strcpy(value, yytext);return SINGLE_CHAR_VALUE;} 
\"({alpha}|{digit}|[ ])*\" return COUTSTR;
"cout" return COUT;
"cin" return CIN;
"endl" return ENDL;
"int" {strcpy(type, yytext);return INT;}
"float" {strcpy(type, yytext);return FLOAT;}
"char" {strcpy(type, yytext);return CHAR;}
"double" {strcpy(type, yytext);return DOUBLE;}
"void" {strcpy(type, yytext);return VOID;}
"bool" {strcpy(type, yytext);return BOOL;}
"while" return WHILE;
"do" return DO;
"for" return FOR;
"if" return IF;
"else" return ELSE;
"else if" return ELSE_IF;
"return" return T_RETURN;
{number} {strcpy(value, yytext);return NUM;}
{alpha}({alpha}|{digit})* { yylval = strdup(yytext);strcpy(name, yytext);return ID;}
"{" {scope++;return OSCOPE;}
"}" {scope--;return CSCOPE;}
"[" return OPB;
"]" return CLB;
"<<" return INS;
">>" return XTR;
"<" return T_lt;
">" return T_gt;
"=" return T_eq;
"<=" return T_lteq;
">=" return T_gteq;
"==" return T_eqeq;
"!=" return T_neq;
"+"  return T_pl;
"-"  return T_min;
"*"  return T_mul;
"/"  return T_div;
"++" return T_incr;
"--" return T_decr;
"!"  return T_neq;
"||" return T_or;
"&&" return T_and;
. return *yytext;
%%

