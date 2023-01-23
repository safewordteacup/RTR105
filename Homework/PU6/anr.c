#include <stdio.h>
#include "userdeflib.h"


void anr(int a, int b){
    printf("anr.c file:\n");
    printf("    This function has arguments, but no return.\n");
    printf("    It executes the code within the anr function body,\n");
    printf("    but can not return a value in main.\n\n");
    printf("Let's do some addition!\nEnter two numbers to add(in the limits of an int type pretty please!):\n");
    scanf("%d%d",&a,&b);
    long int c = a + b;
    printf("The sum of the entered numbers:\n%ld\n\n",c);
}