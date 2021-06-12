#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int informado,nota[11]={0,0,0,0,0,0,0,0,0,0,0},ciclo=0,opcao,contador;
	for(contador=0;contador<80;contador++){
	
	printf("digite uma nota: ");
	scanf("%i",&informado);
	switch(informado){
		case 0: nota[0]++;break;
		case 1: nota[1]++;break;
		case 2: nota[2]++;break;
		case 3: nota[3]++;break;
		case 4: nota[4]++;break;
		case 5: nota[5]++;break;
		case 6: nota[6]++;break;
		case 7: nota[7]++;break;
		case 8: nota[8]++;break;
		case 9: nota[9]++;break;
		case 10: nota[10]++;break;
		default: printf("valor inválido");
	}
	ciclo++;
	printf("digite 1 se deseja finalizar: ");
	scanf("%i",&opcao);
	if(opcao==1)contador=81;
}
	for(contador=0;contador<11;contador++){
	
	printf("a frequência da nota %i contador é %i\n",contador,nota[contador]);}
	system("pause");
	return 0;
}
