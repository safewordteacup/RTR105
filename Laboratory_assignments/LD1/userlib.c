#include <stdio.h>
#include "userlib.h"

long long int fact(long long int l){
    long long int temp, result, k;

    if(l==0){
        return 1;
    }
    else if(l==1){
        return 1;
    }
    else if(l==2){
        return 2;
    }
    else{
    temp = l;
    k = l - 1;
    result = 1;    

    for(;k >= 1;k--){
            temp*=k;
            result = temp * (k-1);
            if(result<=temp)
                break;
        }

        if(result<temp)
            printf("\nError: overflow\n");
        else if(result=temp)
            return result;
        else
            printf("\nNot possible to calculate !%lld with data type long long int.\n",l);
    }
}