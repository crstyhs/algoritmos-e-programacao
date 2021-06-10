#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char nome_pais_1[30],nome_pais_2[30],nome_pais_3[30];
	int bronze,prata,ouro,pontuacao[3] ;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   ;
	printf("informe o nome dos 3 países: ");
	fgets(nome_pais_1,30,stdin);
	fgets(nome_pais_2,30,stdin);
	fgets(nome_pais_3,30,stdin);
	
	printf("quantas medalhas de bronze, prata e ouro o país %s conseguiu: ",nome_pais_1);
	scanf("%i%i%i",&bronze,&prata,&ouro);
	pontuacao[0]=bronze+(prata*2)+(ouro*3);
	
	printf("quantas medalhas de bronze, prata e ouro o país %s conseguiu: ",nome_pais_2);
	scanf("%i%i%i",&bronze,&prata,&ouro);
	pontuacao[1]=bronze+(prata*2)+(ouro*3);
	
	printf("quantas medalhas de bronze, prata e ouro o país %s conseguiu: ",nome_pais_3);
	scanf("%i%i%i",&bronze,&prata,&ouro);
	pontuacao[2]=bronze+(prata*2)+(ouro*3);
	
	if(pontuacao[0]>pontuacao[1] and pontuacao[0]>pontuacao[2]){
	 printf("%s esta em primeiro lugar\n",nome_pais_1);
	 if(pontuacao[1]>pontuacao[2]) printf("%s esta em segundo lugar e %s em terceiro",nome_pais_2,nome_pais_3);
	 else printf("%s esta em segundo lugar e %s em terceiro",nome_pais_3,nome_pais_2);}
	
	 else if(pontuacao[1]>pontuacao[0] and pontuacao[1]>pontuacao[2]){
	 printf("%s esta em primeiro lugar\n",nome_pais_2);
	 if(pontuacao[2]>pontuacao[0]) printf("%s esta em segundo lugar e %s em terceiro",nome_pais_3,nome_pais_1);
	 else printf("%s esta em segundo lugar e %s em terceiro",nome_pais_1,nome_pais_3);}
	 
	 else if(pontuacao[2]>pontuacao[0] and pontuacao[2]>pontuacao[1]){
	 printf("%s esta em primeiro lugar\n",nome_pais_2);
	 if(pontuacao[1]>pontuacao[0]) printf("%s esta em segundo lugar e %s em terceiro",nome_pais_2,nome_pais_1);
	 else printf("%s esta em segundo lugar e %s em terceiro",nome_pais_1,nome_pais_2);}
	 system("pause");
	 return 0;
}
