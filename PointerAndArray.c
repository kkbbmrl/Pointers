#include <stdio.h>
int main(){
    int A[5]={2,4,5,8,1};
    int *p=A; // todo syntax in pointer array 
  
    printf("%d\n",A);   // todo this equal &A in the arrays 
    printf("%d\n",&A[0]);
    printf("%d\n",A[0]);
    printf("%d\n",*A); // todo this is equal the value in the array element
int i;
for ( i = 0; i < 5; i++)
{
    printf("Address of the element %d = %d\n",i,&A[i]);
    printf("Address of the element %d = %d\n",i,A+i);
    printf("the value =%d\n",A[i]);
    printf("the value =%d\n",*(A+i));
}

}