#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float altura[10];
	int valor=0,vetor1=1,vetor2=0;
	printf("Digete as alturas: ");
	scanf("%fl",&altura[0]);
	scanf("%fl",&altura[1]);
	scanf("%fl",&altura[2]);
	scanf("%fl",&altura[3]);
	scanf("%fl",&altura[4]);
	scanf("%fl",&altura[5]);
	scanf("%fl",&altura[6]);
	scanf("%fl",&altura[7]);
	scanf("%fl",&altura[8]);
	scanf("%fl",&altura[9]);
	while(vetor1!=10){
	vetor1=1;
	valor=0;
	while(valor>=0 and vetor1!=10) {
	valor=altura[vetor1]-altura[vetor2];
	vetor1++;}vetor2++;}
	vetor2--;
	printf("A menor altura é %fl",altura[vetor2]);
	return 0;}
