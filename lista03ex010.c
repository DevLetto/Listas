#include <stdio.h>
#include <locale.h>

int main(void){
	
	int senha, senhac;
	
	printf("Digite uma senha de 4 digitos: ");
	scanf("%i", &senha);
	
	if(senha > 9999 || senha < 1000){
		
		printf("\n\nA senha deve possuir 4 digitos!");
		
	}else {
		
		do{
			
			printf("\n\nDigite a senha novamente: ");
			scanf("%i", &senhac);
			
			if(senhac != senha){
				printf("\n\nINCORRETO, tente novamente");
			}
			
			
		}while(senhac != senha);
		
		
		printf("\n\nSenha correta!");
		
	}
	
	
	
	
	
	
	return 0;
}
