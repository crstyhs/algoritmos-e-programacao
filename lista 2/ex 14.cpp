#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int valor1, valor2, valor3;
	printf("forne�a os 3 valores: ");
	scanf("%i%i%i",&valor1,&valor2,&valor3);
	
	if(valor1>valor2 and valor1>valor3)
	printf("o maior valor � %i\n",valor1);
	
	else if(valor2>valor1 and valor2>valor3)
	printf("o maior valor � %i\n",valor2);
	
	else 
	printf("o maior valor � %i\n",valor3);
	
	system("pause");
	return 0;
	}
