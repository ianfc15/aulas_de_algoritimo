#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int x,y,i,valor,soma,minimo,maximo;

    soma = 0;   

    scanf("%d%d", &x, &y);

    if(x < y){
        minimo = x;
        maximo = y;
    }else{
        minimo = y;
        maximo = x;
    }

    for (i = (minimo + 1); i < maximo; i++){
        if ((i % 2) != 0){
            soma = soma + i;
        }
    }

    printf("%d", soma);

    return 0;
}