#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,pessoas=0;
	char opcao;
	float altura[50],total_altura=0,media,maior_altura,menor_altura;
	
	for(contador=0;contador<50;contador++){
	
	printf("Informe o sexo da pessoa F para feminino e M para masculino: ");
	setbuf(stdin,0);
	scanf("%c",&opcao);
	switch(opcao){case 'F': printf("Informe a altura: ");
	scanf("%f",&altura[contador]);
	total_altura=total_altura+altura[contador];
	pessoas++;break;
	case 'M': printf("Informe a altura: ");
	scanf("%f",&altura[contador]);}
}
	for(contador=0;contador<50;contador++){
		if(contador==0) {altura[contador]=maior_altura;
		altura[contador]=menor_altura;
		}
		else{ if(altura[contador]>maior_altura) altura[contador]=maior_altura;
		else if(altura[contador]<menor_altura)altura[contador]=menor_altura;
		}
	}
	media=total_altura/pessoas;
	printf("a menor altura � %.2f e a maior � %.2f",menor_altura,maior_altura);
	printf("a altura m�dia feminina � %.2f",media);
	system("pause");
	return 0;
}
