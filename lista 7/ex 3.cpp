#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero,soma=0,opcao,vezes=0;
	do{
	
	printf("digite um número: ");
	scanf("%i",&numero);
	soma+=numero;
	printf("digite 1 para continuar ou 2 para finaliza: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	vezes++;}
	while(opcao==1 and vezes!=100);
	printf("o resultado da soma é %i\n",soma);
	system("pause");
	return 0;
}
