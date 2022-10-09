#include <stdio.h>

int main() {
//variables
    long long int a, b, c;
//input a
    printf("Enter 400000: \n");
    scanf("%lli", &a); 
//if the user is a smartass
        while (a != 400000){
            printf("That wasn't 400000, try again :)\n");
            printf("Enter 400000, as in forty thousand:\n");
            scanf("%lli", &a);
        }
//input b
    printf("Enter 100000: \n");
    scanf("%lli", &b); 
//again, if the user doesn't comply
        while (b != 100000){
            printf(":( That definetly wasn't 100000, maybe your keyboard's broken?\n");
            printf("Please enter exactly 100000:\n");
            scanf("%lli", &b);
        }
//calculation
    c = a * b;
//output
    printf("Yay! If you would multiply these two integers, you would get:\n%lli", c);
    printf("\nAwesome, right?\n");
    
    return 0;
}
