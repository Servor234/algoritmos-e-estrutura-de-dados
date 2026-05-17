#include <stdio.h>

int main(){
    int a, *b=&a;

    scanf("%d", &a);

    printf("esse eh o valor de a: %d\n", a);
    printf("esse eh o endereco de a: %p\n", &a);
    printf("esse eh o valor armazenado de b: %p\n", b);
    printf("esse eh o valor apontado de b: %d\n", *b);

    return 0;
}
