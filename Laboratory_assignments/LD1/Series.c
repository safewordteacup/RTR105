#include <stdio.h>
#include <math.h>
#include "userlib.h"

long long int n, x, power, factorial;
double actual_value, result;

int main() {
    printf("\nProvided function to use: (1+x)*e^x\n");
    printf("Taylor series provided:\n\n");

    printf("           i=input                                                      \n");
    printf("           _______                                                      \n");
    printf("           \\              i               0     1     2     3           \n");
    printf("       x    \\      (1+x)*x             / x     x     x     x        \\  \n");
    printf("(1+x)*e  ≈  /      -------- = (1+x) * | --- + --- + --- + --- + . . .|  \n");
    printf("           /          i!               \\ 0!    1!    2!    3!       /   \n");
    printf("           -------                                                      \n");
    printf("             i=0                                                      \n\n");

    printf("Please enter how many iterations/polynomials the Taylor expansion should have:\n");
    scanf("%lld",&n);
    printf("Please enter an argument \"x\" for the function/aproximation:\n");
    scanf("%lld",&x);
    actual_value = exp(x)*(1+x);

    for(long long int i = 0; i <= (n-1); i++){
        result += (1+x) * (pow(x,i)/fact(i));
        power = pow(x,i);
        factorial = fact(i);

        printf("\nResult of the Taylor series of the function\n(1+%lld)*e^%lld with %lld term(s):\n%.15lf\n",x,x,(i+1),result);
    }

    printf("\nActual value of the expression:\n(1+%lld)*e^%lld = %.15lf\n",x,x,actual_value);
    return 0;
}