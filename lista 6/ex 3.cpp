#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char sexo;
	int contador,F=0,M=0;
	float altura[10],maior_altura,menor_altura,altura_total=0,media;
	for(contador=0;contador<10;contador++){
		
		
		printf("informe o sexo da pessoa, F para feminino e M para masculino: ");
		setbuf(stdin,0);
		scanf("%i",&sexo);
		printf("informe a altura dessa pessoa: ");
		setbuf(stdin,0);
		scanf("%f",&altura[contador]);
		if(sexo=='F'){
		F++;
		altura_total=altura_total+altura[contador];}
		else if(sexo=='M') M++;}
		
	
	for(contador=0;contador<10;contador++){
		if(contador==0) {maior_altura=altura[0];
		menor_altura=altura[0];}
		else {
		if(altura[contador]>maior_altura)maior_altura=altura[contador];
		else if(altura[contador]<menor_altura)menor_altura=altura[contador];}
	}
	media=altura_total/F;
	
	printf(" a maior altura foi %f\na menor altura foi %f\na altura media feminina foi %f\no número de homens foi %i",maior_altura,menor_altura,media,M);
	system("pause");
	return 0;
}
