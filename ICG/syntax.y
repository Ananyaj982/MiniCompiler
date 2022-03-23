%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"hashtbl.h"
#define YYSTYPE char*
int yylex();
void yyerror(char *s);
int top=-1;
int temp_i=0;
char tmp_i[3];
char temp[2]="t";
int ltop=0;
int label[20];
int lnum=0;
int l_while=0;
int l_for=0;
void push_sign();
void push_lit(char* yy);
void codegen_assign();
void codegen();
void codegen_assigna();
void codegen_un();
void if1();
void if2();
void if3();
void while1();
void while2();
void while3();

%}

%token HEADER NAMESPACE MAIN
%token T_lt T_gt T_lteq T_gteq T_neq T_eqeq T_pl T_min T_mul T_div T_and T_or T_incr T_decr T_not T_eq
%token INT CHAR FLOAT DOUBLE VOID BOOL COUT COUTSTR ENDL INS CIN XTR
%token IF ELSE WHILE DO FOR ELSE_IF T_RETURN
%token ID NUM SINGLE_CHAR_VALUE
%token OPB CLB OSCOPE CSCOPE

%%

s: header namespace main 
	 ;

namespace: NAMESPACE
	 |
	 ;
	 
header: header HEADER
	| HEADER
 	;
 	
main: INT MAIN '('')' OSCOPE start CSCOPE
    | VOID MAIN '('')' OSCOPE start CSCOPE
    ;
    
start:c
     ;

c:c stmt ';'
 |c loops
 |empty
 ;

empty:
     ;

stmt:assignment
    |expression
    |print
    |read_ip
    //| T_RETURN expression {return_code();}
    ;

assignment:ID {push_lit(yylval);}T_eq {push_sign();} expression
          {
              codegen_assign();
              check_update(yylineno,name,value,type,scope);
          }
          
          /*ID T_eq expression
          {
              
              check_update(yylineno,name,value,type,scope);
          }*/
          |TYPE ID{push_lit(yylval);}T_eq {push_sign();} expression
          {
              codegen_assign();
              add_update_node(yylineno,name,value,type,scope);
          }
          /*|TYPE ID T_eq SINGLE_CHAR_VALUE
          {
              add_update_node(yylineno,name,value,type,scope);
          }*/
          |TYPE ID
          {
              add_update_node(yylineno,name,"",type,scope);
          }
          |TYPE ID OPB lit CLB multi_decl assign multidim//array
          |ID OPB lit CLB multi_decl T_eq lit//array
          ;

multi_decl:OPB lit CLB multi_decl
		  |empty
		  ;

assign:T_eq
	  |empty
	  ;

multidim:OSCOPE array multidim
		|empty
		;
		  
		;
array:CSCOPE
	|lit CSCOPE
	|lit ',' array
	;

expression:lit 
          |lit bin_arop {push_sign();}expression {codegen();}
          |lit bin_boolop expression
          |lit un_arop {push_sign();codegen_un();}
          |un_arop expression
          |un_boolop expression
          ;

loops:WHILE  {while1();} '(' cond_stmt')' {while2();} loopbody {while3();}
     | IF'('cond_stmt')' {if1();} loopbody x{if3();}
     //|IF'('cond_stmt')' {if1();} loopbody z {if3();}
     //|IF '('cond_stmt')' loopbody ELSE loopbody
     ;


x:ELSE loopbody
 |ELSE_IF'('cond_stmt')' {if2();}loopbody x
 |empty
 ;

loopbody:OSCOPE c CSCOPE
  	    |stmt';'
  	    ;

//doloopbody:OSCOPE c CSCOPE
  //        ;

cond_stmt:stmt
         |cond
         ;


cond:lit relop lit {codegen_assigna();}
    |lit relop lit bin_boolop lit relop lit
    |un_boolop'('lit relop lit')'
    |un_boolop lit relop lit
    |un_boolop'('lit')'
    ;

print:COUT INS COUTSTR more_op
     |COUT INS lit more_op
     ;

more_op:INS COUTSTR more_op
       |INS lit more_op
       |INS ENDL
       |empty
       ;

read_ip:CIN XTR ID more_ip
       ;

more_ip:XTR ID
       |empty
       ;

lit:ID {push_lit(yylval);}
   |NUM {push_lit(value);}
   ;

TYPE:INT
    |CHAR
    |FLOAT
    |DOUBLE
    |BOOL
    ;

bin_arop:T_pl 
        |T_min 
        |T_mul
        |T_div
        ;

bin_boolop:T_and
          |T_or
          ;

un_arop:T_incr
       |T_decr
       ;

un_boolop:T_not
         ;

relop:T_lt {push_sign();}
     |T_gt {push_sign();}
     |T_lteq {push_sign();}
     |T_gteq {push_sign();}
     |T_neq {push_sign();}
     |T_eqeq {push_sign();}
     ;

%%
#include <stdio.h>
#include <string.h>
#include"lex.yy.c"
#include<ctype.h>
int count=0;
char st[100][100];
char label_node[4];


int main(int argc, char *argv[])
{
	yyin = fopen(argv[1], "r");
	FILE *filePointer;
//FILE *filePointer= fopen("input.txt", "w"); 
filePointer = fopen("input.txt", "w");
    if(!yyparse())
    {
		print_table();
        printf("\nParsing complete\n");
         printf("---------------------Quadruples-------------------------\n\n");
    printf("Operator \t Arg1 \t\t Arg2 \t\t Result \n");
    int i;
    for(i=0;i<quadlen;i++)
    {
        printf("%-8s \t %-8s \t %-8s \t %-6s \n",q[i].op,q[i].arg1,q[i].arg2,q[i].res);
        if(q[i].arg1==NULL && q[i].arg2==NULL)
        {
        	fprintf(filePointer, "%s %s %s %s\n", q[i].op,"NULL","NULL",q[i].res);
        }
        else if(q[i].arg1==NULL)
        {
        	fprintf(filePointer, "%s %s %s %s\n", q[i].op,"NULL",q[i].arg2,q[i].res);
        }
        else if(q[i].arg2==NULL)
        {
        	fprintf(filePointer, "%s %s %s %s\n", q[i].op,q[i].arg1,"NULL",q[i].res);
        }	

        else
        {
       		fprintf(filePointer, "%s %s %s %s\n", q[i].op,q[i].arg1,q[i].arg2,q[i].res);
    	}
    }
  }
    
	else
		printf("\nParsing failed\n");
	
	fclose(yyin);
	fclose(filePointer);
    return 0;
}
         
void yyerror(char *s) {
	printf("line %d : %s %s\n", yylineno, s, yytext );
}
void push_lit(char* yy)
{
	strcpy(st[++top],yy);
}

void push_sign()
{
//printf("%s\n",yytext);
strcpy(st[++top],yytext);
}
void codegen_assign()
{
    /*for(int i=top;i>=0;i--)
    {
    	printf("%s",st[i]);
    }*/
    printf("%s = %s\n",st[top-2],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,st[top-2]);
    quadlen++;
    top=-1;
}
void codegen_un()
{
    //printf("hi");
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("temporaries\n");
    temp_add_update_node(temp, "-", "temporary",scope);
     //void add_update_node(int line,char* name,char* value,char* type, int scope)
     //char st_t=st[top][0];
     char* add="1";
     char* st_op;
     //printf("op%s",st[top]);
     if(strcmp(st[top],"++")==0)
     {
     	st_op="+";
     }
     else if(strcmp(st[top],"--")==0)
     {
     	st_op="-";
     }
    printf("%s =  %s %s %s\n",temp,st[top-1],st_op,add);//creating temp=i+1
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st_op));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(add));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    //printf("%s",st[top-2]);
    strcpy(q[quadlen].op,st_op);
    strcpy(q[quadlen].arg1,st[top-1]);
    strcpy(q[quadlen].arg2,add);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("%s = %s\n", st[top-1],temp);
     q[quadlen].op = (char*)malloc(sizeof(char)*strlen("="));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    strcpy(q[quadlen].op,"=");
    strcpy(q[quadlen].arg1,temp);
    strcpy(q[quadlen].res,st[top-1]);
    quadlen++;
    top-=2;
    strcpy(st[top],temp);
    temp_i++;
    //printf("%s = %s\n", st[top-1],temp);
    
    
    /*q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    //char* value_1=temporary_update( q[quadlen].arg1,scope);
    //printf("value 1: %s\n",value_1);
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top[0]]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    //printf("temporaries");
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;*/
}
void codegen()
{
    strcpy(temp,"T");
    sprintf(tmp_i, "%d", temp_i);
    strcat(temp,tmp_i);
    //printf("temporaries\n");
    temp_add_update_node(temp, "-", "temporary",scope);
     //void add_update_node(int line,char* name,char* value,char* type, int scope)
    printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    //char* value_1=temporary_update( q[quadlen].arg1,scope);
    //printf("value 1: %s\n",value_1);
    q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    
    strcpy(q[quadlen].op,st[top-1]);
    strcpy(q[quadlen].arg1,st[top-2]);
    strcpy(q[quadlen].arg2,st[top]);
    strcpy(q[quadlen].res,temp);
    //printf("temporaries");
    quadlen++;
    top-=2;
    strcpy(st[top],temp);

temp_i++;
}
/*void return_code()//for the if clause
{
	//printf("here");
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,temp);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
}*/

void if1()//for the if clause
{
	//printf("here");
 lnum++;
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,temp);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 //printf("HI");
 label_add_update_node(q[quadlen].res, "-", "label",scope);
 quadlen++;

 temp_i++;
 label[++ltop]=lnum;
    

}
void if2()
{
int y=label[ltop--];
 printf("L%d: \n",y);
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
 q[quadlen].op = (char*)malloc(sizeof(char)*4);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
 strcpy(q[quadlen].op,"not");
 strcpy(q[quadlen].arg1,st[top]);
 strcpy(q[quadlen].res,temp);
 quadlen++;
 printf("if %s goto L%d\n",temp,lnum);
 q[quadlen].op = (char*)malloc(sizeof(char)*3);
 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
 q[quadlen].arg2 = NULL;
 q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
 strcpy(q[quadlen].op,"if");
 strcpy(q[quadlen].arg1,temp);
 char x[10];
 sprintf(x,"%d",lnum);
 char l[]="L";
 strcpy(q[quadlen].res,strcat(l,x));
 //printf("HI");
 label_add_update_node(q[quadlen].res, "-", "label",scope);
 quadlen++;
	
 temp_i++;
 label[++ltop]=lnum;
}

void codegen_assigna()//for  conditions
{
	strcpy(temp,"T");
	sprintf(tmp_i, "%d", temp_i);
	strcat(temp,tmp_i);
	temp_add_update_node(temp, "-", "temporary",scope);
	printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]);
	//printf("%d\n",strlen(st[top]));
	//if(strlen(st[top])==1)
	if(1)
	{
		//printf("hello");
	
    	char t[20];
		//printf("hello");
		strcpy(t,st[top-1]);
		//strcat(t,st[top-1]);
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(t));
    	q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    	q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
    	q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    	strcpy(q[quadlen].op,t);
    	strcpy(q[quadlen].arg1,st[top-2]);
    	strcpy(q[quadlen].arg2,st[top]);
    	strcpy(q[quadlen].res,temp);
    	quadlen++;
    
	}
	else
	{
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-2]));
    	q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-3]));
    	q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
    	q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    	strcpy(q[quadlen].op,st[top-2]);
    	strcpy(q[quadlen].arg1,st[top-3]);
    	strcpy(q[quadlen].arg2,st[top-1]);
    	strcpy(q[quadlen].res,temp);
    	quadlen++;
	}
	top-=4;

	temp_i++;
	strcpy(st[++top],temp);
}
void if3()//after if clause body
{
    int y;
    y=label[ltop--];
    printf("L%d: \n",y);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(y+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",y);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    quadlen++;
}
 
void while1()
{

    l_while = lnum;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x[10];
    sprintf(x,"%d",lnum-1);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
    label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;
}

void while2()
{
 strcpy(temp,"T");
 sprintf(tmp_i, "%d", temp_i);
 strcat(temp,tmp_i);
 temp_add_update_node(temp, "-", "temporary",scope);
 printf("%s = not %s\n",temp,st[top]);
    q[quadlen].op = (char*)malloc(sizeof(char)*4);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top]));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*strlen(temp));
    strcpy(q[quadlen].op,"not");
    strcpy(q[quadlen].arg1,st[top]);
    strcpy(q[quadlen].res,temp);
    quadlen++;
    printf("if %s goto L%d\n",temp,lnum);
    q[quadlen].op = (char*)malloc(sizeof(char)*3);
    q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(temp));
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"if");
    strcpy(q[quadlen].arg1,temp);
    char x[10];
    sprintf(x,"%d",lnum);char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
     label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;

 temp_i++;
 }

void while3()
{

printf("goto L%d \n",l_while);
q[quadlen].op = (char*)malloc(sizeof(char)*5);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(l_while+2));
    strcpy(q[quadlen].op,"goto");
    char x[10];
    sprintf(x,"%d",l_while);
    char l[]="L";
    strcpy(q[quadlen].res,strcat(l,x));
     label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;
    printf("L%d: \n",lnum++);
    q[quadlen].op = (char*)malloc(sizeof(char)*6);
    q[quadlen].arg1 = NULL;
    q[quadlen].arg2 = NULL;
    q[quadlen].res = (char*)malloc(sizeof(char)*(lnum+2));
    strcpy(q[quadlen].op,"Label");
    char x1[10];
    sprintf(x1,"%d",lnum-1);
    char l1[]="L";
    strcpy(q[quadlen].res,strcat(l1,x1));
     label_add_update_node(q[quadlen].res, "-", "label",scope);
    quadlen++;
}

