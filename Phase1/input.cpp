// this file contains all the test cases we need in accordance with the guidelines */
/* 1. Ignore single line comment
2. Ignore multiline comment
3. panic recovery, report + continue parsing 
4.symbol table : scope handling 
5. IF
6. IF-ELSE
7. WHILE
8. float,string bool has to be handled
9. Unterminated comment
10. set of operators;
11. skip over whitespace
12. recognize keywords,return token
13. recognize punctuation + ascii values
14. recognize 2(>=,<=)
15. recognize identifiers, line numbers
16. report LEXICAL errors (STRING SHOULD NOT CONTAIN \n,!> 32-BIT IDENTIFIER, INVALID CHARACTER LIKE @)
*/ 
#include<iostream>
int b;
void main()

{
int a;
int fg =  12233;
float x=90.99;
a=10;
cout<< a;
int b=23;
if(b<25)
{
     int k=12;
     }
if(a>12)
{
      int j=90;
      }
else
{
      int g=15;
      }
while(k<13)
{
k=14;
}

}
