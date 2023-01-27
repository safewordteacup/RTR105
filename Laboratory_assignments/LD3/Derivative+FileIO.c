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

    FILE *myfile = fopen("derivative.dat", "w");

    if(myfile == NULL){
        printf("Error.");
        exit(1);
    }

    printf("\nEnter value a(left most bounds for function):\n");
    scanf("%lf",&a);
    printf("\nEnter value b(right most bounds for function):\n");
    scanf("%lf",&b);
    printf("\nEnter precision which to use, to calculate the derivative\n");
    printf("\nin the form \"0.000...1\":\n");
    scanf("%lf",&deltaX);

    //table formating stuff

    fprintf(myfile, "\t               x\t              (1+x)*exp(x)\t         ((1+x)*exp(x))\'\t     ((1+x)*exp(x))\'\t    ((1+x)*exp(x))\'\'\t    ((1+x)*exp(x))\'\'\n");
    fprintf(myfile, "\t              arg\t                 funkc\t                ana.form.\t            dif.form.\t            ana.form.\t            dif.form.\n\n");
    
    x = a;
    while(x<b){
        first_deriv = (((myexp(x+deltaX))-(myexp(x-deltaX)))/(2*deltaX));
        second_deriv = (((myexp1(x+deltaX))-(myexp1(x-deltaX)))/(2*deltaX));
        ex = myexp(x); ex1 = myexp1(x); ex2 = myexp2(x);
        fprintf(myfile, "\t %20.8lf\t %20.8lf\t %20.8lf\t %20.8lf\t %20.8lf\t %20.8lf\n", x, ex, ex1, first_deriv, ex2, second_deriv);
        x += deltaX;

    } 

    fclose(myfile);

    return 0;
}