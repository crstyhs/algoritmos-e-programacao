#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador=-1,letra[1000],contador2,nome;
	do{
		contador++;
		printf("digite a letra %i: ",contador);
		fflush(stdin);
		scanf("%c",&letra[contador]);
		if(letra[contador]=='#'){
	contador-1;
	for(contador2=0;contador2<contador;contador2++){
		printf("%c",letra[contador2]);
	}
	printf("\n");
	system("pause");
	return 0;
		}

	}
	while(0!=1);
	
	system("pause");
	return 0;
}
