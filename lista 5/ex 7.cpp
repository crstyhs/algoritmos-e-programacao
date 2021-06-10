#include<stdio.h>
#include<iostream>
int main(){
	int valor[3],menor,meio,maior;
	printf("digite 3 valores: ");
	scanf("%i",&valor[0]);
	scanf("%i",&valor[1]);
	scanf("%i",&valor[2]);
	
	if(valor[2]>valor[1] and valor[2]>valor[0]){
	maior=valor[2];
	if(valor[1]>valor[0]) {
	meio=valor[1];menor=valor[0];}
	else{ meio=valor[0];menor=valor[1];} }
	
	else if(valor[1]>valor[2] and valor[1]>valor[0]){
	maior=valor[1];
	if(valor[2]>valor[0]) {
	meio=valor[2];menor=valor[0];}
	else{ meio=valor[0];menor=valor[2];} }
	
	else if(valor[0]>valor[1] and valor[0]>valor[2]){
	maior=valor[0];
	if(valor[2]>valor[1]) {
	meio=valor[2];menor=valor[1];}
	else{ meio=valor[1];menor=valor[2];} }
		
	
	system("cls");
	printf("%i\n",menor);
	printf("%i\n",meio);
	printf("%i",maior);
}
