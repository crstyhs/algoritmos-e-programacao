#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int numero,valor_total=0, numero_total=0;
	float media;
	do{
	
	printf("informe o número para ser adicionado a média: ");
	scanf("%i",&numero);
	if(numero%2==0 and numero!=0){
	 valor_total=valor_total+numero;
	 numero_total++;}
	 else if(numero==0){ media=valor_total/numero_total;
	 printf("a média é %.2f",media);
	 return 0;}}
	 while(1!=0);
}
