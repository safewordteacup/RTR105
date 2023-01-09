#include<stdio.h>
//declare the function that's going to use the bitwise operator
//essentially this function compares an integer and a 10^n multiple using
//The Boolean logic operator "AND", and prints a "1" whenever the output is > 0.
// i defines the bitwise offset of the 1. So since it's intialized as
//7, 1 is offset 7 times to the left, which gives us 1000 0000.
void myfunction(int o){
    for(int i = 7; i >= 0; i--){
        putchar(o & ( 1 << i ) ? '1' : '0');
    }
    printf("\n");
}

int main(){
for(;;){
    int b;

    //intialize an array of char's, the user will enter(max 3, because the char data type is in the limits of 0 to 255)
    char A[3];

    //input
    printf("Enter a natural number in the limits of 0 to 255:\n");

    //scan for a string, since the user is entering multiple chars into the array
    scanf("%s", A);

    //add up the induvidual chars into an int for processing,
    //if the 2nd OR 3rd char in the array aren't equal to 0, then it's a 3 digit number, then you have to add up three digits
    //with a multiplier weight of 100 for the 1st digit and 10 for the 2nd digit.
    //if the 2nd digit doesn't equal 0, then it's a 2 digit number, same logic as before applies
    //if the 2nd digit = 0, but 3rd digit doesn't equal 0, first condition still applies
    if(A[1] | A[2] != 0){
        b = 100*(A[0]-48)+10*(A[1]-48)+(A[2]-48);
        myfunction(b);
    }
    else if(A[1] != 0){
        b = 10*(A[0]-48)+(A[1]-48);
        myfunction(b);
    }
    else{
        b = (A[0]-48);
        myfunction(b);
    }
}
    return 0;
}