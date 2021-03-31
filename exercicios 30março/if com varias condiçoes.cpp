//https://www.urionlinejudge.com.br/judge/pt/problems/view/1035
//link do exercicio
#include<stdio.h>
#include<iostream>
int main(){
	int A,B,C,D;
	printf("digite os 4 valores: ");
	scanf("%i%i%i%i",&A,&B,&C,&D);
	if (B>C and D>A and C+D>A+B and C>0 and D>0 and A%2==0)
	printf("Valores aceitos\n");
	else
	printf("Valores nao aceitos\n");
	system("pause");
	return 0;
}
