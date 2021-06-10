#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char opcao;
	int quantidade_total=0,quantidade_tinto=0,quantidade_branco=0,quantidade_rose=0,quantidade;
	float porcentagem[3];

do{
	printf("informe o tipo de vinho a ser adicionado ao estoque,sendo: ‘T’ para tinto, ‘B’ para branco e ‘R’ para rosê: ");
	setbuf(stdin,0);
	scanf("%c",&opcao);
	switch(opcao) {
	case 'T': printf("qual é a quantidade a ser adicionada: ");
	scanf("%i",&quantidade);
	quantidade_total=quantidade_total+quantidade;
	quantidade_tinto=quantidade_tinto+quantidade;break;
	
	case 'B': printf("qual é a quantidade a ser adicionada: ");
	scanf("%i",&quantidade);
	quantidade_total=quantidade_total+quantidade;
	quantidade_branco=quantidade_branco+quantidade;break;
	
	case 'R': printf("qual é a quantidade a ser adicionada: ");
	scanf("%i",&quantidade);
	quantidade_total=quantidade_total+quantidade;
	quantidade_rose=quantidade_rose+quantidade;break;}}
	while(opcao!='F');
	porcentagem[0]=(quantidade_tinto/quantidade_total)*100;
	porcentagem[1]=(quantidade_branco/quantidade_total)*100;
	porcentagem[2]=(quantidade_rose/quantidade_total)*100;
	printf("A porcentagem de vinho tinto é %f\n",porcentagem[0]);
	printf("A porcentagem de vinho branco é %f\n",porcentagem[1]);
	printf("A porcentagem de vinho rose é %f\n",porcentagem[2]);
	system("pause");
	return 0;
}
