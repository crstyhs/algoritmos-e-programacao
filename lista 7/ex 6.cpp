#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int contador,contador2,vez=-1,matricula[100],repeticao,opcao,salario[100],maior_salario,menor_salario,ciclo=0;
	for(contador=0;contador<100;contador++){
	if(contador>0)vez++;
	do{
	repeticao=0;
	printf("digite a matricula do funcion�rio: ");
	scanf("%i",&matricula[contador]);
	if(contador>0){
	for(contador2=vez;contador2>=0;contador2--){
		if(matricula[contador]==matricula[contador2]){
			printf("matricula repetida n�o � permitida\n");
			repeticao=1;}}}
	}while(repeticao==1);
	printf("informe o sal�rio do funcion�rio: ");
	scanf("%i",&salario[contador]);
	printf("digite 1 se deseja finalizar: ");
	scanf("%i",&opcao);
	ciclo++;
	if(opcao==1)contador=100;
}
	for(contador=0;contador<ciclo;contador++){
		printf("matrucula:%i\nsal�rio:%i\n\n",matricula[contador],salario[contador]);
	
	}
	for(contador=0;contador<ciclo;contador++){
		if(contador==0){
		menor_salario=salario[contador];
		maior_salario=salario[contador];}
		else{
		if(salario[contador]>maior_salario)maior_salario=salario[contador];
		else if(salario[contador]<menor_salario)menor_salario=salario[contador];}
			}
	printf("o maior sal�rio � %i reais e o menor � %i",maior_salario,menor_salario);
	system("pause");
	return 0;
}
