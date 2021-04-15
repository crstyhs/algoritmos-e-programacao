//Escreva um algoritmo que receba o nome do aluno e repita, por 5000vezes, a frase:
// Eu, fulano, vou passar em algoritmo com média 10!

#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	char nome[30];
	printf("insira seu nome: ");
	fgets(nome,30,stdin);
	for(i=1;i<=5000;i++){printf("Eu,%svou passar em algoritmo com média 10!\n",nome);
	}
	system("pause");
	return 0;
}
