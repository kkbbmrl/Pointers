#include <stdio.h> 
void print(char C[])//todo the compiler force to make the( char C[] = char* C. )
{

int i=0;
while (C[i]!='\0')
{
    printf("%c",C[i]);
i++;
}

printf("\n");

}
int main()
{
    char C[20] = "hello"; //todo string gets stored in the space for array 
    // todo char *C = "hello"; => string gets stored as compile time costant cannot modify .
    print(C);
}