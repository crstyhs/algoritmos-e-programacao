#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int mes,dia;
	printf("informe o m�s de nascimento em n�meros: ");
	scanf("%i",&mes);
	printf("informe o dia de nascimento: ");
	scanf("%i",&dia);
	switch(mes){ case 1: if(dia>0 and dia<=20) printf("seu signo � Capric�rnio");
	else if(dia>=21 and dia<=31) printf("seu signo � Aqu�rio");
	else printf("data inv�lida");break;
	
	case 2:  if(dia>0 and dia<=18) printf("seu signo � Aqu�rio");
	else if(dia>=19 and dia<=29) printf("seu signo � Peixes");
	else printf("data inv�lida");break;
	
	case 3: if(dia>0 and dia<=20) printf("seu signo � Peixes");
	else if(dia>=21 and dia<=31) printf("seu signo � �ries");
	else printf("data inv�lida");break;
	
	case 4: if(dia>0 and dia<=20) printf("seu signo � �ries");
	else if(dia>=21 and dia<=30) printf("seu signo � Touro");
	else printf("data inv�lida");break;
	
	case 5: if(dia>0 and dia<=20) printf("seu signo � Touro");
	else if(dia>=21 and dia<=31) printf("seu signo � G�meos");
	else printf("data inv�lida");break;
	
	case 6: if(dia>0 and dia<=20) printf("seu signo � G�meos");
	else if(dia>=21 and dia<=30) printf("seu signo � C�ncer");
	else printf("data inv�lida");break;
	
	case 7: if(dia>0 and dia<=22) printf("seu signo � C�ncer");
	else if(dia>=23 and dia<=31) printf("seu signo � Le�o");
	else printf("data inv�lida");break;
	
	case 8: if(dia>0 and dia<=22) printf("seu signo � Le�o");
	else if(dia>=23 and dia<=31) printf("seu signo � Virgem");
	else printf("data inv�lida");break;
	
	case 9: if(dia>0 and dia<=22) printf("seu signo � Virgem");
	else if(dia>=23 and dia<=30) printf("seu signo � Libra");
	else printf("data inv�lida");break;
	
	case 10: if(dia>0 and dia<=22) printf("seu signo � Libra");
	else if(dia>=23 and dia<=31) printf("seu signo � Escorpi�o");
	else printf("data inv�lida");break;
	
	case 11: if(dia>0 and dia<=21) printf("seu signo � Escorpi�o");
	else if(dia>=22 and dia<=30) printf("seu signo � Sagit�rio");
	else printf("data inv�lida");break;
	
	case 12: if(dia>0 and dia<=21) printf("seu signo � Sagit�rio");
	else if(dia>=22 and dia<=31) printf("seu signo � Capric�rnio");
	else printf("data inv�lida");break;
	
	default: printf("m�s informado incorretamente");
	}
	system("pause");
	return 0;
}
