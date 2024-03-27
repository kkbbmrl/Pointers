#include <stdio.h> 
float x;
void affectation (){
    float x = 5;
}
void main(){
    x=3;
    affectation;
    printf("%d",x);
   }