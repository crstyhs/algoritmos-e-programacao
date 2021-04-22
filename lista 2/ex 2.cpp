#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero,modulo;
	printf("insira o número: ");
	scanf("%d",&numero);

	system("cls");
	if(numero<0) modulo=numero*-1;
	else modulo=numero;
	
	
	printf("o módulo é: %d\n",modulo);
	
	system("pause");
	return 0;
}
