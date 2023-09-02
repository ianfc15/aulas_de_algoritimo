#include <stdio.h>
#include <math.h>

int main(){
    double area;
    double raio;
    double pi = 3.14159;

    printf("Digite o raio da circunferencia: \n");
    scanf("%f", raio);
    area = pi * (raio * raio);

    prinf("%.4f", area);

    return 0;
}