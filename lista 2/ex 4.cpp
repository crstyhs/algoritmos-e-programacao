#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	int sexo;
	
	printf("digite seu nome: ");
	fgets(nome,30,stdin);
	
	printf("informe seu sexo, digite 1 para masculino e 2 para feminino: ");
	scanf("%i",&sexo);
	
	switch(sexo){
		case 1: printf("Ilmo Sr.%s\n",nome);break;
		case 2: printf("Ilma Sra.%s\n",nome);break;
		default: printf("valor não possivel\n");
	}
	
	system("pause");
	return 0;
}
