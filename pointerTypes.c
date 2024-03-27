#include <stdio.h>
int main(){


int a = 1025 ;
int *p;
p=&a;         // todo &a is the address of a 
printf("size of integer is %d\n",sizeof(int));
printf("address = %d,value = %d \n",p,*p); // todo *p the value at address pointed by p 
printf("address = %d,value = %d \n",p+1,*(p+1)); // todo *p+1  the value at address pointed by p+1
char *p0;
p0 =(char*)p; // todo typecasting -->  converted to a pointer of another type.
printf("size of char is %d bytes \n ",sizeof(char));
printf("Adrress = %d ,value =%d \n",p0,*p0);
printf("Adrress = %d ,value =%d \n",p0+1,*(p0+1));

// todo --> 1025 = 00000000 00000000 00000100 00000001 




    return 0;
}