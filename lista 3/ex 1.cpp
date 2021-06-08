#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int valor,resultado=1;
	printf("insira o valor para calcular a fatorial: ");
	scanf("%i",&valor);
	
	for(valor;valor>=1;valor--){
		resultado=resultado*valor;}
	printf("o resultado da fatorial é: %i",resultado);

	return 0;
}
