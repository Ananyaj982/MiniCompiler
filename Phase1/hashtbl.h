#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
#include<math.h>

#define HASH_TABLE_SIZE 100


//lexeme, type + scope -> 3 search functions
//need first function
//search for lexeme $1->lexeme in syntax.y if it exists update type to class

struct entry_s
{
	char* lexeme;
	double value;
	char value1;
	int data_type;
	char type[10];
	char answer[100];
	char* classes[100];
	struct entry_s* successor;
	int lno;
	int scope;
};

typedef struct entry_s entry_t;
void display(entry_t** hash_table_ptr);

entry_t** create_table()
{
	entry_t** hash_table_ptr = NULL;

	
	if( ( hash_table_ptr = malloc( sizeof( entry_t* ) * HASH_TABLE_SIZE ) ) == NULL )
 return NULL;

	int i;

	
 for( i = 0; i < HASH_TABLE_SIZE; i++ )
	{
	hash_table_ptr[i] = NULL;
	}

	return hash_table_ptr;
}


uint32_t hash( char *lexeme ,int scope)
{
	size_t i;
	uint32_t hash;


	for ( hash = i = 0; i < strlen(lexeme); ++i ) {
		 hash += lexeme[i];
		 hash += ( hash << 10 );
		 hash ^= ( hash >> 6 );
		 }
	hash += ( hash << 3 );
	hash ^= ( hash >> 11 );
 	hash += ( hash << 15 );
 	//hash = hash * (scope<<10);
	//uint32_t hash1 = hash % HASH_TABLE_SIZE;
	return  hash % HASH_TABLE_SIZE;
}


entry_t *create_entry( char *lexeme,double value, int lno , int scope )
{
	entry_t *newentry;

	
	if( ( newentry = malloc( sizeof( entry_t ) ) ) == NULL ) {
	return NULL;
	}
	
	if( ( newentry->lexeme = strdup( lexeme ) ) == NULL ) {
	return NULL;
	}

	newentry->value = value;
	newentry->lno=lno;
	newentry->successor = NULL;
	if(newentry->value = 2147483647 ){
	newentry->value=0;
	}
	newentry->scope=scope;
	return newentry;
}


entry_t* search( entry_t** hash_table_ptr, char* lexeme,int scope )
{
	uint32_t idx = 0;
	entry_t* myentry;
	idx = hash( lexeme,scope );
	myentry = hash_table_ptr[idx];
	
	while( myentry != NULL && strcmp( lexeme, myentry->lexeme ) != 0 )
	{
	printf("IN HERE::%s\n",myentry->lexeme);
	myentry = myentry->successor;
	}

	if(myentry == NULL)
	return NULL;

	else 
	return myentry;

}


int search_entry(entry_t** hash_table_ptr, char* lexeme,int scope){
	uint32_t idx = 0;
	entry_t* myentry;
	idx = hash( lexeme ,scope);
	myentry = hash_table_ptr[idx];
	
	while( myentry != NULL && strcmp( lexeme, myentry->lexeme ) != 0 )
	{
		
	myentry = myentry->successor;
	}

	if(myentry == NULL)
	return -1;

	else{ 
	if(strcmp( lexeme, myentry->lexeme )==0)
	{
	if (strcmp("int",myentry->type )==0 )
		return 1;
	if (strcmp("float",myentry->type )==0 )
		return 2;
	if (strcmp("char",myentry->type )==0 )
		return 3;
	if( strcmp("class",myentry->type )==0)
		return 4;
	else	
		return 0;
	}
	}
}

entry_t* search_scope(entry_t** hash_table_ptr, char* lexeme,int scope){
	uint32_t idx = 0;
	entry_t* myentry;
	idx = hash( lexeme ,scope);
	myentry = hash_table_ptr[idx];
	while( myentry != NULL )
	{
	if(strcmp( lexeme, myentry->lexeme ) == 0 && myentry->scope==scope){
		return myentry;
	}
	myentry = myentry->successor;
	}

	if(myentry == NULL)
		return NULL;
}

entry_t* insert( entry_t** hash_table_ptr, char* lexeme, double value, int lno,int scope )
{
	entry_t* finder = search( hash_table_ptr, lexeme,scope );
	entry_t* x=search_scope(hash_table_ptr,lexeme,scope);
	char typ1[10];
	if( finder != NULL){
			if(x!=NULL){
			return x ;}
	}

	uint32_t idx,id1;
	entry_t* newentry = NULL;
	entry_t* head = NULL;
	
	idx = hash( lexeme, scope ); 
	newentry = create_entry( lexeme, value, lno,scope); 
	int y = search_entry( hash_table_ptr, lexeme,scope);
	if(y>0){
		if(y==1){
		strcpy(newentry->type,"int");}
		if(y==2){
		strcpy(newentry->type,"float");}
		if(y==3){
		strcpy(newentry->type,"char");
		}
		if(y==4){
		return finder;
		}		
	}
	if(newentry == NULL) 
	{
	printf("Insert failed. New entry could not be created.");
	exit(1);
	}

	head = hash_table_ptr[idx];

	if(head == NULL) 
	{
	hash_table_ptr[idx] = newentry;
	}
	else 
	{
	newentry->successor = hash_table_ptr[idx];
	hash_table_ptr[idx] = newentry;
	//display(hash_table_ptr);
	}
	return hash_table_ptr[idx];
}





void display(entry_t** hash_table_ptr)
{
	int i;
	entry_t* traverser;
 printf("Symbol table\n\n");
	printf("KEY\t\t\t\t\tDATATYPE\t\t\tVALUE/SIZE\t\t\tLINENO\t\t\t\tSCOPE\n----------------------------------------------------------------------------------------------------------------------------------------------\n\n");
 
 

	for( i=0; i < HASH_TABLE_SIZE; i++)
	{
	traverser = hash_table_ptr[i];

	while( traverser != NULL)
	{
	printf("\n");
	
	if(strcmp(traverser->type,"float")==0)	
	{
	printf(" %s\t\t\t\t\t%s\t\t\t\t%f\t\t\t\t%d\t\t\t\t%d\t\t\t\n", traverser->lexeme, traverser->type,traverser->value, traverser->lno,traverser->scope);}
	else if(strcmp(traverser->type,"int")==0)
	printf(" %s\t\t\t\t\t%s\t\t\t\t%d\t\t\t\t\t%d\t\t\t\t%d\t\t\t\n", traverser->lexeme, traverser->type,(int)traverser->value, traverser->lno,traverser->scope);
	else if(strcmp(traverser->type,"char")==0)
	printf(" %s\t\t\t\t\t%s\t\t\t\t%c\t\t\t\t\t%d\t\t\t\t%d\t\t\t\n", traverser->lexeme, traverser->type,(int)traverser->value, traverser->lno,traverser->scope);
	
	
	else 
printf(" %s\t\t\t\t\t%s\t\t\t\t%d\t\t\t\t\t%d\t\t\t\t%d\t\t\t\n", traverser->lexeme, traverser->type,(int)traverser->value, traverser->lno,traverser->scope);
		traverser = traverser->successor;

		
		}
		}
		printf("\n\n");
}
