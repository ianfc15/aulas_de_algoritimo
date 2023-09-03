#include <stdio.h>
#include <math.h>

int main(){
    int valor;
    int ano, mes, dias;

    scanf("%i\n", &valor);

    ano = valor / 365;
    valor = valor - ano * 365;

    mes = valor / 30;
    valor = valor - mes * 30;

    dias = valor;

    printf("%i ano(s)\n", ano);
    printf("%i mes(es)\n", mes);
    printf("%i dia(s)\n", dias);

    return 0;
}