#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");	
	int sexo,nascidas,mortes=0,masculino=0,curto_tempo=0,tempo;
	float porcentagem_mortes,porcentagem_masculino,porcentagem_curto_tempo;
	printf("informe o n�mero de crian�as nascidas no per�odo: ");
	scanf("%i",&nascidas);
	do{
		printf("se houve uma morte informe o sexo da crian�a sendo f feminino, m para masculino e se n�o houve mais mortes digite v: ");
		setbuf(stdin,0);
		scanf("%c",&sexo);
			if(sexo=='v'){
		
		porcentagem_mortes= (1.0f*mortes/nascidas)*100;
		porcentagem_masculino= (1.0f*masculino/nascidas)*100;
		porcentagem_curto_tempo= (1.0f*curto_tempo/nascidas)*100;
		printf("a porcentagem de mortos foi %.2f %% \nporcenta de mortes de crian�as do sexo masculino foi %.2f %% \nporcentagem de morte de crian�as com menos de 25 meses %.2f %%",porcentagem_mortes,porcentagem_masculino,porcentagem_curto_tempo);
		return 0;}
		if(sexo=='m') masculino++ ;
		printf("informe o tempo de vida da crian�a morte em meses: ");
		scanf("%i",&tempo);
		if(tempo<=24) curto_tempo++;
		mortes++;
	
	}
	while(1!=0);
	system("pause");
	return 0;
	
}
