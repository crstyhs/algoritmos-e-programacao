#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<iostream>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int tamanho;
	char numero[]={};
	printf("digite um número possitivo: ");
	gets(numero);
	tamanho=strlen(numero);
	printf("o número possui %i algarismos",tamanho);
	system("pause");
	return 0;
	
}
