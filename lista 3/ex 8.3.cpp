#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int preco,opcao;
	char nome[30];
	while(opcao==1){
		printf("informe o nome do produto: ");
		setbuf(stdin,0);
		fgets(nome,30,stdin);
		printf("informe o pre�o atual do produto: ");
		scanf("%i",&preco);
		preco=preco*1.1;
		printf("digite 2 caso este seja o ultimo produto e 1 caso n�o seja: ");
		scanf("%i",&opcao);
		if(opcao==2) printf("o pre�o atualizado do produto %s � -1 reais\n",nome);
		else
		printf("o pre�o atualizado do produto %s � %i reais\n",nome,preco);
		}
		return 0;
	}

