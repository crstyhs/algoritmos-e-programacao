#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador=1,numero,resultado=1;
	printf("informe um n�mero para ser calculado o fatorial: ");
	scanf("%i",&numero);
	while(contador<=numero){
		resultado=contador*resultado;
		contador++;
	}
	printf("o resultado � %i",resultado);
	system("pause");
	return 0;
	
}
