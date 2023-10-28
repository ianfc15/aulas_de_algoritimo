#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i, v;
    int n[10];
    
    scanf("%d", &v);
    n[0] = v;

    for(i = 1; i <= 9; i++){
        n[i] = n[i-1]*2;
    }

    for(i = 0; i <= 9; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
