#include<stdio.h>
int main(){

int a=10;
int *p= &a;
//todo -->Pointer  arithmetic 
printf("Address P is :%d\n",p);  //todo --> p is 2002
printf("value at address p is %d",*p); 
printf("\nsize of integer is %d bytes \n",sizeof(int)); // todo --> size of integer is 4 bytes.
printf("Address P+1 is :%d\n",p+1);  // todo --> p+1 is 2006
printf("Address P+2 is :%d",p+2);  // todo --> p+2 is 2010
printf("\nvalue at address p+1 is %d",*(p+1)); // todo --> this give me some garbage value 







    return 0; 
}