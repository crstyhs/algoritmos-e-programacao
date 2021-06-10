#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao,item[5]={0,0,0,0,0};
	do{
	
	printf("informe o item desejado:\n1-cadeira\n2-mesa de computador\n3-estante de livros\n4-mesa de impressora\n5-estante de CD\n6-finalizar\n");
	scanf("%i",&opcao);
	switch(opcao){
		case 1: item[0]++;break;
		case 2: item[1]++;break;
		case 3: item[2]++;break;
		case 4: item[3]++;break;
		case 5: item[4]++;break;
		case 6: printf("estão sendo solicitados:\n%i cadeiras\n%i mesas de computador\n%i estantes de livros\n%i mesas de impressora\n%i estantes de CD\n",item[0],item[1],item[2],item[3],item[4]);return 0;break;
		default: printf("item ainda não está disponível");
	}}
	while(1!=0);
	system("pause");
	return 0;
	
}
