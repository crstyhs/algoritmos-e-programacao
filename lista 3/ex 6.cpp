#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
		setlocale(LC_ALL, "Portuguese_Brazil");
	float media_masculina,media_feminina,nota,nota_total_masculino=0,nota_total_feminino=0;
	int pessoas_masculino=0,pessoas_feminino=0;
	char opcao;


while(1!=2){
	printf("informe o sexo da pessoa M para masculino e F para feminino\n");
	scanf("%c",&opcao);
	switch(opcao) {
	case 'M': printf("informe a nota da pessoa: ");
	scanf("%f",&nota);
	if(nota<0) printf("a m�dia masculina � %.2f\n",media_masculina);
	pessoas_masculino++;
	nota_total_masculino=nota_total_masculino+nota;
	media_masculina=nota_total_masculino/pessoas_masculino;break;
	case 'F': printf("informe a nota da pessoa: ");
	scanf("%f",&nota);
	if(nota<0) printf("a m�dia feminina � %.2f\n",media_feminina);
	pessoas_feminino++;
	nota_total_feminino=nota_total_feminino+nota;
	media_feminina=nota_total_feminino/pessoas_feminino;break;}}
	system("pause");
	return 0;
}
