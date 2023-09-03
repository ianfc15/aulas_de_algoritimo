#include <stdio.h>
#include <math.h>

int main(){
    int distancia;
    float combustivel, comsumo;

    scanf("%i\n", &distancia);
    scanf("%f\n", &combustivel);

    comsumo = distancia / combustivel;

    printf("%.3f km/l\n", comsumo);

    return 0;
}