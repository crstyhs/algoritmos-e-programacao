#include<stdio.h>
#include<iostream>
int main(){
	
	int valor,parte_resultado,resultado;
	printf("insira o valor para calcular a fatorial: ");
	scanf("%i",&valor);
	resultado=valor;
	
	for(valor;valor=2;valor--){
		parte_resultado=valor-1;
		resultado=parte_resultado*resultado;
	}
	printf("o resultado da fatorial é: %i",resultado);
	system("pause");
	return 0;
}
