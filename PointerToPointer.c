#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a = 5;
  int *p = &a;
  *p = 6;
  int **q = &p;
  int ***r = &q;
  printf("%d\n", *p);    // todo --> is equal 6 and it do derefrencing value of a.
  printf("%d\n", *q);    // todo -->  is equal a value of p and it mean the address of a
  printf("%d\n", &a);    // todo the same result of *q
  printf("%d\n", *(*q)); // todo the same result of &a
  printf("%d\n", *(*r));
  ***r = 10;                // todo derefrecing the value from a
  printf("%d\n", *(*(*r))); // todo this is equal 10
  printf("the value in a = %d\n",a);
  **q = *p +2;
  printf("the value in a =%d\n",a);
  return 0;
}