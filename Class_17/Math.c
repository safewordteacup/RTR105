#include<stdio.h>
#include<math.h>

void main(){
	double x,y,b,a,c,f;
	a = 1;
	b = 1;
printf("insert argument x for the function:	\n");
printf("		  x			\n");
printf("	(1+x) * e			\n");
printf("					\n");
scanf("%lf", &x);

	while(a<=1000){
		for(b=1;b<=a;b++){
		f=f*b;
		}
		y = (((1+x)*pow(x,a))/f);
	}
	c=(1+x)*exp(x);
	printf("Value of (1+x)*e^x = %.2f", c);
	printf("Value of the same formula derived\n");
	printf("from the taylor series with 1000 polynomials: %2.f", y);
return 0;
}
