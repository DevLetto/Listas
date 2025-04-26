#include <stdio.h>

int main(void) {
    int aluno = 0;
    float nota1, nota2, nota3, media;
    float mMedia = 0;

    do {
        printf("\nAluno %i\n", aluno + 1);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        
        if(nota1 >10 || nota2 > 10 || nota3 > 10){
        	
        	printf("\n\nNotas invalidas");
        	
		}else{
        	media = (nota1 + nota2 + nota3) / 3.0;
        	printf("Media do aluno %i: %.2f\n", aluno + 1, media);

     
       	 if (media > mMedia) {
       	     mMedia = media;
       	 }			
			
			
			
		}

      


        aluno++; 

    } while (aluno < 10);

   
    printf("\nA maior media calculada foi: %.2f\n", mMedia);

    return 0;
}
