#include<stdio.h>

int main()
    {
	char a=10; //divas darbības
		//mainīgo deklr. -char a - vietas piešķiršana armiņā
		//kur?(vietai ir adrese) un cik daudz? (atbilstoši datu tipam)
		//1 byte: šī baita saturs nav zināms (1101 0011 0000 vai 1111 u.tml.)
		//vērtības piešķiršana - a = 10
		//		10 -vesela tipa const
		//		int - vesela tipa const
		//		double - reāla tipa const
		//1 byte: 0000 1010
		//char a =10; -mainīgā def
		//mainīgā nosaukums (vārds) nevar saturēt atstarpes, nevar sākties ar skaitli
		//var būt ar mnemonisko naosaukumu, piem. cilindra_tilpums
	printf("a kaa simb, %c\n", a);
	printf("a kaa dec, %d\n", a);
	printf("a kaa hex, %#x\n", a);
	printf("a kaa hex, %x\n", a);
	printf("a kaa oct, %o\n", a);

	char b; //nedriikst paardeklareet mainiigo, jaaizmanto jauns
	printf("\nb kaa simb, %c\n", b);
        printf("b kaa dec, %d\n", b);
        printf("b kaa hex, %#x\n", b);
        printf("b kaa hex, %x\n", b);
        printf("b kaa oct, %o\n", b);

	b=250;
	printf("\nb kaa simb, %c\n", b);
        printf("b kaa dec, %d\n", b);
        printf("b kaa hex, %#x\n", b);
        printf("b kaa hex, %x\n", b);
        printf("b kaa oct, %o\n", b);
	return 0;
    }
