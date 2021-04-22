#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	int ano_atual,ano_nascimento,dias_vividos,diferenca;
	char nome[30];
	
	printf("digite seu nome: ");
	fgets(nome,30,stdin);
	printf("digite o ano atual e em seguida o ano de nascimento: ");
	scanf("%i%i",&ano_atual,&ano_nascimento);
	
	diferenca=ano_atual-ano_nascimento;
	dias_vividos=diferenca*365;
	
	system("cls");
	
	printf("%sviveu aproximadamente %i dias\n",nome,dias_vividos);
	
	system("pause");
	return 0;
}
