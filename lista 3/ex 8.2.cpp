#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
	char nome[30];
	int preco,opcao=1;
	do{printf("informe o nome do produto: ");
	setbuf(stdin,0);
	fgets(nome,30,stdin);
	printf("informe o pre�o atual do produto: ");
	scanf("%i",&preco);
	preco=preco*1.1;
	printf("o pre�o atualizado do produto %s � %i reais\n",nome,preco);
	printf("digite 1 se existe mais produtos e qualquer outro n�mero caso n�o exista: ");
	scanf("%i",&opcao);}
	while(opcao==1);
	system("pause");
	return 0;
}
