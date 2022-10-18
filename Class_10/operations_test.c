/*operācijas:                   operands_1 operācija operands_2
                                        ||
                                        \/
                                operaacijas_rezultaats
                                        (datu tips)
                parasti operaacijas rezultaatu datu tips ir lielaakais datu tips,
                kas tiek izmantots
matemaatiskaas:+,-,*,/,%,++,--
    int i1 = 5, i2 = 6, in;
    in = i1 + i2;
    in = in + 10;
    in += 10; //tas ir tas pats kaa in = in + 10, tikai kompakts pieraksts
    in++; //in = in + 1, vai in += 1;
attieciibu operaacijas: <, <=, >=, >, ==, !=
logjiskaas: &&, ||
logjiskaas pa bitiem: &, |, ^, !
bitu: <<, >>

Ko peetiit shodien: kaa straadaa operaacija?
        Vai operaacijaa driikst izmantot jebkuru datu tipu?
        operaaciju izpiishanas seciiba? (To nosaka prioritaate;
        seciibai kontrolei var izmantot () )

(int/int; vai char/char), %, &, |, ^, !, &&, ||, <<, >>
*/

#include<stdio.h>

int main()
{
        char c = 'A';
        int i = 2000;
        float f = 2.3;
        double d = -5.6e4;
printf("tests");
        printf("%d (%ld bytes)*%d (%ld bytes)\n",c,sizeof(c),i,sizeof(i));
        printf("= %d (%ld bytes)\n",c*i,sizeof(c*i));
//int/int
printf("\nint/int:");
        int a = 4;
        int b = 5;
        printf("\n %d (%ld bytes) \n", a/b, sizeof(a/b));
//char/char
printf("\nchar/char :");
        char e = 'E';
        char g = 'G';
        printf("\n %c (%ld bytes) \n", e/g, sizeof(e/g));
//modulus
printf("\n%% operracija:");
        int h = 25;
        int j = 3;
        printf("\n %d (%ld bytes) \n", h%j, sizeof(h%j));
//&
printf("\n&, |, ^, ~, <<, >> bitwise operracijas:");
        int bin1 = 0b11110000;
        int bin2 = 0b00001111;
        printf("\n1111 0000 as dec integer:%d (%ld bytes)", bin1, sizeof(bin1));
        printf("\n0000 1111 as dec integer:%d (%ld bytes)\n", bin2, sizeof(bin2));
        printf("\npeec bitu operaacijas AND: %d (%ld bytes)", bin1&bin2, sizeof(bin1&bin2));
        printf("\npeec bitu operaacijas OR: %d (%ld bytes) \n", bin1|bin2, sizeof(bin1|bin2));
        
        int bin3 = 0b00101010;
        int bin4 = 0b00111111;
        printf("\n0010 1010 as dec integer:%d (%ld bytes)", bin3, sizeof(bin3));
        printf("\n0011 1111 as dec integer:%d (%ld bytes)\n", bin4, sizeof(bin4));
        printf("\npeec bitu operaacijas XOR: %d (%ld bytes)\n", bin3^bin4, sizeof(bin3&bin4));
        
        int bin5 = 0b0001;
        printf("\n0001 as dec int:%d (%ldbytes)", bin5, sizeof(bin5));
        printf("\npeec bitu operaacijas");
return 0;
}
