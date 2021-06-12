#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int ciclo=0,contador,letra[30],opcao;
	for(contador=0;contador<30;contador++){
	printf("digite uma letra: ");
	setbuf(stdin,0);
	scanf("%c",&letra[contador]);
	printf("digite 1 se deseja finalizar: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	ciclo++;
	if(opcao==1)contador=30;}
	
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='A') printf("A\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='B') printf("B\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='C') printf("C\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='D') printf("D\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='E') printf("E\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='F') printf("F\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='G') printf("G\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='H') printf("H\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='I') printf("I\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='J') printf("J\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='K') printf("K\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='L') printf("L\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='M') printf("M\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='N') printf("N\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='O') printf("O\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='P') printf("P\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Q') printf("Q\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='R') printf("R\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='S') printf("S\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='T') printf("T\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='U') printf("U\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='V') printf("V\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='W') printf("W\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='X') printf("X\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Y') printf("Y\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Z') printf("Z\n");}
		
		system("pause");
		return 0;
}
