#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
	int opcao,quantidade[3],quantidade_total[3];
	printf("informe a fruta desejada 1 para abacaxi 2 para ma�a e 3 para pera e 4 para ver a lista de compra");
	scanf("%i",&opcao);

	do{printf("informe a quantidade de abacaxis ser�o compradas: ");
	scanf("%i",&quantidade[0]);
	quantidade_total[0]=0;
	quantidade_total[0]=quantidade_total[0]+quantidade[0];
	printf("informe a fruta desejada 1 para abacaxi 2 para ma�a e 3 para pera e 4 para ver a lista de compra");
	scanf("%i",&opcao);
	} while(opcao==1);
	
		do{printf("informe a quantidade de ma�as ser�o compradas: ");
	scanf("%i",&quantidade[1]);
	quantidade_total[1]=0;
	quantidade_total[1]=quantidade_total[1]+quantidade[1];
	printf("informe a fruta desejada 1 para abacaxi 2 para ma�a e 3 para pera e 4 para ver a lista de compra");
	scanf("%i",&opcao);
	} while(opcao==2);
	
		do{printf("informe a quantidade de peras ser�o compradas: ");
	scanf("%i",&quantidade[2]);
		quantidade_total[2]=0;
	quantidade_total[2]=quantidade_total[2]+quantidade[2];
	printf("informe a fruta desejada 1 para abacaxi 2 para ma�a e 3 para pera e 4 para ver a lista de compra");
	scanf("%i",&opcao);
	} while(opcao==3);
	
	do{printf("a quantidade de abacaxi a ser comprada � %i\n",quantidade_total[0]);
	printf("a quantidade de ma�as a ser comprada � %i\n",quantidade_total[1]);
	printf("a quantidade de peras a ser comprada � %i\n",quantidade_total[2]);
	printf("informe a fruta desejada 1 para abacaxi 2 para ma�a e 3 para pera e 4 para ver a lista de compra");
	scanf("%i",&opcao);
	}
	while(opcao==4);
	
	do{printf("a fruta n�o est� disponivel");
	printf("informe a fruta desejada 1 para abacaxi 2 para ma�a e 3 para pera e 4 para ver a lista de compra");
	scanf("%i",&opcao);
	}
	while(opcao>4 or opcao<1);
	system("pause");
	return 0;
}
