#include<stdio.h>
#include<locale.h>
#include<iostream>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int letra_a=0,branco=0,par=0,contador,contador2;
	char frase[80],repete[80];
	printf("digite uma frase: ");
	fgets(frase,80,stdin);
	for(contador=0;contador<80;contador++){
		if(frase[contador]==' ')branco++;
		if(frase[contador]=='a' or frase[contador]=='A')letra_a++;
		
		for(contador2=0;contador2<80;contador2++){
			if(frase[contador]==frase[contador2]){
			repete[contador]=frase[contador];
			}	}	}
			printf("o número de letras a é %i\n",letra_a);
			printf("o número de brancos é %i\n",branco);
			for(contador=0;contador<par;contador++){
				printf("as letras que repetem são: %c",repete[contador]);
			}
			system("pause");
			return 0;
	
}
