#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, quantidade;
    float valor, soma;

    quantidade = 0;

    for (i = 1; i <= 6; i++){
        scanf("%f", &valor);

         if (valor > 0){
            quantidade++;
            soma = soma + valor;
         };
         
    }

    printf("%d valores positivos\n", quantidade);

    soma = soma / quantidade;

    printf("%.1f\n", soma);
    
    return 0;
}