#include <stdio.h>

int main(void){
	
	float l1, l2, l3;
	
	printf("Tipos de triangulo");
	
	printf("\n\nInsira o valor dos tres lados do triangulo:\n");
	scanf("%f %f %f", &l1, &l2, &l3);
	
	
	if(l1 != l2 && l2 != l3 && l3 != l1){
		printf("\n\nEsse eh um triangulo escaleno!\n");
		
		
	}else if(l1 == l2 && l2 == l3 && l3 == l1){
		
		printf("\n\nEsse eh um triangulo equilatero!\n");
		
	}else{
		
		printf("\n\nEsse eh um triangulo isosceles!\n");
	}
	
	
}
