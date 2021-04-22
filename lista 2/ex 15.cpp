#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");

	int horas, custo;
	
	printf("informe a quantidade de horas que você utilizou a Internet: ");
	scanf("%i",&horas);

	if(horas<=20)
	custo=30;
	
	else custo=30+(3*(horas-20));
	printf("o valor a ser pago é:%ireais\n",custo);
	
	system("pause");
	return 0;
	}
