#include <stdio.h>
int main()
{
int a;
int *p;      
p=&a; 
a=  120;      //todo   &a -- > address of a 
printf("%d\n",p);
printf("%d\n",*p); //todo  value at adrress pointed by p
printf("%d\n",&a); // todo the same value of p = &a 
    return 0;
}