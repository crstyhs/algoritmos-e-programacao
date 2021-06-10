#include<stdio.h>
#include<iostream>
int main(){
	int menor_valor, maior_valor, contador;
	printf("digite o menor valor: ");
	scanf("%i",&menor_valor);
	printf("digite o maior valor: ");
	scanf("%i",&maior_valor);
	for(contador=menor_valor;contador<=maior_valor;contador++){
		if(contador==2) printf("%i\n",contador);
		else
		if(contador%2!=0 and contador%3!=0 and contador>1) printf("%i\n",contador);
	}
	system("pause");
	return 0;
}
