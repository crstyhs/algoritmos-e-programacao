#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float altura[10];
	int valor=0,vetor1=1,vetor2=0;
	printf("Digete as alturas: ");
	scanf("%f",&altura[0]);
	scanf("%f",&altura[1]);
	scanf("%f",&altura[2]);
	scanf("%f",&altura[3]);
	scanf("%f",&altura[4]);
	scanf("%f",&altura[5]);
	scanf("%f",&altura[6]);
	scanf("%f",&altura[7]);
	scanf("%f",&altura[8]);
	scanf("%f",&altura[9]);
	while(vetor1!=10){
	vetor1=1;
	valor=0;
	while(valor>=0 and vetor1!=10) {
	valor=altura[vetor1]-altura[vetor2];
	vetor1++;}vetor2++;}
	vetor2--;
	printf("A menor altura é %f",altura[vetor2]);
	return 0;}
