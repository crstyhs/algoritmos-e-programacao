#include<stdio.h>
#include<iostream>
int main(){
	int HORAS, MINUTOS, SEGUNDOS;
	printf("insira as horas: ");
	scanf("%d", &HORAS);
	MINUTOS=HORAS*60;
	SEGUNDOS=MINUTOS*60;
	printf("o correspondente em minutos e:%d\n", MINUTOS);
	printf("o correspondente em segundos e:%d\n", SEGUNDOS);
	system("pause");
	return 0;
}

