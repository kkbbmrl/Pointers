#include <stdio.h>
int main()
{
int a;
int *p;
p = &a; // todo &a it mean the address of a 
a = 10;
 printf("a = %d", a);
*p = 20; // todo derefrencing
printf("\na = %d", a);
return 0;
}