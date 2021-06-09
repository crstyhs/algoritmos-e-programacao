#include<stdio.h>

int main(){
	int numero[20]={1,1},contador;
	
	printf("1\n1\n");
	for(contador=2;contador<20;contador++){
	numero[contador]=numero[contador-1]+numero[contador-2];
	printf("%i\n",numero[contador]);}
}
