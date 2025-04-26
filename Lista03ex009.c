#include <stdio.h>
#include <locale.h>

int main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	float km, ms, ckm, cms;
	int opc;
	int final = 0;
	int fim1 = 0;
	
	
	printf("Conversor de Velocidade(Km/h e M/s)\n");
	
	do{
	
		printf("\nDigite 1 se deseja converter Km/h para M/s");
		printf("\nDigite 2 se deseja converter M/s para Km/h\n");
		scanf("%i", &opc);
	
		if( (opc < 1) || (opc > 2) ){
		
			printf("\n\nEscolha uma opção!!");
		
		}else{
		
			do {
				
				if(opc == 1){
				
					printf("\n\nDigite um valor em Km/h: ");
					scanf("%f", &km);
				
					cms = km / 3.6;
				
					printf("\n\n %.2fkm/h >> m/s = %.2fm/s", km, cms);
				
				}
				
				if(opc == 2){
					
					printf("\n\nDigite um valor em m/s: ");
					scanf("%f", &ms);
					
					ckm = ms * 3.6;
					
					printf("\n\n %.2fm/s >> Km/h = %.2fKm/h", ms, ckm);
				
					
					
				}
			
				printf("\n\nDigite 0 para continuar na conversãoo ou um numero diferente de zero para trocar a conversao: ");
				scanf("%i", &final);
		
		
			}while (final == 0);
	    }
	    
		printf("\n\nDigite 0 para recomeçar ou qualquer numero para finalizar o programa: ");
		scanf("%i", &fim1);
		
		
	}while(fim1 == 0);
		

	
	
	
	return 0;
}
