#include <stdio.h>

int main(void){
	
	int parc;
	float empre, sala, porc, val;
	
	printf("Emprestimo");
	
	printf("\nQual eh o valor do Emprestimo?\n");
	scanf("%f", &empre);
	
	printf("\n\nQuantas parcelas ira fazer?\n");
	scanf("%i", &parc);
	
	printf("\n\nQuanto voce recebe?\n");
	scanf("%f", &sala);	
	
	porc = sala * 0.30;
	val = empre / parc;
	
	printf("%.2f, %.2f", porc, val);
	
	if(val <= porc){
		
		printf("\n\nO seu emprestimo foi aprovado!\n");
		
	}else{
		printf("\n\nO seu emprestimo nao foi aprovado\n");
	}
	
	
	return 0;
}
