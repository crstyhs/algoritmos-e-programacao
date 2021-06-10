#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,numero[3],maior_numero;
	printf("digite 3 valores: ");
	scanf("%i%i%i",&numero[0],&numero[1],&numero[2]);
	for(contador=0;contador<3;contador++){
		if(contador==0) maior_numero=numero[contador];
		else if(maior_numero<numero[contador])maior_numero=numero[contador];
	}
	system("cls");
	printf("o maior valor é %i",maior_numero);
	system("pause");
	return 0;
}

