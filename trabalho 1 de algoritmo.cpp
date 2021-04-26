//Nome completo: Christian Hirsch Santos  Matrícula: UC21102411 Curso: Engenharia de software
//“Código Limpo":CL
//CL:uso de comentarios para explicar o codigo
#include<stdio.h>//biblioteca para o funcionamento o printf e scanf
#include<locale.h>//biblioteca para aceitar acentuações
#include<iostream>//biblioteca para genrenciar o prompt
#include <string.h>//biblioteca para configurar string

int main(){// inicia o codigo
	setlocale(LC_ALL, "Portuguese");//comando para a leitura da acentuação nos printf
	//CL: os nomes descritivos de suas funçoes 
	int numero_de_sessoes,quantidade_de_letras_do_filme,total_de_pessoas,total_de_pessoas_sessao1,total_de_pessoas_sessao2,idade;//declaração dos interiros em geral
	//CL:aquelas variaveis que possuem funções semelhantes possuem um padrão
	int contador_do_total_de_pessoas,contador_masculino,contador_feminino,contador_criancas,contador_adolescentes,contador_adultos,contador_idosos,contador_maioridade_masculino,contador_maioridade_feminino,contador_numero_de_sessoes;//declaração dos contadores que se atualizam 	
	int contador_criancas_total,contador_adolescentes_total,contador_adultos_total,contador_idosos_total;//declarção doscontadores do total,parte emplementada para calcular ao final o total de pessoas em cada classificação
	char nome_do_filme[50];//declaração de string
	char sexo;//declaração de uma letra
	//CL: os nomes como idade e sexo foram evitados o uso de expressões como id e sex
	//CL: regra decrescente
do{//ordena a execução dos comandos entre as chaves
			
	printf("Bem vindo ao sistema de análise de perfil dos visitantes\n");//mensagem de boas vindas 
	printf("Para começar digite o número de sessões que serão realizadas: ");//mensagem que solicita a quantidade de sessões que serão feitas
	scanf("%i",&numero_de_sessoes);//escaneia e salva o número digitado como o número de sessões
	
	if(numero_de_sessoes!=2){//cria um condição onde caso o número de sessões for diferente de 2 permitira a execução das linhas de comando entre as chaves
	printf("\n\nProgressão negada, valor não permitido\n");//mensagem que avisa que o número digitado esta errado 
	printf("O aplicativo será reiniciado\n");//mensagem avisando do retorno ao ponto de início

	system("pause");//possibilita a pausa do prompt
	system("cls");}//limpa o que foi escrito no prompt
}//finaliza o "do"
while (numero_de_sessoes!=2);//retorna ao comando "do" caso o número de sessões seja diferente de 2

printf("\n\nProgressão aceita, valor permitido\n");//mensagem que aceita o número digitado
	
do{	//ordena a execução dos comandos entre as chaves
	setbuf(stdin, 0);//permite a execução do fgets
	printf("Para continuar informe o nome do filme: ");//mensagem que solicita o nome do filme
	fgets(nome_do_filme, 50 , stdin);//salva o que foi digitado ate no maximo 50 letras aceitando espaço
	
	
	quantidade_de_letras_do_filme=strlen(nome_do_filme) - 1;//contabiliza e salva a quantidade de letras no nome do filme
	
	
	if(quantidade_de_letras_do_filme<1){//condição que é executada caso a quantidade de letras do filme ser inferior a 1
	printf("\n\nNão foi informado um nome, tente novamente\n");//mensagem informando que o campo para informa o nome do filme esta vazio

	system("pause");//possibilita a pausa do prompt
	system("cls");}//limpa o que foi escrito no prompt
}//finaliza o "do"
while(quantidade_de_letras_do_filme<1);//retorna ao comando "do" caso aquantida de letras do filme for inferior a 1
	
do{//ordena a execução dos comandos entre as chaves
	printf("\n\ninforme a quantidade de pessoas que assistiram ao filme na sessão 1 e sessão 2 respectivamente: ");//mensagem que pede quantas pessoas assistiram o filme em cada sessão
	scanf("%i%i", &total_de_pessoas_sessao1 , &total_de_pessoas_sessao2);//escaneia e salva os números informados para a sessao 1 e 2
	total_de_pessoas=total_de_pessoas_sessao1;//atribui nesse primeiro momento o total de pessoa as pessoas que pertencem a sessão 1

	if(total_de_pessoas_sessao1<10 or total_de_pessoas_sessao2<10){//inicia a condição caso o total de pessoas na sessão 1 ou 2 for menor que 10
	printf("quantidade minima não atingida,insira outro valor\n");//mensagem que informa que o total de pessoa é inferior a 10

	system("pause");//possibilita a pausa do prompt
	system("cls");}//limpa o que foi escrito no prompt
}//finaliza o "do"
while(total_de_pessoas_sessao1<10 or total_de_pessoas_sessao2<10);//retorna ao comando "do" caso o total de pessoas na sessão 1 ou 2 for menor que 10


contador_maioridade_masculino=0;//atribui 0 como o valor inicial do contador da maioridade masculina
contador_maioridade_feminino=0;//atribui 0 como o valor inicial do contador da maioridade feminina
contador_criancas_total=0;//atribui 0 como o valor inicial do contador do total de crianças
contador_adolescentes_total=0;//atribui 0 como o valor inicial do contador do total de adolescentes
contador_adultos_total=0;//atribui 0 como o valor inicial do contador do total de adultos
contador_idosos_total=0;//atribui 0 como o valor inicial do contador do total de idosos


for(contador_numero_de_sessoes=1;contador_numero_de_sessoes<=2;contador_numero_de_sessoes++){//repete o que esta entre as chaves 2 vezes

	printf("\n\nA seguir informe o sexo e a idade de cada pessoa que assistiu o filme na sessão %i\n",contador_numero_de_sessoes);//mensagem que pede sexo da pessoa usando M E F e informando de qual sessão ele esta pedindo a informação


contador_masculino=0;//atribui 0 como o valor inicial do contador de pessoas do sexo masculino em determinada sessão
contador_feminino=0;//atribui 0 como o valor inicial do contador de pessoas do sexo feminino em determinada sessão
contador_criancas=0;//atribui 0 como o valor inicial do contador de crianças em determinada sessão
contador_adolescentes=0;//atribui 0 como o valor inicial do contador de adolescentes em determinada sessão
contador_adultos=0;//atribui 0 como o valor inicial do contador de adultos em determinada sessão
contador_idosos=0;//atribui 0 como o valor inicial do contador de idosos em determinada sessão


for(contador_do_total_de_pessoas=1;contador_do_total_de_pessoas<=total_de_pessoas;contador_do_total_de_pessoas++){//repete o que está em chaves pela quantidade total de pessoas
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
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crianças
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crianças

	else if(idade>=14 and idade<=17){//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos
	
	else {//se nenhuma da condiçoes dentro da "case" não forem atendidas os comandos entre as chaves serão iniciados
	printf("opção não permitida, informe novamente\n");//mensagem que informa um erro no valor informado
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_masculino=contador_masculino - 1;}//retira 1 do contador masculino
	;break;//finaliza a "case"

		case 'm' ://caso a letra informada seja m inicia a linha de comando ate o "break"
	contador_masculino=contador_masculino + 1;//adiciona 1 ao contador masculino
	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor

	if(idade>=18 and idade<=100) contador_maioridade_masculino=contador_maioridade_masculino + 1;//adiciona 1 ao contador da maioridade masculina caso a idade for entre 18 e 100

	if(idade>=3 and idade<=13) {//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crianças
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crianças

	else if(idade>=14 and idade<=17) {//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos

	else {//se nenhuma da condiçoes dentro da "case" não forem atendidas os comandos entre as chaves serão iniciados
	printf("opção não permitida, informe novamente\n");//mensagem que informa um erro no valor informado
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_masculino=contador_masculino - 1;}//retira 1 do contador masculino
	;break;//finaliza a "case"
		
		case 'F' ://caso a letra informada seja F inicia a linha de comando ate o "break" 
	contador_feminino=contador_feminino + 1;//adiciona 1 ao contador feminino
	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor

	if(idade>=18 and idade<=100) contador_maioridade_feminino=contador_maioridade_feminino + 1;//adiciona 1 ao contador da maioridade feminina caso a idade for entre 18 e 100
	
	if(idade>=3 and idade<=13) {//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crianças
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crianças

	else if(idade>=14 and idade<=17) {//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos

	else {//se nenhuma da condiçoes dentro da "case" não forem atendidas os comandos entre as chaves serão iniciados
	printf("opção não permitida, informe novamente\n");//mensagem que informa um erro no valor informado 
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_feminino=contador_feminino - 1;}//retira 1 do contador feminino	
	;break;//finaliza a "case"

		case 'f' ://caso a letra informada seja f inicia a linha de comando ate o "break" 
	contador_feminino=contador_feminino + 1;//adiciona 1 ao contador feminino
	printf("informe a idade dessa pessoa: ");//mensagem pedindo pela idade da pessoa
	scanf("%i",&idade);//escaneia e salva o valor
	if(idade>=18 and idade<=100) contador_maioridade_feminino=contador_maioridade_feminino + 1;//adiciona 1 ao contador da maioridade feminina caso a idade for entre 18 e 100
	
	if(idade>=3 and idade<=13) {//executa o que esta entre as chaves caso a idade for entre 3 e 13
	contador_criancas=contador_criancas + 1;//adiciona 1 ao contador de crianças
	contador_criancas_total=contador_criancas_total + 1;}//adiciona 1 ao contador do total de crianças
	
	else if(idade>=14 and idade<=17) {//executa o que esta entre as chaves caso a idade for entre 14 e 17
	contador_adolescentes=contador_adolescentes + 1;//adiciona 1 ao contador de adolescentes
	contador_adolescentes_total=contador_adolescentes_total + 1;}//adiciona 1 ao contador do total de adolescentes

	else if(idade>=18 and idade<=64) {//executa o que esta entre as chaves caso a idade for entre 18 e 64
	contador_adultos=contador_adultos + 1;//adiciona 1 ao contador de adultos
	contador_adultos_total=contador_adultos_total + 1;}//adiciona 1 ao contador do total de adultos

	else if(idade>=65 and idade<=100) {//executa o que esta entre as chaves caso a idade for entre 65 e 100
	contador_idosos=contador_idosos + 1;//adiciona 1 ao contador de idosos
	contador_idosos_total=contador_idosos_total + 1;}//adiciona 1 ao contador do total de idosos

	else {//se nenhuma da condiçoes dentro da "case" não forem atendidas os comandos entre as chaves serão iniciados
	printf("opção não permitida, informe novamente\n");//mensagem que informa um erro no valor informado 
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;//retira 1 do contador do total de pessoas
	contador_feminino=contador_feminino - 1;}//retira 1 do contador feminino
	;break;//finaliza a "case"

		default ://caso nenhuma das "case" foram atendidas o "default" ativara
	printf("opção não permitida, informe novamente\n");//mensagem que informa um erro caso a letra seja nenhuma das "cases" 
	contador_do_total_de_pessoas=contador_do_total_de_pessoas - 1;}//retira 1 do contador do total de pessoas
}//finaliza o "switch"
	system("cls");//limpa o que foi escrito no prompt

	printf("o nome do filme é:%s\n",nome_do_filme);//mensagem que apresenta o nome do filme salvo
	
	printf("quantidade de pessoas do sexo masculino que assistiram ao filme:%i\n",contador_masculino);//mensagem que informa a quantidade de pessoas do sexo masculino na sessão

	printf("quantidade de pessoas do sexo feminino que assistiram ao filme:%i\n\n",contador_feminino);//mensagem que informa a quantidade de pessoas do sexo feminino na sessão

	printf("quantidade de crianças que assistiram ao filme:%i\n",contador_criancas);//mensagem que informa a quantidade de crianças na sessão

	printf("quantidade de adolescentes que assistiram ao filme:%i\n",contador_adolescentes);//mensagem que informa a quantidade de adolescentes na sessão

	printf("quantidade de adultos que assistiram ao filme:%i\n",contador_adultos);//mensagem que informa a quantidade de adultos na sessão

	printf("quantidade de idosos que assistiram ao filme:%i\n\n",contador_idosos);//mensagem que informa a quantidade de idosos na sessão
	
	total_de_pessoas=total_de_pessoas_sessao2;//substitui o total de pessoas que anteriormente era da sessao 1 pela sessão 2
	system("pause");//possibilita a pausa do prompt
	system("cls");//limpa o que foi escrito no prompt
}//finaliza o "for"

	system("cls");//limpa o que foi escrito no prompt

	printf("o total de pessoas(primeira e segunda sessão) maiores de idade (idade maior ou igual a 18 anos) do sexo masculino é: %i\n",contador_maioridade_masculino);//mensagem que informa o total de pessoas maiores de idade do sexo masculino
	
	printf("o total de pessoas(primeira e segunda sessão) maiores de idade (idade maior ou igual a 18 anos) do sexo feminino é: %i\n\n",contador_maioridade_feminino);//mensagem que informa o total de pessoas maiores de idade do sexo feminino

	printf("quantidade total de crianças que assistiram ao filme:%i\n",contador_criancas_total);//mensagem que informa a quantidade total de crianças

	printf("quantidade total de adolescentes que assistiram ao filme:%i\n",contador_adolescentes_total);//mensagem que informa a quantidade total de adolescentes

	printf("quantidade total de adultos que assistiram ao filme:%i\n",contador_adultos_total);//mensagem que informa a quantidade total de adultos

	printf("quantidade total de idosos que assistiram ao filme:%i\n",contador_idosos_total);//mensagem que informa a quantidade total de idosos

	system("pause");//possibilita a pausa do prompt
	return 0;//finaliza as linhas de comando
}//finaliza o "main"
