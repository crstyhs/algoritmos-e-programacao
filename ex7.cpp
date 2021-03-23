#include<stdio.h>
#include<iostream>
#include<cstring>
int main(){
	char NOME[30],GENERO;
	int MATRICULA, HORAS_TRABALHADAS,VALOR_POR_HORA,SALARIO;
	
	
	printf("insira seu nome: ");
	gets(NOME);
	
	printf("insira seu genero(M para masculino e F para feminino): ");
	scanf("%c", &GENERO);
	
	printf("insira sua matricula: ");
	scanf("%d", &MATRICULA);
	
	printf("insiras o numero de horas trabalhadas: ");
	scanf("%d", &HORAS_TRABALHADAS);
	
	printf("insira o valor que recebe por hora: ");
	scanf("%d", &VALOR_POR_HORA);
	
	SALARIO=HORAS_TRABALHADAS*VALOR_POR_HORA;

	system("cls");
	printf("nome:%s\n", NOME);
	printf("genero:%c\n", GENERO);
	printf("matricula:%d\n", MATRICULA);
	printf("horas trabalhadas:%d\n", HORAS_TRABALHADAS);
	printf("valor por hora:%d\n", VALOR_POR_HORA);
	printf("salario:%d\n", SALARIO);
	
	system("pause");
	return 0;
}
