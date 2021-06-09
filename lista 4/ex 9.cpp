#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	srand(time(NULL));
	int numero_imaginado,sorteio,valores_possiveis_baixo=100,valores_possiveis_alto=0,tentativas=0;
	printf("digite o numero imaginado de 0 a 100: ");
	scanf("%i",&numero_imaginado);
	do{	sorteio=(rand()%valores_possiveis_baixo)+valores_possiveis_alto;
	tentativas++;
	if(sorteio>numero_imaginado)valores_possiveis_baixo=sorteio;
	else if(sorteio<numero_imaginado)valores_possiveis_alto=sorteio;}
	while(sorteio!=numero_imaginado);
	printf("o número de tentativas foi %i",tentativas);
}
