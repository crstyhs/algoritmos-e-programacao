#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int porcentagem;
	float nao_porcentagem,resultado;
	printf("informe a porcetagem desejada de 555: ");
	scanf("%i",&porcentagem);
	nao_porcentagem = porcentagem * 0.01;
	resultado=555*nao_porcentagem;
	printf("o resultado é %.2f",resultado);
}
