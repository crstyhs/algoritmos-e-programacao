#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,opcao,porcentagem,ciclo=0;
	float preco[100],preco_aumento[100];
	
	for(contador=0;contador<100;contador++){
	printf("digite o preço do CD %i: ",contador);
	scanf("%f",&preco[contador]);
	printf("digite 1 se deseja finalizar: ");
	scanf("%i",&opcao);
	ciclo++;
	if(opcao==1)contador=100;}
	printf("você possui 2 opções de aumento de preço a de 10 %% ou o aumento customizado\ndigite 1 para a primeira e 2 para a segunda opção: ");
	scanf("%i",&opcao);
	switch(opcao){ 
	case 1: porcentagem=10;
	for(contador=0;contador<ciclo;contador++){
		preco_aumento[contador]=preco[contador]*((1.0*porcentagem/100)+1);};break;
	case 2: printf("informe o qual a porcentagem de aumento: ");
		scanf("%i",&porcentagem);
	for(contador=0;contador<ciclo;contador++){
		preco_aumento[contador]=preco[contador]*((1.0*porcentagem/100)+1);};break;
	}
	printf("o aumento foi de %i %%\n",porcentagem);
	for(contador=0;contador<ciclo;contador++){
		printf("o preco do CD %i era %.2f e passou a ser %.2f\n",contador,preco[contador],preco_aumento[contador]);
	}
	system("pause");
	return 0;
}
