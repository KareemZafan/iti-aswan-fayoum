#include <stdio.h>
#include <math.h>

int getMax(int a , int b){

 return (a > b) ? a : b; 
}

double getSquareRoot(double a){
 return sqrt(a); 
}

int abs(int a){
return a > 0 ? a : -a; 

}


int main(void){

 printf("Hello World");
 
 printf("Max of(%d,%d) is %d",100,200,getMax(100,200)); // 200 
 printf("Square root of(%f) is %0.2f",100,getSquareRoot(100)); //10.00
 
 printf("Absolute value of(%d) is %d",-20,abs(-20)); // 20
 
 
}
