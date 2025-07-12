#include <stdio.h>
#include <math.h>

enum {
false,
true
}boolean; 

int getMax(int a , int b){

 return (a > b) ? a : b; 
}


double getAverage(double a , double b){

 return ( a + b ) / 2; 
}


boolean isDividedBy2(int a){

 return (a % 2) == 0;  
}

double getSquareRoot(double a){
 return sqrt(a); 
}

int sum(int a , int b){

 return a+b 
}

int sub(int a , int b){

 return a-b
}



int main(void){

 printf("Hello World");
 
 printf("Max of(%d,%d) is %d",100,200,getMax(100,200)); // 200 
 printf("Square root of(%f) is %0.2f",100,getSquareRoot(100)); //10.00
 printf("sum is %d",sum(10,15)); //25
 printf("sub is %d",sub(10,15)); //-5
}
