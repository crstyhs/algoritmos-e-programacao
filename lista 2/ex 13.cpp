#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int DDD;
	
	printf("informe o DDD: ");//33
	scanf("%i",&DDD);
	switch(DDD){
	
	case 61: printf("pertence a cidade :Bras�lia\n");break;//falso 33!=61
	case 71: printf("pertence a cidade :Salvador\n");break;//falso 33!=71
	case 11: printf("pertence a cidade :S�o Paulo\n");break;//falso 33!=11
	case 21: printf("pertence a cidade : Rio de Janeiro\n");break;//falso 33!=21
	case 32: printf("pertence a cidade : Juiz de Fora\n");break;//falso 33!=32
	case 19: printf("pertence a cidade : Campinas\n");break;//falso 33!=19
	case 27: printf("pertence a cidade : Vit�ria\n");break;//falso 33!=27
	case 31: printf("pertence a cidade : Belo Horizonte\n");break;//falso 33!=31
	default: printf("pertence a cidade : uma cidade no Brasil sem identifica��o\n");}//verdadeiro
	
	system("pause");
	return 0;
}
