#include <stdio.h>
#include <math.h>

int getMax(int a , int b){

 return (a > b) ? a : b; 
}

double getSquareRoot(double a){
 return sqrt(a); 
}


int main(void){

 printf("Hello World");
 
 printf("Max of(%d,%d) is %d",a,b,getMax(a,b)); 
 printf("Square root of(%d) is %d",100,getSquareRoot(100)); 
 
 
}
