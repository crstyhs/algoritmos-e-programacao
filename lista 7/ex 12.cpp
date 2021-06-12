#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,contador2,matricula[50],recente1,recente2,recente3,meses[50];
	for(contador=0;contador<50;contador++){
		printf("digite a matrícula funcional do empregado: ");
		scanf("%i",&matricula[contador]);
		if(matricula[contador]==0){
			for(contador2=0;contador2<contador;contador2++){ if(contador2==0) recente1=meses[contador2];
			else if(recente1<meses[contador2]) recente1=meses[contador2];}
			
			for(contador2=0;contador2<contador;contador2++) if(recente1=meses[contador2]){
			meses[contador2]=999;
			recente1=matricula[contador2];}
			
			for(contador2=0;contador2<contador;contador2++){
			if(contador2==0) recente2=meses[contador2];
			else if(recente2<meses[contador2]) recente2=meses[contador2];}
			
			for(contador2=0;contador2<contador;contador2++) if(recente2=meses[contador2]){
			meses[contador2]=999;
			recente2=matricula[contador2];}
			
			for(contador2=0;contador2<contador;contador2++){
			if(contador2==0) recente3=meses[contador2];
			else if(recente3<meses[contador2]) recente3=meses[contador2];}
			
		printf("a matrícula funcional dos funcionarios mais recentes são %i\\%i\\%i",recente1,recente2,recente3);
			system("pause");
			return 0;
		}
		printf("digite o número de meses de trabalho deste empregado: ");
		scanf("%i",&meses[contador]);	
	}
			system("pause");
			return 0;
}
