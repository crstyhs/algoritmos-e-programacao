#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador=0;
	char letra[30];
	for(contador=0;contador<30;contador++){
	printf("digite uma letra: ");
	setbuf(stdin,0);
	scanf("%c",&letra[contador]);}
	
	for(contador=29;contador>=0;contador--){
	printf("%c\n",letra[contador]);}
	system("pause");
	return 0;
}
