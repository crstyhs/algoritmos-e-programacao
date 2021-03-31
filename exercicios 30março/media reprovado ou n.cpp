//https://www.urionlinejudge.com.br/judge/pt/problems/view/1040
//link do exercicio
#include<stdio.h>
#include<iostream>
int main(){
	float N1, N2, N3, N4, media, notaExame,mediaFinal;
	
	printf("digite a primeira nota: ");
	scanf("%f",&N1);
	
	printf("digite a segunda nota: ");
	scanf("%f",&N2);
	
	printf("digite a terceira nota: ");
	scanf("%f",&N3);
	
	printf("digite a quarta nota: ");
	scanf("%f",&N4);
	
	media= (N1*2+N2*3+N3*4+N4)/10;//calculo da media ponderada
	system("cls");//limpar prompt
	printf("Media:%.1f\n",media);
	
	if(media>=7.0) printf("Aluno aprovado\n");//se a nota for a mesma ou maior q 7 aluno é aprovado
	else
	
	if(media<5.0)printf("Aluno reprovado\n");//se a nota for menor q 5 o aluno é reprovado
	else
	
	if(5.0<=media<=6.9){//se nota for entre 4.9 e 7 recalcular a nota com a nota do exame
	printf("Aluno em exame\n");
	printf("digite a nota do exame: ");
	scanf("%f",&notaExame);
	system("cls");
	
	printf("Media:%.1f\n",media);
	printf("Aluno em exame\n");
	
	mediaFinal= (notaExame+media)/2;//a media entre a nota do exame e a primeira media 
	
	printf("Nota do exame:%.1f\n",notaExame);
	if (mediaFinal>=5.0)printf("Aluno aprovado\n");//analisar se foi aprovado
	
	if (mediaFinal<=4.9)printf("Aluno reprovado\n");//analisar se foi reprovado
	printf("Media final:%.1f\n",mediaFinal);}
	
	system("pause");
	return 0;
	
	
}
