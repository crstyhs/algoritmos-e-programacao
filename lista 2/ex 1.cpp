#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int velocidade;
	char PlacaDoCarro[7];
	
	printf("insira a velocidade detectada em km/h: ");
	scanf("%i",&velocidade);
	printf("digite a placa do carro: ");
	scanf("%s",&PlacaDoCarro);
	
	system("cls");
	printf("velocidade limite 80km/h\n");
	
	if(velocidade>80) printf("será multado,sua velocidade foi %ikm/h\n",velocidade);
	
	system("pause");
	return 0;
}
