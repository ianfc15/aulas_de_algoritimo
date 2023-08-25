#include <stdio.h>

int main(){
    int valor1;
    int valor2;
    int resultado;
    char operacao;

    printf("Insira uma operação:\n");
    scanf("%c", &operacao);

    printf("Insira dois valores:\n");
    printf("Valor 1:\n");
    scanf("%d", &valor1);
    printf("Valor 2:\n");
    scanf("%d", &valor2);

    if(operacao == '+'){
        printf("resultado: %d\n", valor1 + valor2);
    }else if(operacao == '-'){
        printf("resultado: %d\n", valor1 - valor2);
    }else if(operacao == '*'){
        printf("resultado: %d\n", valor1 * valor2);
    }else if(operacao == '/'){
        printf("resultado: %d\n", valor1 / valor2);
    }else if(operacao == '%'){
        printf("resultado: %d\n", valor1 % valor2);
    }

    printf("operacao: %c\n", operacao);
    printf("resultado: %d\n", resultado);

    return 0;
}