%{
	#include <stdlib.h>
	#include <stdio.h>
	#include "hashtbl.h"
 	#include<stdbool.h>
 	#include<math.h>
	entry_t** symbol_table;
 	entry_t** constant_table;
 	entry_t* finding;

	double Evaluate (double lhs_value,int assign_type,double rhs_value);
	void type_check(char *, char*,int);
	int current_dtype;
	char type[10];
	char typ1[10];
	int yyerror(char *msg);
	int scope; 
	int error_no=0;
	char* className[26];
	int counter=0;
%}

%union
{
 char *string;
	double dval;
	//double value;
	float floating;
	char character;
	entry_t* entry;
	int ival;
	bool boolean;
}

%token <entry> T_ID

 /* Constants */
%token <dval> DEC_CONSTANT HEX_CONSTANT
%token <floating> T_FCONST
%token STRING
%token <character> T_CCONST
%token T_MAIN T_VOID T_CLASS T_PUBLIC T_PRIVATE T_STATIC 
 /* Logical and Relational operators */
%token LOGICAL_AND LOGICAL_OR LS_EQ GR_EQ T_AEQ NOT_EQ T_pl T_min T_mul T_div T_LT T_GT EQ

 /* Short hand assignment operators */
%token MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN SUB_ASSIGN
%token LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN R_CURL L_CURL T_not
%token INCREMENT DECREMENT T_TRUE T_FALSE T_CIN T_COUT 
%token T_IPREDIR T_OPREDIR
 /* Data types */
%token SHORT INT FLOAT LONG LONG_LONG SIGNED UNSIGNED CONST 

 /* Keywords */
%token IF FOR T_WHILE CONTINUE BREAK RETURN T_HEADER1 T_HEADER2 DEFINE CHAR

%type <dval> expression
%type <dval> expression_1
%type <dval> sub_expr
%type <dval> constant
%type <dval> unary_expr
%type <dval> arithmetic_expr
%type <dval> assignment_expr
%type <entry> lhs
%type <entry> lit
%type <ival> assign_op

%start start

%left ','
%right '='
%left LOGICAL_OR
%left LOGICAL_AND
%left T_AEQ NOT_EQ
%left '<' '>' LS_EQ GR_EQ
%left '+' '-'
%left '*' '/' '%'
%right '!'


%nonassoc UMINUS
%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE


%%

 
 /* Program is made up of multiple builder blocks. */
start: start builder
	|header
	|DEFINE
	|builder;

header: header T_HEADER2
      | header T_HEADER1 
      | T_HEADER1
      | T_HEADER2
      | error{
    		yyerrok;
    		yyclearin;}
 
      ;
 /* Each builder block is either a function or a declaration */
builder: main builder1
       | builder1 main
       ;
 
 
main : T_VOID T_MAIN '(' ')' compound_stmt
 | INT T_MAIN '(' ')'compound_stmt;
 ;
 
builder1 :function 
      | declaration 
	 | builder1 function 
	 | builder1 declaration 
	 |
;

 /* This is how a function looks like */
function: type T_ID '(' argument_list ')' compound_stmt;

 /* Now we will define a grammar for how types can be specified */
class: T_CLASS T_ID  compound_stmt  ';' {strcpy($2->type,"class");}
;
      
type1: T_PUBLIC
     | T_PRIVATE
     | T_STATIC
     |
     ;
class_stuff : type1 ':' function class_stuff
    | type1 ':' declaration class_stuff
    | declaration
    | function
    |
    ;
object : T_ID T_ID ';' 
{ strcpy($2->type,$1->lexeme); }//finding =search(symbol_table,$1->lexeme,scope);if(finding!=NULL){printf("%d\n",finding->scope);strcpy(finding->type,"class");} };
 /* Now we will define a grammar for how types can be specified */
 ;
object_call: T_ID '.' T_ID ';';
type :data_type pointer
 |data_type;

pointer: '*' pointer
 |'*'
 ;

data_type :sign_specifier type_specifier
 |type_specifier
 ;

sign_specifier :SIGNED
 |UNSIGNED
 ;

type_specifier :INT {strcpy(type,"int");}
 | FLOAT {strcpy(type,"float");}
 |SHORT INT {strcpy(type,"short int");}
 |SHORT {strcpy(type,"short");}
 |LONG {strcpy(type,"short");}
 |LONG INT {strcpy(type,"LONG INT");}
 |LONG_LONG {strcpy(type,"LONG_LONG");}
 |LONG_LONG INT {strcpy(type,"LONG_LONG INT");}
 |CHAR {strcpy(type,"char");}
 | T_VOID {strcpy(type,"VOID");}

 ;



          
argument_list :arguments
 |
 ;

arguments :arguments ',' arg
 |arg
 ;


arg :type_specifier T_ID  {strcpy($2->type,type);}
 ;


expression_1: constant { $$=$1;}
          | lit bin_arop expression_1 {type_check($1->type,typ1,0); $$=$3;}
          | expression_1 bin_arop lit { type_check(typ1,$3->type,0);$$=$1;}
          | '(' expression_1')' {$$=$2;}
          |lit bin_boolop expression_1 {type_check($1->type,typ1,0); $$ = $3; }
          | lit un_arop {$$=$1->value;}
          |un_arop expression_1 {$$ = $2; }
          |un_boolop expression_1 {$$ = $2; }
          | lit {$$=$1->value; strcpy(typ1,$1->type);}
          ;
          
lit:T_ID {$$ = $1;if(search_entry(symbol_table,$1->lexeme,scope)==0){strcpy($1->type,type);}}
    
   ;


bin_arop:T_pl 
        |T_min 
        |T_mul
        |T_div
        ;

bin_boolop:LOGICAL_AND
          |LOGICAL_OR
          ;

un_arop: INCREMENT
       | DECREMENT
       ;

un_boolop:T_not
         ;

relop:T_LT
     |T_GT 
     |LS_EQ
     |GR_EQ
     | T_AEQ 
     | NOT_EQ;
     ;
assignment: T_ID T_AEQ  expression_1 ';' {$1->value=$3;}
          //| T_ID T_AEQ  '('expression_1')' ';' {$1->value=$4;}
          | type_specifier T_ID T_AEQ  expression_1 ';'{ strcpy($2->type,type);$2->value=$4;}
          //| type_specifier T_ID T_AEQ '('expression_1')' ';' { strcpy($2->type,type);$2->value=$5;}
          |type_specifier T_ID ';' { strcpy($2->type,type);}
         
          |type_specifier T_ID '[' lit ']' multi_decl assign multidim ';'//array
          |T_ID '[' lit ']' multi_decl T_AEQ lit ';'//array
          ;
stmt:compound_stmt 
 | single_stmt 
 | assignment
 | expression
 | input_stmt 
 | output_stmt 
 //| function
 |   class_stuff 
 | object
 | object_call
  |error{
    		yyerrok;
    		yyclearin;}
 ;
 
 loops:T_WHILE  '(' cond_stmt ')'  loopbody
     |FOR '('cond_stmt_for ';' cond_stmt_for ';' cond_stmt_for  ')' loopbody 
     | IF '('cond_stmt')' loopbody x
     |IF '(' cond_stmt ')' stmt %prec LOWER_THAN_ELSE
    
     ;
     
x:ELSE IF'('cond_stmt')' loopbody x
 |ELSE loopbody
 |empty
 ;

empty:
     ;
   
assign: T_AEQ
	  |empty
	  ;

multidim:'{' array multidim
		|empty
		;
		  
		;
array:'}'
	|lit '}'
	|lit ',' array
	;
multi_decl:'[' lit ']' multi_decl
		  |empty
		  ;



loopbody:'{' statements '}'
  	    |stmt ';'
  	    ;

      

cond_stmt: cond
         | stmt
         ;

cond_stmt_for:stmt
             |cond
             |empty
             ;

cond:lit relop lit 
    | lit relop constant
    |lit relop lit bin_boolop lit relop lit
    |un_boolop'('lit relop lit')'
    |un_boolop lit relop lit
    |un_boolop'('lit')'
    ;
    
input_stmt : T_CIN T_IPREDIR i_var ';'
 ;
output_stmt : T_COUT T_OPREDIR o_var ';'
 ;
 
i_var   : i_var T_IPREDIR T_ID//{$3->scope=scope;}
	| i_var T_IPREDIR STRING
	| T_ID{$1->scope=scope;}
	| STRING
	;
	
o_var   : o_var T_OPREDIR T_ID//{$3->scope=scope;}
	| o_var T_OPREDIR STRING
	| T_ID//{$1->scope=scope;}
	| STRING
	;
	
compound_stmt :R_CURL { printf("\nScope is %d\n",scope);} statements L_CURL 
 

 ;

statements:statements stmt
| statements loops 
 |

 ;


single_stmt :function_call ';'
	|RETURN ';'
	|CONTINUE ';'
	|BREAK ';'
	|RETURN sub_expr ';'
	
 ;



declaration:   class
         |type declaration_list ';'
	|declaration_list ';'
	| unary_expr ';'
        | object ';'
        | object_call ';'
        |
            	;

declaration_list: declaration_list ',' sub_decl
	|sub_decl
	;

sub_decl: assignment_expr
 |T_ID {strcpy($1->type,type); }//$1->scope=scope;}
 |array_counter
 /*|struct_block ';'*/
 ;

/* This is because we can have empty expession statements inside for loops */

expression:
 expression ',' sub_expr	{$$ = $1,$3;}
 |sub_expr	{$$ = $1;}
	;

sub_expr:
 sub_expr '>' sub_expr	{$$ = ($1 > $3);}
 |sub_expr '<' sub_expr	{$$ = ($1 < $3);}
 |sub_expr T_AEQ sub_expr	{$$ = ($1 == $3);}
 |sub_expr NOT_EQ sub_expr {$$ = ($1 != $3);}
 |sub_expr LS_EQ sub_expr {$$ = ($1 <= $3);}
 |sub_expr GR_EQ sub_expr {$$ = ($1 >= $3);}
	|sub_expr LOGICAL_AND sub_expr {$$ = ($1 && $3);}
	|sub_expr LOGICAL_OR sub_expr {$$ = ($1 || $3);}
	|'!' sub_expr {$$ = (!$2);}
	|arithmetic_expr	{$$ = $1;}
 |assignment_expr {$$ = $1;}
	|unary_expr {$$ = $1;}
  |T_ID {$$ = $1->value;}
 |constant {$$ = $1;} 
	//|array_counter
 ;


assignment_expr :lhs assign_op arithmetic_expr {$$ = $1->value = Evaluate($1->value,$2,$3);}
 |lhs assign_op array_counter {$$ = 0;}
 |lhs assign_op function_call {$$ = 0;}
	|lhs assign_op unary_expr {$$ = $1->value = Evaluate($1->value,$2,$3);}
	|unary_expr assign_op unary_expr {$$ = 0;}
 ;

unary_expr:	lhs INCREMENT {$$ = $1->value = ($1->value)++;}
	|lhs DECREMENT {$$ = $1->value = ($1->value)--;}
	|DECREMENT lhs {$$ = $2->value = --($2->value);}
	|INCREMENT lhs {$$ = $2->value = ++($2->value);}

lhs:T_ID {$$ = $1;if(search_entry(symbol_table,$1->lexeme,scope)==0){strcpy($1->type,type);}}//$1->scope=scope;}
 //|array_counter
 ;

assign_op:T_AEQ {$$ = T_AEQ;}
 |ADD_ASSIGN {$$ = ADD_ASSIGN;}
 |SUB_ASSIGN {$$ = SUB_ASSIGN;}
 |MUL_ASSIGN {$$ = MUL_ASSIGN;}
 |DIV_ASSIGN {$$ = DIV_ASSIGN;}
 |MOD_ASSIGN {$$ = MOD_ASSIGN;}
 ;

arithmetic_expr: arithmetic_expr '+' arithmetic_expr {$$ = $1 + $3;}
 |arithmetic_expr '-' arithmetic_expr {$$ = $1 - $3;}
 |arithmetic_expr '*' arithmetic_expr {$$ = $1 * $3;}
 |arithmetic_expr '/' arithmetic_expr {$$ = ($3 == 0) ? yyerror("Divide by 0!") : ($1 / $3);}
	|arithmetic_expr '%' arithmetic_expr {$$ = (int)$1 % (int)$3;}
	|'(' arithmetic_expr ')' {$$ = $2;}
 |'-' arithmetic_expr %prec UMINUS {$$ = -$2;}
 |T_ID {$$ = $1 -> value;}
 |constant {$$ = $1;}
 ;

constant: DEC_CONSTANT {$$ = $1;}
 |HEX_CONSTANT {$$ = $1;}
 | T_FCONST {$$ = $1;}
 | T_CCONST {$$ = $1;}
 ;

array_counter: T_ID '[' expression ']' T_AEQ '{'expression'}'  {strcpy($1->type,type); $1->value=$3;}//$1->scope=scope; }
  | T_ID '[' expression ']'  {strcpy($1->type,type); $1->value=$3;}//$1->scope=scope; 
;

function_call: T_ID '(' parameter_list ')'
 |T_ID '(' ')'
 ;

parameter_list:
 parameter_list ',' parameter
 |parameter
 ;

parameter: sub_expr
|STRING

 ;
%%

#include "lex.yy.c"
#include <ctype.h>

double Evaluate (double lhs_value,int assign_type,double rhs_value)
{
	switch(assign_type)
	{
	case T_AEQ: return rhs_value;
	case ADD_ASSIGN: return (lhs_value + rhs_value);
	case SUB_ASSIGN: return (lhs_value - rhs_value);
	case MUL_ASSIGN: return (lhs_value * rhs_value);
	case DIV_ASSIGN: return (lhs_value / rhs_value);
	case MOD_ASSIGN: return ((int)lhs_value % (int)rhs_value);
	}
}

int main(int argc, char *argv[])
{
symbol_table = create_table();
	constant_table = create_table();

	yyin = fopen(argv[1], "r");
	

	if(!yyparse())
	{
	printf("\nParsing complete\n");
	}
	else
	{
	printf("\nParsing failed\n");
	}


	
	display(symbol_table);


	fclose(yyin);
	
	return 0;
}

int yyerror(char *msg)
{
error_no++;
	printf("Line no: %d Error message: %s\n", yylineno, msg);
}

void type_check(char * left, char * right, int flag)
{
	if(strcmp(left,right))
	{
		switch(flag)
		{
			case 0: yyerror("Type mismatch in arithmetic expression"); break;
			case 1: yyerror("Type mismatch in assignment expression"); break;
			case 2: yyerror("Type mismatch in logical expression"); break;
		}
	}
}

