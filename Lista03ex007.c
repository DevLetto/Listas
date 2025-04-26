#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num = 0;
	int maior = 0;
	int menor = 999;
	int cont = 0;
	
	do {
		
		printf("DIgite quantos numeros desejar ate ser negativo: ");
		scanf("%i", &num);
		
		if (num > maior){
			maior = num;
		}
		
		if((num < menor) && (num > -1)) {
			menor = num;
		}
		
		
		
	}while(num > -1);
	
	printf("\nO maior número é: %i", maior);
	printf("\nO menor número é: %i", menor);
	

	
	return 0;
}
