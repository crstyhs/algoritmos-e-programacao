//Nome completo: Christian Hirsch Santos  Matrícula: UC21102411 Curso: Engenharia de software

#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<locale.h>
#include <string.h>

int main(){
	
	
	setlocale(LC_ALL, "Portuguese");
	char destino[30], letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int contador_destino, contador_letras, contador_letras_destino=0,contador_fileira,contador_lado,contador_acesso;
	int numero_acentos, idade, contador, opcao_programa, acento_desejado, acento_desejado_vetor ,numero_identificador[numero_acentos],numero_identificador_informado,opcao_pos_reserva;
	float valor_bruto, valor_desconto;
	char status[numero_acentos];
	contador_lado=0;
	contador_fileira=0;
	
	contador_acesso=1;
	

	
	
	
	
	
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
	printf("Digite 3 para cancelar ou confirmar uma reserva\n");
	printf("Digite 4 para verificar os status de venda\n");
	printf("Digite 5 para sair do programa\n");
	scanf("%i",&opcao_programa);
	

	switch(opcao_programa){
	
	case 1:
		
	 	for(contador=0;contador<numero_acentos;contador++){
	 	
	 		switch(status[contador]) {
				case 'R': printf("R");break;
				case 'C': printf("C");break;
				default: printf("D");
			}
		printf("%i |__|  ",contador + 1);
		contador_fileira++;
		contador_lado++;

		if(contador_lado==3) {
		printf("\t\t");contador_lado=0;} 
		if(contador_fileira==6){ printf("\n\n");contador_fileira=0;}}
		;break;
	case 2:
		printf("Informe a idade do passageiro: ");
		scanf("%i",&idade);
		
		if(idade<=5) { 
		
		valor_desconto=valor_bruto*0.5; 
		printf("O valor a ser pago é %.2fl reais\n",valor_desconto);}
		
		else printf("O valor a ser pago é %.2fl reais\n",valor_bruto);
		
		printf("Informe o acento desejado: ");
		scanf("%i",&acento_desejado);
		acento_desejado_vetor=acento_desejado-1;
	
		if(acento_desejado<=numero_acentos and acento_desejado>0 and status[acento_desejado_vetor]!='R' and status[acento_desejado_vetor]!='C'){
		
		numero_identificador[acento_desejado_vetor]=contador_acesso;
		contador_acesso++;
	
		printf("Acento disponível, reserva concluida, seu número identificador é %i\n\n",numero_identificador[acento_desejado_vetor]);
	
		status[acento_desejado_vetor]='R';
		}
		else printf("Acento não disponível");break;
	
	
	case 3:
		printf("Qual foi o acento reservado?");
		scanf("%i",acento_desejado);
		acento_desejado_vetor=acento_desejado-1;
		if(status[acento_desejado_vetor]='C')printf("Este acento ja teve sua compra confirmada");
		else if(status[acento_desejado_vetor]='R'){
		
		printf("Digite o número identificador:");
		scanf("%i",&numero_identificador_informado);
		
		
		if(numero_identificador_informado=numero_identificador[acento_desejado_vetor]){
		printf("Digite 1 para confirmar a reserva da passagem e 2 para cancelar a reserva\n");
		
		switch(opcao_pos_reserva){
			case 1: printf("Compra confirmada");status[acento_desejado_vetor]='C';
			case 2:	printf("Reserva cancelada");status[acento_desejado_vetor]='D';
		}
		}else printf("Número identificador incorreto ou inexistente");}
		else printf("A reserva deste acento ainda não foi efetuada");break;
	case 4:;break;
	case 5:	
		system ("pause");
		return 0;break;
	default: printf("Opção não possível");}}
while(0!=1);
	

	

	printf("erro");
	system ("pause");
	return 0;
}

	


	
	
