#include <stdio.h>

int main() {
    int a, cem, cinq, vin, dec, cin, d, u=0;

    printf("quanto quer retirar?\n");
    scanf("%d", &a);

    cem=a/100;
    a=a%100;

    cinq=a/50;
    a=a%50;

    vin=a/20;
    a=a%20;

    dec=a/10;
    a=a%10;

    cin=a/5;
    a=a%5;

    d=a/2;
    a=a%2;

    u=u+1;
    a=a-1;

    printf("%d notas de cem\n%d notas de cinquenta\n%d notas de vinte\n%d notas de dez\n%d notas de cinco\n%d notas de dois\n%d notas de um\n", cem,cinq, vin, dec, cin, d, u);
    printf("%d", a);
}
