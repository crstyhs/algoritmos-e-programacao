#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,idade[100],opcao,ciclo=0,total_idade,mais_velha;
	float media;
	for(contador=0;contador<100;contador++){
	printf("informe uma idade: ");
	scanf("%i",&idade[contador]);
	printf("digite 1 se deseja finalizar: ");
	scanf("%i",&opcao);
	ciclo++;
	if(opcao==1)contador=101;}
	
	for(contador=0;contador<ciclo;contador++){
		total_idade+=idade[contador];
		media=1.0f*(total_idade/ciclo);
		if(contador==0)mais_velha=idade[contador] ;
		else{
		 if(mais_velha<idade[contador] )mais_velha=idade[contador];
		}
	}
	printf("a média é: %.2f\n",media);
	for(contador=0;contador<ciclo;contador++){
		if(mais_velha==idade[contador]) printf("localização da idade mais velha: %i\n",contador);
	}
	system("pause");
	return 0;
}
