#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, cha, concorente, acertos;

    acertos = 0;

    scanf("%d", &cha);

    for (i = 1; i <= 5; i++){
        scanf("%d", &concorente);
        if (concorente == cha){
            acertos++;
        }
        
    }
    
    printf("%d", acertos);

    return 0;
}