#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
    int num, i;
    
    printf("Quantos numeros voce quer inserir? ");
    scanf("%i", &num);
    
    // Aloca memória para o array de tamanho n
    int *arr = (int*) malloc(num * sizeof(int));
    

    if (arr == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    // Lendo os números
    printf("Digite os %i numeros:\n", num);
    for (i = 0; i < num; i++) {
        scanf("%i", &arr[i]);
    }

	int maior = arr[0];
    
    for(i = 1; i < num; i++){
    	if (arr[i] > maior){
    		maior = arr[i];
    		
		}
    	
	}
	printf("\nO maior numero eh : %i", maior);
    
    
    
    
    
    
    
    
    
    
    
    free(arr);

    return 0;
}
