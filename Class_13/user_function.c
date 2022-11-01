#include<stdio.h>
//funct declr
char dialogs_i(int i_dialogs_arg);
char dialogs();
//funct def(var būt uzreiz definēšana bez declr)
//definēšana var būt ievietota pēc main apraksta;
//deklarēšanai vai definēšanai jābūt pirms funkcijas izmantošanas
/*
Piemērs
void test1 (int a, int b, int c);
void test2 ()

*/


int main ()
	{
	char c_main_local;
	c_main_local =10;

	c_main_local= dialogs();
	printf("ievadīts (izdruk. no main funkc.) %d\n",c_main_local);

	int i_main =1;
	

	return 0;


	}




char c_dialogs_local()
	{
	printf("cien liet lūdz ievd nat sk: \n");
	scanf("%hhd", &c_dialogs_local);
	printf("ievadīts (izdrk. no dialogs funkc.) %d\n",c_dialogs_local);
	return c_dialogs_local;
	}

char c_dialogs_local()
	{
	printf("cien liet lūdz ievd nat sk: \n");
	scanf("%hhd", &c_dialogs_local);
	printf("ievadīts (izdrk. no dialogs funkc.) %d\n",c_dialogs_local);
	return c_dialogs_local;
	}






