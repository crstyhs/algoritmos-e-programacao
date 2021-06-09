//Nome completo: Christian Hirsch Santos  Matrícula: UC21102411 Curso: Engenharia de software

#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<locale.h>
#include<string.h>
#include"conio.h"

int main(){

	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int contador_destino, contador_letras, contador_letras_destino, contador_fileira, contador_lado,contador_acesso, contador_disponivel, contador_reservado, contador_confirmado, contador_bebe, contador_nao_bebe;
	int numero_acentos, contador, opcao_programa, acento_desejado, acento_desejado_vetor , numero_identificador_informado, opcao_pos_reserva;
	int idade[numero_acentos], numero_identificador[numero_acentos];
	float valor_bruto, valor_desconto,valor_vendas;
	char destino[30], letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", status[numero_acentos];

	contador_letras_destino=0;
	contador_lado=0;
	contador_fileira=0;
	contador_acesso=1;
	contador_reservado=0;
	contador_confirmado=0;
	contador_bebe=0;
	contador_nao_bebe=0;
	
do{
	printf("Bem vindo ao sistema de compra de passagens aéreas da empresa SALUMAR LINHAS AEREAS\n");
	printf("Insira o destino desejado: ");
	fgets(destino,30,stdin);
	for(contador_destino=0;contador_destino<strlen(destino);contador_destino++){
		for(contador_letras=0;contador_letras<strlen(letras);contador_letras++){
			if (destino[contador_destino]==letras[contador_letras])
			contador_letras_destino++;}
	}
	if(contador_letras_destino==0)
	printf("O destino foi informado de forma incorreta, retornando ao inicio...\n");
	system("pause");
	system("cls");}
while(contador_letras_destino==0);

do{
	printf("Informe o número de acentos no avião com destino a %s: ",destino);
	setbuf(stdin,0);
	scanf("%i",&numero_acentos);
	contador_disponivel=numero_acentos;
	if(numero_acentos<90 or numero_acentos>200) printf("\nNúmero de acentos impossível\n");} 
while(numero_acentos<90 or numero_acentos>200);

do{
	printf("Digite o valor da passagem para o destino %s: ",destino);
	setbuf(stdin,0);
	scanf("%f",&valor_bruto);
	if(valor_bruto<0)printf("o valor da passagem foi informado de forma incorreta\n");}
while(valor_bruto<0);

do{
	printf("Escolha uma das opções abaixo:\n");
	printf("Digite 1 para acessar o mapa dos lugares\n");
	printf("Digite 2 para efetuar a reserva de uma passagem\n");
	printf("Digite 3 para cancelar ou confirmar uma reserva\n");
	printf("Digite 4 para verificar os status de venda\n");
	printf("Digite 5 para sair do programa\n");
	scanf("%i",&opcao_programa);
	

	switch(opcao_programa){
	
	case 1:
		system("cls");
	 	for(contador=0;contador<numero_acentos;contador++){
	 	
	 		switch(status[contador]) {
				case 'R': 
					textcolor(4);
					printf("R");break;
					
				case 'C': 
					textcolor(1);
					printf("C");break;
					
				default: 
				textcolor(2);
				printf("D");
			}
		printf("%i |__|  ",contador + 1);
		contador_fileira++;
		contador_lado++;

		if(contador_lado==3){
		printf("\t\t");contador_lado=0;} 
		if(contador_fileira==6){
		printf("\n\n");contador_fileira=0;}}
		textcolor(15);
		system("pause");break;
		
	case 2:
		printf("Informe o acento desejado: ");
		scanf("%i",&acento_desejado);
		acento_desejado_vetor=acento_desejado-1;
		
		if(acento_desejado<=numero_acentos and acento_desejado>0 and status[acento_desejado_vetor]!='R' and status[acento_desejado_vetor]!='C'){
		numero_identificador[acento_desejado_vetor]=contador_acesso;
		contador_acesso++;
		printf("Acento disponível, seu número identificador é %i\n\n",numero_identificador[acento_desejado_vetor]);
		status[acento_desejado_vetor]='R';
		contador_disponivel--;
		contador_reservado++;
		printf("Informe a idade do passageiro: ");
		scanf("%i",&idade[acento_desejado_vetor]);
		
		if(idade[acento_desejado_vetor]<=5 and idade[acento_desejado_vetor]>0){ 
		valor_desconto=valor_bruto*0.5; 
		printf("O valor a ser pago é %.2f reais\n\n",valor_desconto);
		contador_bebe++;}
		
		else{printf("O valor a ser pago é %.2f reais\n\n",valor_bruto);
		contador_nao_bebe++;}}
		else printf("Acento não disponível\n");break;
	
	case 3:
		printf("Qual foi o acento reservado?");
		scanf("%i",&acento_desejado);
		acento_desejado_vetor=acento_desejado-1;
		
		if(status[acento_desejado_vetor]=='C') 
		printf("Este acento ja teve sua compra confirmada\n");
		else if(status[acento_desejado_vetor]=='R'){
		printf("Digite o número identificador:");
		scanf("%i",&numero_identificador_informado);
	
		if(numero_identificador_informado=numero_identificador[acento_desejado_vetor]){
			
do{
		printf("Digite 1 para confirmar a reserva da passagem e 2 para cancelar a reserva\n");
		scanf("%i",&opcao_pos_reserva);
		
		switch(opcao_pos_reserva){
			
			case 1: 
				printf("Compra confirmada\n");status[acento_desejado_vetor]='C';
				contador_reservado--;
				contador_confirmado++;break;
				
			case 2:	
				printf("Reserva cancelada\n");status[acento_desejado_vetor]='D';
				contador_reservado--;
				contador_disponivel++;
			
				if(idade[acento_desejado_vetor]<=5) 
				contador_bebe--;
				else contador_nao_bebe--;break;
				
				default: 
					opcao_pos_reserva=3; }}
while(opcao_pos_reserva==3);
	
		}else printf("Número identificador incorreto ou inexistente");}
	
		else printf("A reserva deste acento ainda não foi efetuada");break;
		
	case 4:
		printf("O número de acentos disponiveis é %i\n",contador_disponivel);
		printf("O número de acentos reservados é %i\n",contador_reservado);
		printf("O número de acentos confirmados é %i\n",contador_confirmado);
		valor_vendas=(contador_bebe*valor_desconto)+(contador_nao_bebe*valor_bruto);
		printf("O valor total em reais com as vendas já confirmadas é %.2f\n",valor_vendas);break;

	case 5:	
		system ("pause");
		return 0;break;
		
	default: 
		printf("Opção não possível\n");}}
while(0!=1);
	
	printf("erro");
	system ("pause");
	return 0;}

	


	
	
