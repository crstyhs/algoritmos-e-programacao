#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
	int N, divisao=1; 
	float H=1;
	printf("informe o valor de N: ");
	scanf("%i",&N);

	while(divisao<=N){	
	H= H/divisao;
	divisao++;}
	
	printf("o valor de H � %f",H);
	system("pause");
	return 0;
}
