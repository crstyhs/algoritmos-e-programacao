#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nome[3][30],vencedor;
	int juizes,contador,contador2,nota,nota_total[3]={0,0,0},maior_nota;
	printf("informe o nome dos finalistas: ");
	setbuf(stdin,0);
	scanf("%s%s%s",&nome[0][30],&nome[1][30],&nome[2][30]);

	printf("informe o numero de juizes: ");
	setbuf(stdin,0);
	scanf("%i",&juizes);

	for(contador=0;contador<3;contador++){
		printf("sobre o finalista %s",nome[contador][30]);
		for(contador2=0;contador<juizes;contador2++){
			printf("informe a nota dada pelo juiz %i, nota entre 0 e 100: ",contador2 +1);
			do{scanf("%i",&nota);} while(nota<0 or nota>100);
			nota_total[contador]=nota_total[contador]+nota;}		
	}
	for(contador=0;contador<3;contador++){
		printf("o finalista %s finalizou com %i pontos\n",nome[contador][30],nota_total[contador]);
	}
system("pause");
return 0;
}
