#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int codigo[1000],contador=0,salario[1000],total_salario=0,pessoa=0,opcao,maior_salario,menor_salario;
	float media;
	do{
	printf("informe o c�digo funcional inteiro: ");
	setbuf(stdin,0);
	scanf("%i",&codigo[contador]);
	printf("informe o sal�rio: ");
	setbuf(stdin,0);
	scanf("%i",&salario[contador]);
	total_salario+=salario[contador];
	pessoa++;
	contador++;
	printf("digite 1 se todos os dados foram informados: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);}
	while(opcao!=1);
	
	do{
	
	printf("digite:\n1-menor sal�rio\n2-maior sal�rio\n3-m�dia: ");
	setbuf(stdin,0);
	scanf("%i",&opcao);
	switch(opcao){
	
	case 1: for(contador=0;contador<pessoa;contador++){
		if(contador==0)menor_salario=salario[contador];
		else if(menor_salario>salario[contador]) menor_salario=salario[contador];}
		printf("o menor sal�rio � %i reais\n",menor_salario);break;
		
	case 2: for(contador=0;contador<pessoa;contador++){
		if(contador==0)maior_salario=salario[contador];
		else if(maior_salario<salario[contador]) maior_salario=salario[contador];}
		printf("o maior sal�rio � %i reais\n",maior_salario);break;
		
	case 3: for(contador=0;contador<pessoa;contador++){
		total_salario=total_salario+salario[contador];
		}
		
		media=(total_salario)/pessoa;
		printf("a m�dia � %.2f reais\n",media);break;}}
		while(1!=0);
	system("pause");
	return 0;
}
