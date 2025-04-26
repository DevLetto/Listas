#include <stdio.h>

int main(void){
	
	int par = 0;
	int impar = 1;
	int conti, contp;
	
	printf("Numeros pares: ");
	do {
		
		printf("%i ", par);
		contp += par;
		
		par = par + 2;
	
	}while(par <= 38 );
	
	printf("\nA soma dos pares eh igual a: %i", contp);
	
	
	printf("\n\nNumeros impares: ");
	do{
		
		printf("%i ", impar);
		conti += impar;
		
		impar = impar + 2;
		
	}while(impar <= 39);
	
	printf("\nA soma dos impares eh igual a: %i\n", conti);
	
	return 0;
}
