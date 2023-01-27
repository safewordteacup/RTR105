#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double ex, ex1, ex2, first_deriv, second_deriv, a, b, x, deltaX;

    double myexp(double a){
        return (1+a)*exp(a);
    }
    double myexp1(double x){
        return 2*exp(x)+x*exp(x);
    }
    double myexp2(double x){
        return 3*exp(x)+x*exp(x);
    }

int main(){

    printf("\nEnter value a(left most bounds for function):\n");
    scanf("%lf",&a);
    printf("\nEnter value b(right most bounds for function):\n");
    scanf("%lf",&b);
    printf("\nEnter precision which to use, to calculate the derivative\n");
    printf("\nin the form \"0.000...1\":\n");
    scanf("%lf",&deltaX);

    //table formating stuff

    
    x = a;
    while(x<b){
        printf("%lf  \\  %lf\n",x,exp(x));
        x += deltaX;

    } 

    return 0;
}