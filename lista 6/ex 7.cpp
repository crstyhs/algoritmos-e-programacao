#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int voto,confirmacao,confirmacao2,branco=0,pele=0,maradona=0,nulo=0;
	do{
	
	do{
	printf("informe seu voto:\n0-branco\n25-Pel�\n33-Maradona\nqualquer outro n�mero-nulo: ");
	scanf("%i",&voto);
	switch(voto){
		case 0:
		printf("digite 1 se deseja cancelar seu voto e qualquer outro n�mero para confirmar: ");
		scanf("%i",&confirmacao);
		if(confirmacao!=1)branco++;break;
		case 25:
		printf("digite 1 se deseja cancelar seu voto e qualquer outro n�mero para confirmar: ");
		scanf("%i",&confirmacao);
		if(confirmacao!=1)pele++;;break;
		case 33:
		printf("digite 1 se deseja cancelar seu voto e qualquer outro n�mero para confirmar: ");
		scanf("%i",&confirmacao);
		if(confirmacao!=1)maradona++;break;
		
		default: 
		printf("digite 1 se deseja cancelar seu voto e qualquer outro n�mero para confirmar: ");
		scanf("%i",&confirmacao);
		if(confirmacao!=1)nulo++;break;
	}}while(confirmacao==1);
	printf("se deseja ver a tabela de votos digite 1 e qualquer outro n�mero para voltar para a vota��o: ");
	scanf("%i",&confirmacao2);}
	while(confirmacao2!=1);
	printf("Quantidade de votos de Pel�: %i\n",pele);
	printf("Quantidade de votos de Maradona: %i\n",maradona);
	printf("Quantidade de votos nulos: %i\n",nulo);
	printf("Quantidade de votos brancos: %i\n",branco);
	if(pele>maradona) printf("Pel� � o vencedor\n");
	else if(pele=maradona) printf("houve um empate\n");
	else printf("Maradona � o vencedor\n");
	
	system("pause");
	return 0;
	
}

