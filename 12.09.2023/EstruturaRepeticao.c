#include <stdio.h>
#include <math.h>

int main(){
    int i;
    for(i = 1; i <= 3; i++){
        printf("MENSAGEM!!!\n");
    }
    printf("\n");

    //Usado quando não se sabe o numero de repetições que o codigo tera//
    i = 1;
    while (i<=3){
        printf("MENSAGEM!!!\n");
        i++;
    }
    

    return 0;
}
