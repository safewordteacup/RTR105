#include <stdio.h>
#include <math.h>

double fun(double enter){
    double value;
    value = exp(enter)*(1+enter);
    return value;
}

double prec, temp, mid, a, b, n = 0, function, bounds;
long long int c;
int clear;

int main(){
    printf("\nAnalyised function: e^x*(1+x) = n.\n");
    printf("Enter the n value, for which to find the root:\n");
    scanf("%lf",&n);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }    
    printf("\nChoose bounds in which to look for the root of the function.\n");
    printf("Enter the smaller(left) bound:\n");
    scanf("%lf",&a);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    printf("\nEnter the bigger(right) bound:\n");
    scanf("%lf",&b);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    printf("\nEnter the precision in which to consider the root\n");
    printf("in the format \"0.0..01\" up to 15 decimal points:\n");
    scanf("%lf",&prec);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    c = 0;
    temp = n + 1;

    while(fabs(temp - n) > prec){
        c+=1;
        mid = (a+b)/2;
        //printf("AVRG:%.15lf\n",mid);
        temp = fun(mid);
        //printf("Value at AVRG:%.15lf\n",temp);
        if(temp < n){
            a = mid;
        }
        //printf("Left bound:%.15lf\n",a);
        if(temp > n){
            b = mid;
        }
        //printf("Right bound:%.15lf\n",b);
        //printf("Absolute (val_at_avrg - n):%.15lf\n",fabs(temp-n));
        if(temp == INFINITY){
            printf("Error: Honestly I don't know why this happened.");
            break;
        }
    }

    printf("\nNumber of \"while\" cycles the algorithm used: %lld\n",c);
    printf("The root of the equation e^x*(1+x) = %.15lf is\n",n);
    printf("x = %lf\n",mid);
    
    return 0;
}