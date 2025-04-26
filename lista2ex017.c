#include <stdio.h>

int main(void){
	
	int sex;
	float peso, alt;
	
	printf("Peso ideal");
	
	printf("Informe seu sexo;\n1-Feminino\n2-Masculino\n");
	scanf("%i", &sex);
	
	printf("\n\nInforme sua altura: ");
	scanf("%f", &alt);
	
	if(sex == 1){
		
		peso = (62.1 * alt) - 44.7;
		printf("\n\nSeu peso ideal eh: %.2f\n", peso);
		
	}else if(sex == 2){
		
		peso = (72.7 * alt) - 58;
		printf("\n\nSeu peso ideal eh: %.2f\n", peso);
		
	}else{
		
		printf("\n\nOpcao invalida\n");
		
	}
	
	
	
	
	return 0;
}
