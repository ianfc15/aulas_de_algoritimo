#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a, b ,c;
    int maiorab, maiorabc;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    maiorab = (a+b+abs(a-b))/2;
    maiorabc = (maiorab+c+abs(maiorab-c))/2;

    printf("%d eh o maior", maiorabc);

    return 0;
}