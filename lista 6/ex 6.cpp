#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int tamanho;
	char numero[]={};
	printf("digite um n�mero possitivo: ");
	gets(numero);
	tamanho=strlen(numero);
	printf("o n�mero possui %i algarismos",tamanho);
	system("pause");
	return 0;
	
}
