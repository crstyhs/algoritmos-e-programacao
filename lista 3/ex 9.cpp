#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char sexo;
	int contador,cor_olhos,cor_cabelos,idade,maior_idade,total_pessoas=0,selecionados=0,porcentagem;
	for(contador=0;contador>=0;contador++){

	printf("informe o sexo do habitante, M para masculino e F para feminino: ");
	setbuf(stdin,0);
	scanf("%c",&sexo);
	printf("informe a cor dos olhos, 1 para azuis, 2 para verdes, 3 castranhos e 4 pretos: ");
	scanf("%i",&cor_olhos);
	printf("informe a cor dos cabelos, 1 para loiros, 2 para castanhos e 3 para pretos: ");
	scanf("%i",&cor_cabelos);
	printf("informe a idade do habitante: ");
	scanf("%i",&idade);
	total_pessoas++;
	if(idade==-1){ printf("a maior idade é %i",maior_idade);
	porcentagem=(selecionados/total_pessoas)*100;
	printf("a porcentagem de selecionados é %i em porcentagem ",porcentagem);
	}
	else{
	
	if(sexo=='F'and cor_olhos==2 and cor_cabelos==1 and idade>=18 and idade<=35)
	selecionados++;
	if(contador==0)maior_idade=idade;
	else if(idade>maior_idade)
	maior_idade=idade;}
	}

}
