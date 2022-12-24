/*
-cikla operatori
-while
-do while
-for

-while(expression);
-while(expression)
 ;
-while(expression){;;;}
-while(expression)
{
;
;
}

-the operation contained within while is going to be fufilled as long asa the expression in the while() function is true.
-"true" the result of the expression bitwise is atleast 1
-"false" or "absolute zero" all returning bytes of the expression return with a 0 state
*/

#include<stdio.h>

int main()
{
    int a=10;
    while (a>0)
	{
	printf("a: %d\n", a);
	a--; //a=a-1; a-=1;
	}
	//in the begining a = 10
	//1. a(10) >=10 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
	//2. printf -> 10
	//3. a samazins par 1 -> 9
	//4. a(9) >=9 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
	//5. printf -> 9
	// ...
	//i. a(0) >= 0 - 0000 0000 0000 0000 0000 0000 0000 0001 ("true")
	//
	printf("a(after loop): %d\n", a);
    return 0;
}
