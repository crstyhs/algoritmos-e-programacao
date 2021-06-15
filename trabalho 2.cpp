//Nome completo: Christian Hirsch Santos  Matrícula: UC21102411 Curso: Engenharia de software
//bibliotecas
#include<stdio.h>
#include<locale.h>
#include<iostream>
#include<locale.h>
#include<string.h>
#include<conio.h>
//definição das cores
#define vermelho "\x1b[91m"
#define verde "\x1b[32m"
#define azul "\x1b[34m"
#define branco "\x1b[0m"
//início
int main(){
//aceitar assentos
	setlocale(LC_ALL, "Portuguese_Brazil");
//declaração das variaveis
	int contador_destino, contador_letras, contador_letras_destino, contador_fileira, contador_lado,contador_acesso, contador_disponivel, contador_reservado, contador_confirmado, contador_bebe, contador_nao_bebe;
	int numero_assentos, contador, opcao_programa, assento_desejado, assento_desejado_vetor , numero_identificador_informado, opcao_pos_reserva;
	int idade[numero_assentos], numero_identificador[numero_assentos];
	float valor_bruto, valor_desconto,valor_vendas;
	char destino[30], letras[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", status[numero_assentos];
//declaração dos valores das variaveis
	contador_letras_destino=0;
	contador_lado=0;
	contador_fileira=0;
	contador_acesso=1;
	contador_reservado=0;
	contador_confirmado=0;
	contador_bebe=0;
	contador_nao_bebe=0;
//introdução das informaçoes básicas
do{
	printf("Bem vindo ao sistema de compra de passagens aéreas da empresa SALUMAR LINHAS AEREAS\n");
	printf("Insira o destino desejado: ");
	fgets(destino,30,stdin);
	for(contador_destino=0;contador_destino<strlen(destino);contador_destino++){//faz a verificação se houve o uso somente de letras do alfabeto
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
	printf("Informe o número de assentos no avião com destino a %s: ",destino);//pergunta o número de assentos aceitando somente valores de 90 a 200
	setbuf(stdin,0);
	scanf("%i",&numero_assentos);
	contador_disponivel=numero_assentos;
	if(numero_assentos<90 or numero_assentos>200) printf("\nNúmero de assentos impossível\n");} 
while(numero_assentos<90 or numero_assentos>200);

do{
	printf("Digite o valor da passagem para o destino %s: ",destino);//pergunta o valor a passagem
	setbuf(stdin,0);
	scanf("%f",&valor_bruto);
	if(valor_bruto<0)printf("o valor da passagem foi informado de forma incorreta\n");}
while(valor_bruto<0);
//apresentação das opções de ação
do{
	printf("Escolha uma das opções abaixo:\n");
	printf("Digite 1 para acessar o mapa dos lugares\n");
	printf("Digite 2 para efetuar a reserva de uma passagem\n");
	printf("Digite 3 para cancelar ou confirmar uma reserva\n");
	printf("Digite 4 para verificar os status de venda\n");
	printf("Digite 5 para sair do programa\n");
	scanf("%i",&opcao_programa);
	

	switch(opcao_programa){
	
	case 1://cria o mapa do avião
		system("cls");
	 	for(contador=0;contador<numero_assentos;contador++){
	 	
	 		switch(status[contador]) {//apresenta o status de cada assento
				case 'R': 
					printf(vermelho "R" branco);break;
					
				case 'C': 
					printf(azul "C" branco);break;
					
				default: 
				printf(verde "D" branco);
			}
		printf("%i |__|  ",contador + 1);
		contador_fileira++;
		contador_lado++;

		if(contador_lado==3){//faz a divisão de colunas e linhas
		printf("\t\t");contador_lado=0;} 
		if(contador_fileira==6){
		printf("\n\n");contador_fileira=0;}}
		system("pause");break;
		
	case 2://faz a reserva de assento
		printf("Informe o assento desejado: ");
		scanf("%i",&assento_desejado);
		assento_desejado_vetor=assento_desejado-1;
		
		if(assento_desejado<=numero_assentos and assento_desejado>0 and status[assento_desejado_vetor]!='R' and status[assento_desejado_vetor]!='C'){//valida se os status do acento desejado esta disponível
		numero_identificador[assento_desejado_vetor]=contador_acesso;
		contador_acesso++;
		printf("assento disponível, seu número identificador é %i\n\n",numero_identificador[assento_desejado_vetor]);
		status[assento_desejado_vetor]='R';
		contador_disponivel--;
		contador_reservado++;
		printf("Informe a idade do passageiro: ");
		scanf("%i",&idade[assento_desejado_vetor]);
		
		if(idade[assento_desejado_vetor]<=5 and idade[assento_desejado_vetor]>0){ //identifica se o passageiro receberá desconto
		valor_desconto=valor_bruto*0.5; 
		printf("O valor a ser pago é %.2f reais\n\n",valor_desconto);}
		
		else{printf("O valor a ser pago é %.2f reais\n\n",valor_bruto);}}
		else printf("assento não disponível\n");break;
	
	case 3://confirmação e cancelamento de reserva
		printf("Qual foi o assento reservado?");
		scanf("%i",&assento_desejado);
		assento_desejado_vetor=assento_desejado-1;
		
		if(status[assento_desejado_vetor]=='C')//confirmação de status como reservado
		printf("Este assento ja teve sua compra confirmada\n");
		else if(status[assento_desejado_vetor]=='R'){
		printf("Digite o número identificador:");
		scanf("%i",&numero_identificador_informado);
	
		if(numero_identificador_informado==numero_identificador[assento_desejado_vetor]){//caso tudo esteja ok
			
do{
		printf("Digite 1 para confirmar a reserva da passagem e 2 para cancelar a reserva\n");
		scanf("%i",&opcao_pos_reserva);
		
		switch(opcao_pos_reserva){
			
			case 1: //confirmação
				printf("Compra confirmada\n");status[assento_desejado_vetor]='C';
				contador_reservado--;
				contador_confirmado++;
				if(idade[assento_desejado_vetor]<=5)
				contador_bebe++;
				else contador_nao_bebe++;break;
				
			case 2:	//cancelamento
				printf("Reserva cancelada\n");status[assento_desejado_vetor]='D';
				contador_reservado--;
				contador_disponivel++;
			
				if(idade[assento_desejado_vetor]<=5) 
				contador_bebe--;
				else contador_nao_bebe--;break;
				
				default: 
					opcao_pos_reserva=3; }}
while(opcao_pos_reserva==3);
	
		}else printf("Número identificador incorreto ou inexistente");}
	
		else printf("A reserva deste assento ainda não foi efetuada");break;
		
	case 4://relatório
		printf("O número de assentos disponiveis é %i\n",contador_disponivel);
		printf("O número de assentos reservados é %i\n",contador_reservado);
		printf("O número de assentos confirmados é %i\n",contador_confirmado);
		valor_vendas=(contador_bebe*valor_desconto)+(contador_nao_bebe*valor_bruto);
		printf("O valor total em reais com as vendas já confirmadas é %.2f\n",valor_vendas);break;

	case 5:	//opção de saida
		system ("pause");
		return 0;break;
		
	default: 
		printf("Opção não possível\n");}}
while(0!=1);
//finaliza o programa caso saia do loop
	printf("erro");
	system ("pause");
	return 0;}

	


	
	
