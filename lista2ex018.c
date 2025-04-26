#include <stdio.h>

int main(void){
	
	int temp;
	float sala, bonus;
	
	printf("Bonus da empresa");
	
	printf("\n\nQuanto voce recebe?\n");
	scanf("%f", &sala);
	
	printf("\n\nQuanto tempo voce trabalha na empresa(anos)?\n");
	scanf("%i", &temp);
	
	
	if(temp >= 5){
		
		bonus = sala * 0.20;
		printf("\n\nVoce ganhou um bonus de R$%.2f\n", bonus);
		
	}else {
		bonus = sala * 0.10;
		printf("\n\nVoce ganhou um bonus de R$%.2f\n", bonus);
	}
	
	
	
	return 0;
}
