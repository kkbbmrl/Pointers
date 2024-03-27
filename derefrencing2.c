#include <stdio.h>
int main(){

int a;
int *p; /*TODO: --> another 
syntax to declare pointer int *p =&a directly without write p=&a*/
p=&a;         
a=10;
printf("address of p is :%d\n",p);
printf("value at p is :%d\n",*p);
int b=20;

*p=b;//todo --> will the adress in p change to point b ??
printf("address of p is :%d\n",p);
printf("value at p is :%d\n",*p);
    return 0;
}