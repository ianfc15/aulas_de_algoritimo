#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int n1[10];
    int i;

    for(i = 0; i < 10; i++){
        scanf("%d", &n1[i]);
    }

    for(i = 0; i < 10; i++){
       if(n1[i] <= 0){
        n1[i] = 1;
       }
    }
    
    for(i = 0; i < 10; i++){
       printf("X[%d] = %d\n", i, n1[i]);
    }

    return 0;
}