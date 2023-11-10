#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    // alocação estatica
    char string[20];
    printf("insira uma string:\n");
    scanf("%s", string);
    printf("%s\n", string);

    // alocação dinamica
    char* string_dinamica;
    string_dinamica = (char*) malloc(20);

    return 0;
}