#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valor,resultado=1;
	printf("insira o valor para calcular a fatorial: ");
	scanf("%i",&valor);
	if(valor==0)valor=1;
	do{	resultado=resultado*valor;
	valor--;}
	while(valor>=1);
	printf("o resultado da fatorial é: %i",resultado);
	return 0;
}
