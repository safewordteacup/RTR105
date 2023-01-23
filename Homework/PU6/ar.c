#include <stdio.h>
#include "userdeflib.h"

long long int ar(long long int l){
    long long int temp, result, k;

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
            printf("Error: overflow\n");
        else if(result=temp)
            return result;
        else
            printf("Not possible to calculate !%lld with data type long long int.\n",l);

}