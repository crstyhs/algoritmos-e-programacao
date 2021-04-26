//Nome completo: Christian Hirsch Santos  Matr�cula: UC21102411 Curso: Engenharia de software
//�C�digo Limpo":CL
//CL:uso de comentarios para explicar o codigo
#include<stdio.h>//biblioteca para o funcionamento o printf e scanf
#include<locale.h>//biblioteca para aceitar acentua��es
#include<iostream>//biblioteca para genrenciar o prompt
#include <string.h>//biblioteca para configurar string

int main(){// inicia o codigo
	setlocale(LC_ALL, "Portuguese");//comando para a leitura da acentua��o nos printf
	//CL: os nomes descritivos de suas fun�oes 
	int numero_de_sessoes,quantidade_de_letras_do_filme,total_de_pessoas,total_de_pessoas_sessao1,total_de_pessoas_sessao2,idade;//declara��o dos interiros em geral
	//CL:aquelas variaveis que possuem fun��es semelhantes possuem um padr�o
	int contador_do_total_de_pessoas,contador_masculino,contador_feminino,contador_criancas,contador_adolescentes,contador_adultos,contador_idosos,contador_maioridade_masculino,contador_maioridade_feminino,contador_numero_de_sessoes;//declara��o dos contadores que se atualizam 	
	int contador_criancas_total,contador_adolescentes_total,contador_adultos_total,contador_idosos_total;//declar��o doscontadores do total,parte emplementada para calcular ao final o total de pessoas em cada classifica��o
	char nome_do_filme[50];//declara��o de string
	char sexo;//declara��o de uma letra
	//CL: os nomes como idade e sexo foram evitados o uso de express�es como id e sex
	//CL: regra decrescente
do{//ordena a execu��o dos comandos entre as chaves
			
	printf("Bem vindo ao sistema de an�lise de perfil dos visitantes\n");//mensagem de boas vindas 
	printf("Para come�ar digite o n�mero de sess�es que ser�o realizadas: ");//mensagem que solicita a quantidade de sess�es que ser�o feitas
	scanf("%i",&numero_de_sessoes);//escaneia e salva o n�mero digitado como o n�mero de sess�es
	
	if(numero_de_sessoes!=2){//cria um condi��o onde caso o n�mero de sess�es for diferente de 2 permitira a execu��o das linhas de comando entre as chaves
	printf("\n\nProgress�o negada, valor n�o permitido\n");//mensagem que avisa que o n�mero digitado esta errado 
	printf("O aplicativo ser� reiniciado\n");//mensagem avisando do retorno ao ponto de in�cio

	system("pause");//possibilita a pausa do prompt
	system("cls");}//limpa o que foi escrito no prompt
}//finaliza o "do"
while (numero_de_sessoes!=2);//retorna ao comando "do" caso o n�mero de sess�es seja diferente de 2

printf("\n\nProgress�o aceita, valor permitido\n");//mensagem que aceita o n�mero digitado
	
do{	//ordena a execu��o dos comandos entre as chaves
	setbuf(stdin, 0);//permite a execu��o do fgets
	printf("Para continuar informe o nome do filme: ");//mensagem que solicita o nome do filme
	fgets(nome_do_filme, 50 , stdin);//salva o que foi digitado ate no maximo 50 letras aceitando espa�o
	
	
	quantidade_de_letras_do_filme=strlen(nome_do_filme) - 1;//contabiliza e salva a quantidade de letras no nome do filme
	
	
	if(quantidade_de_letras_do_filme<1){//condi��o que � executada caso a quantidade de letras do filme ser inferior a 1
	printf("\n\nN�o foi informado um nome, tente novamente\n");//mensagem informando que o campo para informa o nome do filme esta vazio

	system("pause");//possibilita a pausa do prompt
	system("cls");}//limpa o que foi escrito no prompt
}//finaliza o "do"
while(quantidade_de_letras_do_filme<1);//retorna ao comando "do" caso aquantida de letras do filme for inferior a 1
	
do{//ordena a execu��o dos comandos entre as chaves
	printf("\n\ninforme a quantidade de pessoas que assistiram ao filme na sess�o 1 e sess�o 2 respectivamente: ");//mensagem que pede quantas pessoas assistiram o filme em cada sess�o
	scanf("%i%i", &total_de_pessoas_sessao1 , &total_de_pessoas_sessao2);//escaneia e salva os n�meros informados para a sessao 1 e 2
	total_de_pessoas=total_de_pessoas_sessao1;//atribui nesse primeiro momento o total de pessoa as pessoas que pertencem a sess�o 1

	if(total_de_pessoas_sessao1<10 or total_de_pessoas_sessao2<10){//inicia a condi��o caso o total de pessoas na sess�o 1 ou 2 for menor que 10
	printf("quantidade minima n�o atingida,insira outro valor\n");//mensagem que informa que o total de pessoa � inferior a 10

	system("pause");//possibilita a pausa do prompt
	system("cls");}//limpa o que foi escrito no prompt
}//finaliza o "do"
while(total_de_pessoas_sessao1<10 or total_de_pessoas_sessao2<10);//retorna ao comando "do" caso o total de pessoas na sess�o 1 ou 2 for menor que 10


contador_maioridade_masculino=0;//atribui 0 como o valor inicial do contador da maioridade masculina
contador_maioridade_feminino=0;//atribui 0 como o valor inicial do contador da maioridade feminina
contador_criancas_total=0;//atribui 0 como o valor inicial do contador do total de crian�as
contador_adolescentes_total=0;//atribui 0 como o valor inicial do contador do total de adolescentes
contador_adultos_total=0;//atribui 0 como o valor inicial do contador do total de adultos
contador_idosos_total=0;//atribui 0 como o valor inicial do contador do total de idosos


for(contador_numero_de_sessoes=1;contador_numero_de_sessoes<=2;contador_numero_de_sessoes++){//repete o que esta entre as chaves 2 vezes

	printf("\n\nA seguir informe o sexo e a idade de cada pessoa que assistiu o filme na sess�o %i\n",contador_numero_de_sessoes);//mensagem que pede sexo da pessoa usando M E F e informando de qual sess�o ele esta pedindo a informa��o


contador_masculino=0;//atribui 0 como o valor inicial do contador de pessoas do sexo masculino em determinada sess�o
contador_feminino=0;//atribui 0 como o valor inicial do contador de pessoas do sexo feminino em determinada sess�o
contador_criancas=0;//atribui 0 como o valor inicial do contador de crian�as em determinada sess�o
contador_adolescentes=0;//atribui 0 como o valor inicial do contador de adolescentes em determinada sess�o
contador_adultos=0;//atribui 0 como o valor inicial do contador de adultos em determinada sess�o
contador_idosos=0;//atribui 0 como o valor inicial do contador de idosos em determinada sess�o


for(contador_do_total_de_pessoas=1;contador_do_total_de_pessoas<=total_de_pessoas;contador_do_total_de_pessoas++){//repete o que est� em chaves pela quantidade total de pessoas
	setbuf(stdin, 0);//permite o funcionamento do scanf
	printf("\ninforme o sexo da pessoa %i: M para masculino e F para feminino\n",contador_do_total_de_pessoas);//mensagem solicitando o sexo da pessoas e informando um contador dapar diferenciar as pessoas
	scanf("%c",&sexo);//escaneia e salva a letra informada

	switch(sexo){//cria a aba de respostas dependendo da letra informada pelo usuario

		case 'M' ://caso a letra informada seja M inicia a linha de comando ate o "break"
	contador_masculino=contador_masculino + 1;//adiciona 1 ao contador masculino

	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor

	if(idade>=18 and idade<=100) contador_maioridade_masculino=contador_maioridade_masculino + 1;//adiciona 1 ao contador da maioridade masculina caso a idade for entre 18 e 100

	if(idade>=3 and idade<=13){//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crian�as
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crian�as

	else if(idade>=14 and idade<=17){//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos
	
	else {//se nenhuma da condi�oes dentro da "case" n�o forem atendidas os comandos entre as chaves ser�o iniciados
	printf("op��o n�o permitida, informe novamente\n");//mensagem que informa um erro no valor informado
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_masculino=contador_masculino - 1;}//retira 1 do contador masculino
	;break;//finaliza a "case"

		case 'm' ://caso a letra informada seja m inicia a linha de comando ate o "break"
	contador_masculino=contador_masculino + 1;//adiciona 1 ao contador masculino
	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor

	if(idade>=18 and idade<=100) contador_maioridade_masculino=contador_maioridade_masculino + 1;//adiciona 1 ao contador da maioridade masculina caso a idade for entre 18 e 100

	if(idade>=3 and idade<=13) {//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crian�as
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crian�as

	else if(idade>=14 and idade<=17) {//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos

	else {//se nenhuma da condi�oes dentro da "case" n�o forem atendidas os comandos entre as chaves ser�o iniciados
	printf("op��o n�o permitida, informe novamente\n");//mensagem que informa um erro no valor informado
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_masculino=contador_masculino - 1;}//retira 1 do contador masculino
	;break;//finaliza a "case"
		
		case 'F' ://caso a letra informada seja F inicia a linha de comando ate o "break" 
	contador_feminino=contador_feminino + 1;//adiciona 1 ao contador feminino
	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor

	if(idade>=18 and idade<=100) contador_maioridade_feminino=contador_maioridade_feminino + 1;//adiciona 1 ao contador da maioridade feminina caso a idade for entre 18 e 100
	
	if(idade>=3 and idade<=13) {//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crian�as
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crian�as

	else if(idade>=14 and idade<=17) {//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos

	else {//se nenhuma da condi�oes dentro da "case" n�o forem atendidas os comandos entre as chaves ser�o iniciados
	printf("op��o n�o permitida, informe novamente\n");//mensagem que informa um erro no valor informado 
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_feminino=contador_feminino - 1;}//retira 1 do contador feminino	
	;break;//finaliza a "case"

		case 'f' ://caso a letra informada seja f inicia a linha de comando ate o "break" 
	contador_feminino=contador_feminino + 1;//adiciona 1 ao contador feminino
	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor
	if(idade>=18 and idade<=100) contador_maioridade_feminino=contador_maioridade_feminino + 1;//adiciona 1 ao contador da maioridade feminina caso a idade for entre 18 e 100
	
	if(idade>=3 and idade<=13) {//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crian�as
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crian�as
	
	else if(idade>=14 and idade<=17) {//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos

	else {//se nenhuma da condi�oes dentro da "case" n�o forem atendidas os comandos entre as chaves ser�o iniciados
	printf("op��o n�o permitida, informe novamente\n");//mensagem que informa um erro no valor informado 
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_feminino=contador_feminino - 1;}//retira 1 do contador feminino
	;break;//finaliza a "case"

		default ://caso nenhuma das "case" foram atendidas o "default" ativara
	printf("op��o n�o permitida, informe novamente\n");//mensagem que informa um erro caso a letra seja nenhuma das "cases" 
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;}//retira 1 do contador do total de pessoas
}//finaliza o "switch"
	system("cls");//limpa o que foi escrito no prompt

	printf("o nome do filme �:%s\n",nome_do_filme);//mensagem que apresenta o nome do filme salvo
	
	printf("quantidade de pessoas do sexo masculino que assistiram ao filme:%i\n",contador_masculino);//mensagem que informa a quantidade de pessoas do sexo masculino na sess�o

	printf("quantidade de pessoas do sexo feminino que assistiram ao filme:%i\n\n",contador_feminino);//mensagem que informa a quantidade de pessoas do sexo feminino na sess�o

	printf("quantidade de crian�as que assistiram ao filme:%i\n",contador_criancas);//mensagem que informa a quantidade de crian�as na sess�o

	printf("quantidade de adolescentes que assistiram ao filme:%i\n",contador_adolescentes);//mensagem que informa a quantidade de adolescentes na sess�o

	printf("quantidade de adultos que assistiram ao filme:%i\n",contador_adultos);//mensagem que informa a quantidade de adultos na sess�o

	printf("quantidade de idosos que assistiram ao filme:%i\n\n",contador_idosos);//mensagem que informa a quantidade de idosos na sess�o
	
	total_de_pessoas=total_de_pessoas_sessao2;//substitui o total de pessoas que anteriormente era da sessao 1 pela sess�o 2
	system("pause");//possibilita a pausa do prompt
	system("cls");//limpa o que foi escrito no prompt
}//finaliza o "for"

	system("cls");//limpa o que foi escrito no prompt

	printf("o total de pessoas(primeira e segunda sess�o) maiores de idade (idade maior ou igual a 18 anos) do sexo masculino �: %i\n",contador_maioridade_masculino);//mensagem que informa o total de pessoas maiores de idade do sexo masculino
	
	printf("o total de pessoas(primeira e segunda sess�o) maiores de idade (idade maior ou igual a 18 anos) do sexo feminino �: %i\n\n",contador_maioridade_feminino);//mensagem que informa o total de pessoas maiores de idade do sexo feminino

	printf("quantidade total de crian�as que assistiram ao filme:%i\n",contador_criancas_total);//mensagem que informa a quantidade total de crian�as

	printf("quantidade total de adolescentes que assistiram ao filme:%i\n",contador_adolescentes_total);//mensagem que informa a quantidade total de adolescentes

	printf("quantidade total de adultos que assistiram ao filme:%i\n",contador_adultos_total);//mensagem que informa a quantidade total de adultos

	printf("quantidade total de idosos que assistiram ao filme:%i\n",contador_idosos_total);//mensagem que informa a quantidade total de idosos

	system("pause");//possibilita a pausa do prompt
	return 0;//finaliza as linhas de comando
}//finaliza o "main"
