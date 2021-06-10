#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char letra;
	printf("informe a primeira letra do seu sexo: ");
	scanf("%c",&letra);
	letra=='M'or letra=='m' ? printf("o sexo é masculino"): letra=='F' or letra=='f' ? printf("o sexo é feminino"): printf("letra informado incorretamente");
}
