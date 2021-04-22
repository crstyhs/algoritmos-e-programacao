#include<stdio.h>
#include<iostream>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float altura1,altura2,altura3;
	char nome1[30],nome2[30],nome3[30];
	
	printf("insira o nome: ");
	scanf("%s",&nome1);
	
	printf("insira sua altura: ");
	scanf("%f",&altura1);
	
	printf("insira o nome da segunda pessoa: ");
	scanf("%s",&nome2);
	
	printf("insira sua altura: ");
	scanf("%f",&altura2);
	
	printf("insira o nome da terceira pessoa: ");
	scanf("%s",&nome3);
	
	printf("insira sua altura: ");
	scanf("%f",&altura3);
	
	
	if(altura1<altura2 and altura1<altura3)
	printf("%s é o/a menor com %.2f metro(s)\n",nome1,altura1);
	
	else if(altura2<altura1 and altura2<altura3)
	printf("%s é o/a menor com %.2f metro(s)\n",nome2,altura2);
	
	else 
	printf("%s é o/a menor com %.2f metro(s)\n",nome3,altura3);
	
	system("pause");
	return 0;
	
	
}
