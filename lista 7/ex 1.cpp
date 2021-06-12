#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float nota[30];
	int contador;
	for(contador=0;contador<30;contador++){
	
	printf("Digite a nota do aluno: ");
	scanf("%f",&nota[contador]);}
	system("pause");
	return 0;
}

