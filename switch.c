#include <stdio.h>

void troca(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int a,b;

    scanf("%d %d", &a, &b);

    troca(&a,&b);

    printf("valor de a:%d, valor de b: %d\n", a, b);
}
