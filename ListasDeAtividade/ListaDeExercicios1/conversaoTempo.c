#include <stdio.h>
#include <math.h>

int main(){
    int valor;
    int horas, minutos, segundos;

    scanf("%i\n", &valor);
    horas = valor / 3600;
    valor = valor - horas * 3600;

    minutos = valor / 60;
    valor = valor - minutos * 60;

    segundos = valor;

    printf("%i:%i:%i\n", horas, minutos, segundos);

    return 0;
}