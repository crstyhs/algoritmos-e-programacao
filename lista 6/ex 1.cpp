#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,numero;
	printf("informe um número: ");
	scanf("%i",&numero);
	if(numero>2000) printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t%i o limite de cálculo foi excedido",numero);
	else{for(contador=numero;contador<=2000;contador++){
		if(contador%2==0)printf("%i\n",contador);
	}}
	
	system("pause");
	return 0;
}
