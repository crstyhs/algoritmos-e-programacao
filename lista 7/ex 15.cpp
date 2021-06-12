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
		if(letra[contador]=='A') printf("posição 1\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='B') printf("posição 2\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='C') printf("posição 3\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='D') printf("posição 4\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='E') printf("posição 5\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='F') printf("posição 6\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='G') printf("posição 7\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='H') printf("posição 8\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='I') printf("posição 9\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='J') printf("posição 10\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='K') printf("posição 11\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='L') printf("posição 12\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='M') printf("posição 13\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='N') printf("posição 14\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='O') printf("posição 15\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='P') printf("posição 16\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Q') printf("posição 17\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='R') printf("posição 18\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='S') printf("posição 19\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='T') printf("posição 20\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='U') printf("posição 21\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='V') printf("posição 22\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='W') printf("posição 23\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='X') printf("posição 24\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Y') printf("posição 25\n");}
		
	for(contador=0;contador<ciclo;contador++){
		if(letra[contador]=='Z') printf("posição 26\n");}
		
		system("pause");
		return 0;
}
