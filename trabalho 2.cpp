//Nome completo: Christian Hirsch Santos  Matrícula: UC21102411 Curso: Engenharia de software

#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<locale.h>
#include <string.h>

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	char destino[30], letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int contador_destino, contador_letras, contador_letras_destino=0,contador_fileira,contador_lado;
	int numero_acentos, idade, contador, opcao, acento_desejado,status[numero_acentos],numero_identificador;
	float valor_bruto, valor_desconto;
	char acentos[numero_acentos];
	contador_lado=0;
	contador_fileira=0;
	status[numero_acentos]=0;
	numero_identificador=1;
	
do{
	printf("Bem vindo ao sistema de compra de passagens aéreas da empresa SALUMAR LINHAS AEREAS\n");
	printf("Insira o destino desejado: ");
	fgets(destino,30,stdin);
	for(contador_destino=0;contador_destino<strlen(destino);contador_destino++){
		for(contador_letras=0;contador_letras<strlen(letras);contador_letras++){
			if (destino[contador_destino]==letras[contador_letras])
			contador_letras_destino++;}
	}
	if(contador_letras_destino == 0) printf("O destino foi informado de forma incorreta, retornando ao inicio...\n");
	system("pause");
	system("cls");}

while(contador_letras_destino == 0);
do{
	printf("Informe o número de acentos no avião com destino a %s: ",destino);
	scanf("%i",&numero_acentos);
	if(numero_acentos<90 or numero_acentos>200) printf("\nNúmero de acentos impossível\n");} 

while(numero_acentos<90 or numero_acentos>200);
	
	printf("Digite o valor da passagem para o destino %s: ",destino);
	scanf("%fl",&valor_bruto);
do{

	printf("Escolha uma das opções abaixo:\n");
	printf("Digite 1 para acessar o mapa dos lugares\n");
	printf("Digite 2 para efetuar a reserva de uma passagem\n");
	printf("Digite 3 para para cancelar ou confirmar uma reserva\n");
	scanf("%i",&opcao);
	switch(opcao){
	
	case 1:
	 	for(contador=0;contador<numero_acentos;contador++){
		printf("%i |__|  ",contador + 1);
		contador_fileira++;
		contador_lado++;

		if(contador_lado==3) {
		printf("\t");contador_lado=0;} 
		if(contador_fileira==6){ printf("\n\n");contador_fileira=0;}}
		;break;
	case 2:
		printf("Informe a idade do passageiro: ");
		scanf("%i",&idade);
		if(idade<=5) valor_desconto=valor_bruto*0.5;
		printf("Informe o acento desejado: ");
		scanf("%i",acento_desejado);
		if(acento_desejado<=numero_acentos and acento_desejado<0 and status[acento_desejado]==0){
		printf("Acento disponível, reserva concluida, seu número identificador é %i",numero_identificador);
		numero_identificador++;
		status[acento_desejado]++;
		}
		else printf("Acento não disponível");break;
	
	
	case 3:;break;
	default: printf("Opção não possível");}}
while(opcao!=1 or opcao!=2 or opcao!=3);
	

	

	
	system ("pause");
	return 0;
}
/*	for(contador=0;contador<numero_acentos;contador++){
		printf("%i%s |__|",acentos[contador],status[contador]);
		contador_lado++;
		contador_fileira++;
		if(contador_fileira=6){printf("\n");contador_fileira = contador_fileira - 6;}
		else
		if(contador_lado=3){printf("\t");contador_lado = contador_lado - 3;}*/
	


	
	
