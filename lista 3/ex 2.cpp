#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero,repeticao,resultado;
	printf("Informe o primeiro valor: ");
	scanf("%i",&numero);
	resultado=numero;
	printf("Informe o segundo valor: ");
	scanf("%i",&repeticao);
	if(repeticao==0) resultado=0;
	for(;repeticao>1;repeticao--){
		resultado=resultado + numero;}
		printf("O resultado da multiplicação é: %i",resultado);
		system("pause");
	return 0;
}
