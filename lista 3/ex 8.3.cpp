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
		printf("informe o preço atual do produto: ");
		scanf("%i",&preco);
		preco=preco*1.1;
		printf("digite 2 caso este seja o ultimo produto e 1 caso não seja: ");
		scanf("%i",&opcao);
		if(opcao==2) printf("o preço atualizado do produto %s é -1 reais\n",nome);
		else
		printf("o preço atualizado do produto %s é %i reais\n",nome,preco);
		}
		return 0;
	}

