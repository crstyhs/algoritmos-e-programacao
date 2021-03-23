//entrada a,b,c
//saida x1 ex2
//processo calculo de bhaskara
#include<iostream>//biblioteca do pause
#include<stdio.h>//biblioteca para printf e scanf
#include<math.h>// biblioteca para aceitar outros calculos matemáticos
int main(){//incia o programa
	float a,b,c,x1,x2,delta; //declarçao na memoria
	
	printf("digite o valor de a: ");//mostra na tela a frase
	scanf("%f", &a);//armazena na memoria o valor de a
	
	printf("digite o valor de b: ");//mostra na tela a frase
	scanf("%f", &b);//armazena na memoria o valor de b

	printf("digite o valor de c: ");//mostra na tela a frase
	scanf("%f", &c);//armazena na memoria o valor de c
	
	delta= (pow(b,2)-4*a*c);// calcula o valor de delta 
	
	if(a==0 or delta<0)//inicia uma condicional
	printf("resultado impossivel\n");// mostra a frase se a condicionar ser verdadeira

	else{// ocorre se a condicional for falsa
	x1= (-b+sqrt(delta))/(2*a); //calculo do x1
	x2= (-b-sqrt(delta))/(2*a); //calculo do x2
	
	
	printf("x1:%f\n", x1);//apresenta o resultado final de x1
	printf("x2:%f\n", x2);//apresenta o resultado final de x2
}
	
	system("pause");//pausar o pronpt
	return 0;//retornar 
}
