#include<stdio.h>
#include<locale.h>
int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
	int produtos,contador,preco;
	char nome[30];
	printf("informe o numero de produtos: ");
	scanf("%i",&produtos);
	for(contador=0;contador<produtos;contador++){
		printf("informe o nome do produto: ");
		setbuf(stdin,0);
		fgets(nome,30,stdin);
		printf("informe o preço atual do produto: ");
		scanf("%i",&preco);
		preco=preco*1.1;
		printf("o preço atualizado do produto %s é %i reais\n",nome,preco);}
		return 0;
}
