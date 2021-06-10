#include<stdio.h>
#include<iostream>
int main(){
	int contador,contador2;
	for(contador=1;contador<=6;contador++){
		for(contador2=1;contador2<=6;contador2++){
			if(contador+contador2==7) printf("combinacao do dado com valor %i e outro %i\n",contador,contador2);
		}
		
	}
	system("pause");
	return 0;
}
