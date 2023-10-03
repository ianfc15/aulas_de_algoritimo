#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int soma(int a, int b){
    return a + b;
}

int subtracao(int a, int b){
    return a - b;
}

int main(){
    int n1, n2, n3;
    char operacao;

    scanf("%s", &operacao);

    scanf("%d", &n1);
    scanf("%d", &n2);

    if(operacao == '+'){
        printf("%d", soma(n1,n2));
    }else if(operacao == '-'){
        printf("%d", subtracao(n1,n2));
    }
    
    return 0;
}