#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[30];
	int sexo;
	float altura,peso;
	
	printf("digite seu nome: ");
	fgets(nome,30,stdin);
	
	printf("informe sua altura: ");
	scanf("%f",&altura);
	
	printf("informe seu sexo, digite 1 para masculino e 2 para feminino: ");
	scanf("%i",&sexo);
	
	switch(sexo){
		case 1: peso = (72.5 * altura) - 58; //calculo do peso ideal para masculino
		printf("Ilmo Sr.%sseu peso ideal é:%.2f\n",nome,peso);break;//apresenta o peso junto com o nome da pessoa
		
		case 2: peso = (62.1 * altura) - 44.7; //calculo do peso para feminino
		printf("Ilma Sra.%sseu peso ideal é:%.2f\n",nome,peso);break;//apresenta o peso junto com o nome da pessoa
		
		default: printf("valor não possivel\n");
	}
	
	system("pause");
	return 0;
}
