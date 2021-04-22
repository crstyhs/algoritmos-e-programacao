#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float lado1,lado2,lado3;
	
	printf("digite o comprimento dos lados: ");//10 10 12
	scanf("%f%f%f",&lado1,&lado2,&lado3);
	
	if(lado1<lado2+lado3 and lado2<lado1+lado3 and lado3<lado1+lado2) {
	//10<10+12 e 10<10+12 e 12<10+10 (verdadeiro)
	
	if(lado1==lado2 and lado2==lado3)//10=10(verdadeiro) e 10=12(falso)
	printf("é um triângulo equilátero\n");//resultado falso
	else if (lado1!=lado2 and lado2!=lado3)//10!=10(falso) e 10!=12(verdadeiro)
	printf("é um triângulo escaleno\n");//resultado falso
	else //resultado verdadeiro
	printf("é um triângulo isóceles\n");
	}
	
	else printf("não é um triângulo\n");
	
	system("pause");
	return 0;
}
