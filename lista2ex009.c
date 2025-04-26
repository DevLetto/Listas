#include <stdio.h>


int main(void){
	
	float nb1, nb2, media;
	
	printf("Calculadora de media");
	
	printf("\n\nDigite a sua nota do primeiro e do segundo bimestre respectivamente:\n");
	scanf("%f %f", &nb1, &nb2);
	
	if (nb1 > 10.0|| nb2 > 10.0){
		printf("\n\nValores invalidos\n");
		
	}else{
		
		media = (nb1 + nb2)/ 2.0;
	
		if(media == 6.0){
			printf("\n\nSua media foi %.2f, voce fara um exame para poder melhorar a nota\n", media);
		
		}else if(media > 6.0){
			printf("\n\nSua media foi %.2f, parabens, voce foi aprovado!\n", media);
		
		}else if(media < 6.0){
			printf("\n\nSua media foi %.2f, voce foi reprovado\n", media);
			
		}
	}
		
		
		
	
	
	
	
	
	return 0;
}
