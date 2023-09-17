#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n, i, valor;
    valor = 1;

    scanf("%d", &n);

    for (i = 1; i <= n; i++){
        printf("%d %d %d PUM\n", valor, valor+1, valor+2);
        valor = valor + 4;
    }

    return 0;
}