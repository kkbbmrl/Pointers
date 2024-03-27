//cahrachter array pointer
#include <stdio.h>
#include <string.h> 
int main ()
{
    char C[]="john";
    printf("%s\n",C);
    int len = strlen(C);
    printf("the length is %d\n",len);
    printf("size of bytes is :%d",sizeof(C));
}