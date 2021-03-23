#include<stdio.h>
#include<iostream>
int main(){
	int A,B,RESTO,QUOCIENTE;
	printf("insira o dividendo: ");
	scanf("%d", &A);
	printf("insira o divisor: ");
	scanf("%d", &B);
	QUOCIENTE=A/B;
	RESTO=A%B;
	printf("o quociente e: %d\n", QUOCIENTE);
	printf("o resto e: %d\n", RESTO);
	system("pause");
	return 0;
}
