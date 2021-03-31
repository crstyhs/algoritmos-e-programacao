#include<stdio.h>
#include<iostream>
int main(){
	float N1,N2,N3,N4,media;
	char nome_aluno[30];
	int frequencia;
	
	printf("digite as notas: ");
	scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
	
	printf("digite a frequencia: ");
	scanf("%i",&frequencia);
	
	printf("digite seu nome: ");
	scanf("%s",nome_aluno);
	
	media=(N1+N2+N3+N4)/4;
	system("cls");
	
	printf("sua media:%f\n",media);
	printf("sua frequencia:%i\n",frequencia);
	
	if(media>=7 and frequencia>=75)
	printf("%s, foi aprovado\n",nome_aluno);
	else printf("%s,foi reprovado\n",nome_aluno);
	
	system("pause");
	return 0;
}
