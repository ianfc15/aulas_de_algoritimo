#include <stdio.h>

int main(){
    int valor1;
    int valor2;
    int resultado1, resultado2, resultado3, resultado4, resultado5;

    valor1 = 10;
    valor2 = 2;

    // soma: resultado = valor1 + valor2;
    resultado1 = valor1 + valor2;
    printf("resultado: %d\n", resultado1);

    // subtração: resultado = valor1 - valor2;
    resultado2 = valor1 - valor2;
    printf("resultado: %d\n", resultado2);

    // multiplicaçõa: resultado = valor1 * valor2;
    resultado3 = valor1 * valor2;
    printf("resultado: %d\n", resultado3);

    // divisão: resultado = valor1 / valor2;
    resultado4 = valor1 / valor2;
    printf("resultado: %d\n", resultado4);

    // resto da divisão: resultado = valor1 % valor2;
    resultado5 = valor1 % valor2;
    printf("resultado: %d\n", resultado5);


    return 0;
}