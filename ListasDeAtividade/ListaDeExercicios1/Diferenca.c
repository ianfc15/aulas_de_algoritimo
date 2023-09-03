#include <stdio.h>
#include <math.h>

int main(){
    int valor1,valor2,valor3,valor4,diferenca;

    scanf("%i\n", &valor1);
    scanf("%i\n", &valor2);
    scanf("%i\n", &valor3);
    scanf("%i\n", &valor4);

    diferenca = valor1 * valor2 - valor3 * valor4;
    
    printf("DIFERENCA = %i\n", diferenca);

    return 0;
}