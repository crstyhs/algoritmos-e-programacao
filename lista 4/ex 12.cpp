#include<stdio.h>
int main(){ 
	int opcao,votos_1=0,votos_2=0,votos_3=0,votos_4=0,votos_branco=0,votos_nulo=0,total_votos=0,contador;
	float porcentagem[6];
	do{
	printf("informe seu voto, use 1 para o candidato 1,2 para o candidato 2 , 3 para o candidato 3, 4 para o candidato 4, 5 para nulo , 6 voto em branco e 0 para finalizar: ");
	scanf("%i",&opcao);
	switch(opcao){
		case 1: votos_1++;total_votos++;break;
		case 2: votos_2++;total_votos++;break;
		case 3: votos_3++;total_votos++;break;
		case 4: votos_4++;total_votos++;break;
		case 5: votos_nulo++;total_votos++;break;
		case 6: votos_branco++;total_votos++;break;
	}}
	while(opcao!=0);

	porcentagem[0]=(1.0f*votos_1/total_votos)*100;
	porcentagem[1]=(1.0f*votos_2/total_votos)*100;
	porcentagem[2]=(1.0f*votos_3/total_votos)*100;
	porcentagem[3]=(1.0f*votos_4/total_votos)*100;
	porcentagem[4]=(1.0f*votos_nulo/total_votos)*100;
	porcentagem[5]=(1.0f*votos_branco/total_votos)*100;
	

	printf("o candidato 1 teve %i votos sendo %.2f %% do total\n",votos_1,porcentagem[0]);
	printf("o candidato 2 teve %i votos sendo %.2f %% do total\n",votos_2,porcentagem[1]);
	printf("o candidato 3 teve %i votos sendo %.2f %% do total\n",votos_3,porcentagem[2]);
	printf("o candidato 4 teve %i votos sendo %.2f %% do total\n",votos_4=0,porcentagem[3]);
	printf("%i votos foram nulos sendo %;2f %% do total\n",votos_nulo,porcentagem[4]);
	printf("%i votos foram brancos sendo %.2f %% do total\n",votos_branco,porcentagem[5]);
}
