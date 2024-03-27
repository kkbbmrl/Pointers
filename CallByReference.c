#include <stdio.h>
void increment(int *p)
{

    *p = *p + 1;
    printf("the value ta3 lp hiya :%d\n",*p);
}
int main()
{

    int a;
    a = 10;
    increment(&a);
    printf("the value of a est :%d", a);
   
    
}