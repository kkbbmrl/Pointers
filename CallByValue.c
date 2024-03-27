#include <stdio.h>
void increment(int a) // todo a formal parametre
{
          //todo a is a local variable in the void function 
    a = a + 1;
    printf("the value of x est :%d",a);
    printf("\nthe address of varibale x in the increment =%d\n", &a);
}
int main()
{
    int a;       //todo a is a local varibale in the main function 
    a = 10;
    increment(a);//todo a actual parametre 
    printf("a=%d\n", a);
    printf("the address of varibale a in the main function  =%d", &a); /*TODO: not the same address in 
    the increment function  (a increment != a main )*/

    
}