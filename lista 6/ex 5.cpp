#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int preco=15,ingresso=120,lucro;
	printf("preço\tvendidos\tlucro\n");
	for(preco=15;preco>=3;preco-=3){
	lucro=(preco*ingresso)-600;
	printf("%i\t%i\t\t%i\n",preco,ingresso,lucro);
	ingresso+=26;
	}
	system("pause");
	return 0;
}
