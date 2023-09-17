#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, valor, calculo;

    scanf("%d", &valor);

    for (i = 1; i <= 10; i++){
        calculo = i * valor;
        printf("%d x %d = %d\n", i, valor, calculo);
    }
    
    return 0;
}