#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;
	printf("insira sua idade: ");
	scanf("%i",&idade);
	if(idade>=61)
	printf("idoso\n");
	
	else if(idade>=41)
	printf("adulto 2\n");
	
	else if(idade>=18)
	printf("adulto\n");
	
	else if(idade>=11)
	printf("adolescente\n");
	
	else if(idade>=4)
	printf("criança\n");
	
	else if(idade>=0)
	printf("bebê\n");
	
	system("pause");
	return 0;
}
