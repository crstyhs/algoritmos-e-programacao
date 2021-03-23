#include<stdio.h>
#include<iostream>
int main(){
	int A,B,C,MEDIA;
	printf("insira o primeiro valor: ");
	scanf("%d", &A);
	printf("insira o segundo valor: ");
	scanf("%d", &B);
	printf("insira o terceiro valor ");
	scanf("%d", &C);
	MEDIA=(A+B+C)/3;
	printf("a media e: %d\n", MEDIA);
	system("pause");
	return 0;
}
