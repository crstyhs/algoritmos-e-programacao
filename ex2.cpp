#include<stdio.h>
#include<iostream>
int main(){
	float RAIO,AREA,PI;
	printf("forneca o raio do circulo: ");
	scanf("%f", &RAIO);
	PI=3.14;
	AREA=PI*RAIO*RAIO;
	printf("a area do circulo e: %.2f\n", AREA);
	system("pause");
	return 0;	
	
}
