#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int mes,dia;
	printf("informe o mês de nascimento em números: ");
	scanf("%i",&mes);
	printf("informe o dia de nascimento: ");
	scanf("%i",&dia);
	switch(mes){ case 1: if(dia>0 and dia<=20) printf("seu signo é Capricórnio");
	else if(dia>=21 and dia<=31) printf("seu signo é Aquário");
	else printf("data inválida");break;
	
	case 2:  if(dia>0 and dia<=18) printf("seu signo é Aquário");
	else if(dia>=19 and dia<=29) printf("seu signo é Peixes");
	else printf("data inválida");break;
	
	case 3: if(dia>0 and dia<=20) printf("seu signo é Peixes");
	else if(dia>=21 and dia<=31) printf("seu signo é Áries");
	else printf("data inválida");break;
	
	case 4: if(dia>0 and dia<=20) printf("seu signo é Áries");
	else if(dia>=21 and dia<=30) printf("seu signo é Touro");
	else printf("data inválida");break;
	
	case 5: if(dia>0 and dia<=20) printf("seu signo é Touro");
	else if(dia>=21 and dia<=31) printf("seu signo é Gêmeos");
	else printf("data inválida");break;
	
	case 6: if(dia>0 and dia<=20) printf("seu signo é Gêmeos");
	else if(dia>=21 and dia<=30) printf("seu signo é Câncer");
	else printf("data inválida");break;
	
	case 7: if(dia>0 and dia<=22) printf("seu signo é Câncer");
	else if(dia>=23 and dia<=31) printf("seu signo é Leão");
	else printf("data inválida");break;
	
	case 8: if(dia>0 and dia<=22) printf("seu signo é Leão");
	else if(dia>=23 and dia<=31) printf("seu signo é Virgem");
	else printf("data inválida");break;
	
	case 9: if(dia>0 and dia<=22) printf("seu signo é Virgem");
	else if(dia>=23 and dia<=30) printf("seu signo é Libra");
	else printf("data inválida");break;
	
	case 10: if(dia>0 and dia<=22) printf("seu signo é Libra");
	else if(dia>=23 and dia<=31) printf("seu signo é Escorpião");
	else printf("data inválida");break;
	
	case 11: if(dia>0 and dia<=21) printf("seu signo é Escorpião");
	else if(dia>=22 and dia<=30) printf("seu signo é Sagitário");
	else printf("data inválida");break;
	
	case 12: if(dia>0 and dia<=21) printf("seu signo é Sagitário");
	else if(dia>=22 and dia<=31) printf("seu signo é Capricórnio");
	else printf("data inválida");break;
	
	default: printf("mês informado incorretamente");
	}
	system("pause");
	return 0;
}
