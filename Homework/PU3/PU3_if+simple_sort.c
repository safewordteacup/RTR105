#include<stdio.h>

char ch1, ch2, ch3;
int i;
int clear;

void alphabetical(char a1, char a2, char a3){
    if( a1 < a2 && a1 < a3 ){
        if( a2 < a3 )
            printf("Your entered letters, ordered alphabetically ascendig:\n %c %c %c\n", a1, a2, a3);
        else
            printf("Your entered letters, ordered alphabetically ascendig:\n %c %c %c\n", a1, a3, a2);
    }
    else if( a2 < a1 && a2 < a3 ){
        if( a1 < a3 )
            printf("Your entered letters, ordered alphabetically ascendig:\n %c %c %c\n", a2, a1, a3);
        else
            printf("Your entered letters, ordered alphabetically ascendig:\n %c %c %c\n", a2, a3, a1);
    }
    else{
        if( a2 < a1 )
            printf("Your entered letters, ordered alphabetically ascendig:\n %c %c %c\n", a3, a2, a1);
        else
            printf("Your entered letters, ordered alphabetically ascendig:\n %c %c %c\n", a3, a1, a2);
    }
}

void inverse_alphabetical(char b1, char b2, char b3){
    if( b1 < b2 && b1 < b3 ){
        if( b2 < b3 )
            printf("Your entered letters, ordered alphabetically descendig:\n %c %c %c\n", b3, b2, b1);
        else
            printf("Your entered letters, ordered alphabetically descendig:\n %c %c %c\n", b2, b3, b1);
    }
    else if( b2 < b1 && b2 < b3 ){
        if( b1 < b3 )
            printf("Your entered letters, ordered alphabetically descendig:\n %c %c %c\n", b3, b1, b2);
        else
            printf("Your entered letters, ordered alphabetically descendig:\n %c %c %c\n", b1, b3, b2);
    }
    else{
        if( b2 < b1 )
            printf("Your entered letters, ordered alphabetically descendig:\n %c %c %c\n", b1, b2, b3);
        else
            printf("Your entered letters, ordered alphabetically descendig:\n %c %c %c\n", b2, b1, b3);
    }
}

int main(){
    printf("Enter the first letter of the sequence:\n");
    scanf("%1c", &ch1);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    printf("Enter the second letter of the sequence:\n");
    scanf("%1c", &ch2);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    printf("Enter the third letter of the sequence:\n");
    scanf("%1c", &ch3);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    printf("Enter the corresponding number to choose how to order the letters:\n");
    printf(" \"1\" alphabetically ascending\n");
    printf(" \"2\" alphabetically descending\n");
    scanf("%d", &i);
    while(clear = getc(stdin)){
        if(clear == '\n') break;
    }
    while(i != 1 && i != 2){
        printf("That was not an option, try again.\n");
        scanf("%d", &i);
        while(clear = getc(stdin)){
            if(clear == '\n') break;
    }
    }
   
    if(i == 1)
        alphabetical(ch1,ch2,ch3);
    else
        inverse_alphabetical(ch1,ch2,ch3);

    return 0;
}