#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int opcao;
	do{
	system("pause");
	printf("Menu de Opções\n");
	printf("============\n");
	printf("1 – Norte\n");
	printf("2 – Nordeste\n");
	printf("3 – Centro-Oeste\n");
	printf("4 – Sudeste\n");
	printf("5 – Sul\n");
	printf("0 – Sair do programa\n");
	scanf("%i",&opcao);
	system("cls");
	switch(opcao){
		case 1: printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tfoi escolhido o Norte\n");break;
		case 2: printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tfoi escolhido o Nordeste\n");break;
		case 3: printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tfoi escolhido o Centro-Oeste\n");break;
		case 4: printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tfoi escolhido o Sudeste\n");break;
		case 5: printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tfoi escolhido o Sul\n");break;
		case 0:return 0;break;
	}}
	while(1!=0);
}
