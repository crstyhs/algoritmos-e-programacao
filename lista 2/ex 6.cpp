#include<stdio.h>
#include<iostream>
#include<locale.h>
int main (){
	setlocale(LC_ALL, "Portuguese");
	int valor;
	
	printf("digite um valor: ");
	scanf("%i",&valor);
	if(valor%2==0) printf("o valor é par\n");
	else printf("o valor é impar\n");
	
	system("pause");
	return 0;
}
