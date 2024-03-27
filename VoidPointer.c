#include <stdio.h>
int main()
{

    int a = 1025;
    int *p;
    p = &a;
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("Address = %d , value = %d\n",p, *p);
    // todo Void pointer  - Genric pointer
    void *p0; // todo A pointer in a program that isn't associated with a data type
    p0 = p;
    printf("Address = %d", p0); // todo here we only can print address
    //todo  printf("value = %d\n",*p);that not possible in a  void pointer 
    // todo printf("Address = %d",p0+1); --> this also not possible
// todo the void pointer is a pointer who is not allied with any data types 
    return 0;
}