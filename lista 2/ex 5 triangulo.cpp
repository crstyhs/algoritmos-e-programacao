#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado1,lado2,lado3;
	
	printf("digite o comprimento dos lados: ");
	scanf("%f%f%f",&lado1,&lado2,&lado3);
	
	if(lado1<lado2+lado3 and lado2<lado1+lado3 and lado3<lado1+lado2) 
	printf("é um triângulo\n");
	
	else printf("não é um triângulo\n");
	
	system("pause");
	return 0;
}

