#include<stdio.h>
#include<locale.h>
#include<iostream>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int A[10],B[10],C[10][10],contador,contador2;
	for(contador=0;contador<10;contador++){
		printf("digite um valor para A: ");
		scanf("%i",&A[contador]);}
		
	for(contador=0;contador<10;contador++){
		printf("digite um valor para B: ");
		scanf("%i",&B[contador]);}
		
		for(contador=0;contador<10;contador++){
			for(contador2=0;contador2<10;contador2++){
			C[contador][contador2]=A[contador]+B[contador2];
			printf("%i + %i = %i\n"),A[contador],B[contador2],C[contador][contador2];}
		
		}
		
		
		
		system("pause");
		return 0;

}
