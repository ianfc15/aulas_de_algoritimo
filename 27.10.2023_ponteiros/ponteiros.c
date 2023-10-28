#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void incrementaVariavel(int* a){
    // a = 1000;
    *a = 1000;
}

int main(){
    int *p, *p1;
    int c = 5;

    // & e un ponteiro
    p = &c;

    printf("%d\n", c);
    printf("%d\n", &c);
    printf("%d\n", p);
    printf("%d\n", *p);
    printf("%p\n", p);

    // alterar valor da variavel pelo ponteiro

    *p = 10;

    printf("%d\n", c);

    p1 = p;
    printf("%d\n", p1);
    printf("%d\n", *p1);

    incrementaVariavel(c);
    printf("%d\n", c);

    incrementaVariavel(&c);
    printf("%d\n", c);
    

    return 0;
}