#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float valor1, valor2, diferenca;

	printf("digite os 2 valores: ");
	scanf("%f%f",&valor1,&valor2);
	
	
	if(valor1>valor2)
	diferenca=valor1-valor2;
	else
	diferenca=valor2-valor1;
	
	printf("a diferença é:%.2f\n",diferenca);
	
	system("pause");
	return 0;
}
