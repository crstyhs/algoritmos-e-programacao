#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	float Anacleto=1.5,Felisberto=1.1;
	int ano=0;
	do{ Anacleto=Anacleto+0.2;
	Felisberto=Felisberto+0.3;
	ano++;	}
	while(Anacleto>=Felisberto);
	printf("serão necessários %i anos para que Felisberto seja maior que Anacleto",ano);
}
