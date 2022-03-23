typedef struct node
{
	int line;
    int scope;
	char* name;
	char* value;
	char* type; 
} node;
typedef struct quadruples
{
    char *op;
    char *arg1;
    char *arg2;
    char *res;
}quad;
int quadlen = 0;
quad q[100];

    node symbol_table[100];
    int table_index;
    extern int yylineno;
    extern int scope;
    extern char name[100];
    extern char type[100];
    extern char value[100];

    void make_node(int line, char* name, char* value, char* type, int scope);
	void add_update_node(int line,char* name,char* value,char* type, int scope);
    void update(int line,char* name,char* value,char* type, int scope);
	void print_table();
    void make_node(int line, char* name, char* value, char* type, int scope)
    {
        symbol_table[table_index].name=(char*)malloc(sizeof(char)*strlen(name));
        symbol_table[table_index].value=(char*)malloc(sizeof(char)*strlen(value));
        symbol_table[table_index].type=(char*)malloc(sizeof(char)*strlen(type));
        symbol_table[table_index].line=line;
        symbol_table[table_index].scope=scope;
        strcpy(symbol_table[table_index].name,name);
		strcpy(symbol_table[table_index].value,value);
		strcpy(symbol_table[table_index].type,type);
        symbol_table[table_index].line=line;

    }
    void make_temp_node(char* name, char* value, char* type, int scope)
    {
        symbol_table[table_index].name=(char*)malloc(sizeof(char)*strlen(name));
        symbol_table[table_index].value=(char*)malloc(sizeof(char)*strlen(value));
        symbol_table[table_index].type=(char*)malloc(sizeof(char)*strlen(type));
        //symbol_table[table_index].line=line;
        symbol_table[table_index].scope=scope;
        strcpy(symbol_table[table_index].name,name);
		strcpy(symbol_table[table_index].value,value);
		strcpy(symbol_table[table_index].type,type);
        //symbol_table[table_index].line=line;

    }
    void add_update_node(int line,char* name,char* value,char* type, int scope)
    {
        int i=0;
		int found=0;
		while(i<table_index && !found)
		{
			if(symbol_table[i].scope==scope && strcmp(symbol_table[i].name,name)==0)
			{
				//printf("warning - line %d : variable redeclared : %s\n",line,name);
                symbol_table[i].line=line;
				strcpy(symbol_table[i].value,value);
				strcpy(symbol_table[i].type,type);
				found=1;
			}
            ++i;
		}
		if(!found)
		{
			make_node(line,name,value,type,scope);
            ++table_index;
		}
    }
    void check_update(int line,char* name,char* value,char* type, int scope)//checks if it exists and update
    {
        int i=0;
		int found=0;
		while(i<table_index && !found)
		{
            if(symbol_table[i].scope<=scope && strcmp(symbol_table[i].name,name)==0)
			{
				symbol_table[i].line=line;
				strcpy(symbol_table[i].value,value);
				//strcpy(symbol_table[i].type,type);
				found=1;
			}
            ++i;
        }
        if(!found)
        {
            //printf("line %d : variable undeclared error : %s\n\nParsing failed\n",line,name);
            //exit(0) ;
        }
    }
    void print_table()
    {
        if(table_index==0)
        {   
            printf("\nSymbol table is empty\n");
            return;
        }
        printf("\n\t\t\tSYMBOL TABLE\n\nLine number \t ID name \t Value \t\t Type  \t\t Scope\n");
		for(int i=0;i<table_index;++i)
        {
            printf("%d \t\t %s \t\t %s \t\t %s\t\t %d\n",symbol_table[i].line,symbol_table[i].name,symbol_table[i].value,symbol_table[i].type,symbol_table[i].scope);
        }
    }
    /*char* temporary_update(char* name, int scope)//checks if it exists and update
    {
        int i=0;
		int found=0;
		while(i<table_index && !found)
		{
            if(symbol_table[i].scope<=scope && strcmp(symbol_table[i].name,name)==0)
			{
				
				//printf("temp nu: %s %d %s %s %s\n",temp,line,name, symbol_table[i].value, type);
				return symbol_table[i].value;
			}
            ++i;
        }
        /*if(!found)
        {
            printf("line %d : variable undeclared error : %s\n\nParsing failed\n",line,name);
            exit(0) ;
        }
    }*/
     void temp_add_update_node(char* name,char* value,char* type, int scope)
    {
        int i=0;
		int found=0;
		while(i<table_index && !found)
		{
			if(symbol_table[i].scope==scope && strcmp(symbol_table[i].name,name)==0)
			{
				//printf("warning - line %d : variable redeclared : %s\n",line,name);
                //symbol_table[i].line=line;
				strcpy(symbol_table[i].value,value);
				strcpy(symbol_table[i].type,type);
				found=1;
			}
            ++i;
		}
		if(!found)
		{
			make_temp_node(name,value,type,scope);
            ++table_index;
		}
    }
     void label_add_update_node(char* name, char* value, char* type, int scope)
     {
     	 int i=0;
		int found=0;
		//printf("hi");
		while(i<table_index && !found)
		{
			if(symbol_table[i].scope==scope && strcmp(symbol_table[i].name,name)==0)
			{
				//printf("warning - line %d : variable redeclared : %s\n",line,name);
                //symbol_table[i].line=line;
                //printf("%s",name);
				strcpy(symbol_table[i].value,value);
				strcpy(symbol_table[i].type,type);
				found=1;
			}
            ++i;
		}
		if(!found)
		{
			make_temp_node(name,value,type,scope);
            ++table_index;
		}
     }

