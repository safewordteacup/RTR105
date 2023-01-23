#include <stdio.h>
#include <string.h>
#include "userdeflib.h"

int a, b, c;
long long int l, factorial;

int main(){
    nanr();
    anr(a ,b);
    c = nar();
    
    printf("The answer to the universe also happens\nto be stored in this function: %d.\n\n",c);

    printf("ar.c file:\n");
    printf("    This function includes both arguments and a return value.\n");
    printf("    Arguments, can be entered and a value will be\n");
    printf("    returned to main via return statement.\n\n");
    printf("I'll be using a function from a previous task, for this last function.\n");

    printf("Enter a long long int type whole number to determine it's factorial:\n");
    scanf("%lld",&l);
    factorial = ar(l);
    printf("Result: %lld! = %lld\n\n",l,factorial);

    printf("Lastly it's important to note the notation for the compiler!\n");
    printf("ALL of the .c files have to be included:\n");
    printf("gcc nanr.c nar.c anr.c ar.c main.c -o myprog.out\n\n");
    return 0;
}