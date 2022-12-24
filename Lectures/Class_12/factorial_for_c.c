/*
5!=1*2*3*4*5=(5-0)*(5-1)*(5-2)*(5-3)*(5-4)=4!*5
5!/5=4!
*/

#include<stdio.h>
int main()
	{
	long i,n,fact;
	printf("Dear user, please enter an integer: ");
	scanf("%ld", &n);

	fact = 1;
	//for(i=1; fact=1;;)
	for(i=1; i<=n; i++)
		{
		fact = fact * i;
		printf("%3ld! = %15ld \n", i, fact);
		}
	
	return 0;
	}
