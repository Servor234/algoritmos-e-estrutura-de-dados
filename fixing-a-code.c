#include <stdio.h>

int soma (int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main () {
    int x = soma(3, 4);

    printf("%d\n",x);

    return 0;
}
