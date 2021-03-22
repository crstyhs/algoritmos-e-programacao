#include<stdio.h>
#include<iostream>
int main(){
	int TOTAL, ROLOS, AVULSO;
	printf("insira o total de fio em metros: ");
	scanf("%d", &TOTAL);
	ROLOS= TOTAL/50;
	AVULSO= TOTAL%50;
	printf("o total de rolos e:%d\n", ROLOS);
	printf("o total de fio avulso em metros e:%d\n", AVULSO);
	system("pause");
	return 0;
}
