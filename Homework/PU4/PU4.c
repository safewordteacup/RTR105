#include<stdio.h>

char select, c, tempchar, resultchar;
int clear, i, tempint, resultint;
long long int l, k, templong, resultlong;

int main(){

    printf("Select a data type:\n");
    printf("\"c\" - char\n");
    printf("\"i\" - int\n");
    printf("\"l\" - long long int\n");
    scanf("%1c", &select);
    while(clear = getc(stdin)){  //clear the stdin stream, so that the next scanf's don't pickup bad input
        if(clear == '\n') break;
    }

    if( select == 'c'){
        printf("You've selected the char data type.\n");
        printf("Enter a whole decimal number to calculate it's factorial:\n");
        scanf("%hhd",&c);

        tempchar = c;
        k = c;
        resultchar = 1;
        
        while( k >= 1){
            k--;
            tempchar*=k;
            resultchar = tempchar * (k-1);
            if(resultchar<=tempchar)
                break;
        }

        if(resultchar<tempchar)
            printf("Error: overflow\n");
        else if(resultchar=tempchar)
            printf("Result: %hhd! = %hhd\n",c,resultchar);
        else
            printf("Not possible to calculate !%hhd with data type char.\n",c);
    }

    else if( select == 'i'){
        printf("You've selected the int data type.\n");
        printf("Enter a whole decimal number to calculate it's factorial:\n");
        scanf("%d",&i);

        tempint = i;
        k = i;
        resultint = 1;
        
        while( k >= 1){
            k--;
            tempint*=k;
            resultint = tempint * (k-1);
            if(resultint<=tempint)
                break;
        }

        if(resultint<tempint)
            printf("Error: overflow\n");
        else if(resultint=tempint)
            printf("Result: %d! = %d\n",i,resultint);
        else
            printf("Not possible to calculate !%d with data type int.\n",i);
    }

    else if( select == 'l'){
        printf("You've selected the long long int data type.\n");
        printf("Enter a whole decimal number to calculate it's factorial:\n");
        scanf("%lld",&l);

        templong = l;
        k = l;
        resultlong = 1;
        
        while( k >= 1){
            k--;
            templong*=k;
            resultlong = templong * (k-1);
            if(resultlong<=templong)
                break;
        }

        if(resultlong<templong)
            printf("Error: overflow\n");
        else if(resultlong=templong)
            printf("Result: %lld! = %lld\n",l,resultlong);
        else
            printf("Not possible to calculate !%lld with data type long long int.\n",l);
    }

    else
        printf("That was not an option!\n");
}