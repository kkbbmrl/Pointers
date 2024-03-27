#include <stdio.h>
int sumOfElements(int* A,int size){
int i,sum=0;
printf("SoE -Size of A = %d,size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
for ( i = 0; i < size; i++)
{
   sum+=A[i];
}
return sum;
}
int main(){
int A[]={1,2,3,4,5};
int size = sizeof(A)/sizeof(A[0]);
int total =sumOfElements(A,size);
printf("sum of elements is %d\n",total);
printf("Main -Size of A = %d,size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
}








