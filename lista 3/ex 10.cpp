#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,numero;
	for(contador=1;contador<=100;contador++){
		printf("digite um numero: ");
		scanf("%i",&numero);
		if(numero<0){
		 printf("a quantidade lida de n�meros � %i",contador);
		 return 0;}
	}
	printf("a quantidade lida de n�meros � %i",contador);
	system("pause");
	return 0;
	
}
