    #include <stdio.h>
    #include <math.h>
    #include <stdlib.h>

int main(){
    float n1, n2, n3, n4, media, notaexaame;

    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);

    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;

    printf("Media: %.1f\n", media);

    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media < 5.0){
        printf("Aluno reprovado.\n");
    }else{
        printf("Aluno em exame.\n");
        scanf("%f", &notaexaame);
        printf("Nota do exame: %.1f\n", notaexaame);
        media = (media + notaexaame) / 2;

            if (media >= 5.0)            {
                printf("Aluno aprovado.\n");
            }else{
                printf("Aluno reprovado.\n");
            }
        printf("Media final: %.1f\n", media);
            
    }
    
    return 0;
}