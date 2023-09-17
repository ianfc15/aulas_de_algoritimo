#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i;

    for (i = 2; i <= 100; i += 2) {
        printf("%d\n", i);
    }

    // solução com o dobro de repetições
    /*for(i = 1;i <= 100;i = i + 1){
        if(i%2 == 0){
            printf("%d\n", i);
        }
    } */
    // i += 2 é a mesma coisa de i = i + 2
    
    return 0;
}