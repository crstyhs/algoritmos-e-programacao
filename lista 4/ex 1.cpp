#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int dia, mes, ano;
	printf("informe o ano: ");
	scanf("%i",&ano);
	printf("informe o mês em números: ");
	scanf("%i",&mes);
	printf("informe o dia: ");
	scanf("%i",&dia);
	if(mes>12 or mes<1) printf("data inválida");
	else if(dia>31 or dia<1)printf("data inválida");
	else if(mes==4 or mes==6 or mes==9 or mes==11 and dia>30)printf("data inválida");
	else if(ano%4==0 and mes==2 and dia>29)printf("data inválida");
	else if(ano%4!=0 and mes==2 and dia>28)printf("data inválida");
	else printf("data válida");
	system("pause");
	return 0;
}
