#include<stdio.h>
#include<iostream>
int main(){
	float NOTA_A, NOTA_B, MEDIA;
	printf("insira a nota A: ");
	scanf("%f", &NOTA_A);
	if (NOTA_A>10 or NOTA_A<0) return 0;
	else
	printf("insira a nota B: ");
	scanf("%f", &NOTA_B);
	if (NOTA_B>10 or NOTA_B<0) return 0;
	else
	MEDIA=(3.5*NOTA_A+7.5*NOTA_B)/11;
	printf("a media e:%.2f\n",MEDIA);
	system("pause");
	return 0;
}
