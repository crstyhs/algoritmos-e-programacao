#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int aluno,contador;
	float nota[aluno];
	do{
	
	printf("informe a quantidade de alunos a sala possui: ");
	setbuf(stdin,0);
	scanf("%i",&aluno);
	if(aluno<=0 or aluno>49) printf("quantidade informada de forma incorreta\n");}
	while(aluno<=0 or aluno>49);
	for(contador=0;contador<aluno;contador++){
	
	printf("Digite a nota do aluno: ");
	scanf("%f",&nota[contador]);}
	system("pause");
	return 0;
}
