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
		if(letra[contador]=='A') printf("posi��o 1\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='B') printf("posi��o 2\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='C') printf("posi��o 3\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='D') printf("posi��o 4\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='E') printf("posi��o 5\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='F') printf("posi��o 6\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='G') printf("posi��o 7\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='H') printf("posi��o 8\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='I') printf("posi��o 9\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='J') printf("posi��o 10\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='K') printf("posi��o 11\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='L') printf("posi��o 12\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='M') printf("posi��o 13\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='N') printf("posi��o 14\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='O') printf("posi��o 15\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='P') printf("posi��o 16\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Q') printf("posi��o 17\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='R') printf("posi��o 18\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='S') printf("posi��o 19\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='T') printf("posi��o 20\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='U') printf("posi��o 21\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='V') printf("posi��o 22\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='W') printf("posi��o 23\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='X') printf("posi��o 24\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Y') printf("posi��o 25\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Z') printf("posi��o 26\n");}
		
		system("pause");
		return 0;
}
