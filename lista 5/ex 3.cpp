#include<locale.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	char caractere;
	printf("digite um caractere de A até F: ");
	scanf("%c",&caractere);
	switch(caractere){
		case 'A': printf("caractere: A\n"); 
		printf("decimal: 10\n");
		printf("octal: 12\n");
		printf("binário: 1010\n");
		printf("hexadecimal: A\n");break;
		
		case 'B': printf("caractere: B\n"); 
		printf("decimal: 11\n");
		printf("octal: 13\n");
		printf("binário: 1011\n");
		printf("hexadecimal: B\n");break;
		
		case 'C': printf("caractere: C\n"); 
		printf("decimal: 12\n");
		printf("octal: 14\n");
		printf("binário: 1100\n");
		printf("hexadecimal: C\n");break;
		
		case 'D': printf("caractere: D\n"); 
		printf("decimal: 13\n");
		printf("octal: 15\n");
		printf("binário: 1101\n");
		printf("hexadecimal: D\n");break;
		
		case 'E': printf("caractere: E\n"); 
		printf("decimal: 14\n");
		printf("octal: 16\n");
		printf("binário: 1110\n");
		printf("hexadecimal: E\n");break;
		
		case 'F': printf("caractere: F\n"); 
		printf("decimal: 15\n");
		printf("octal: 17\n");
		printf("binário: 1111\n");
		printf("hexadecimal: F\n");break;
		
		default: printf("opção não possível");
	
	}
}
