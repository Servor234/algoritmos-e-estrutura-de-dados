#include <stdio.h>

int main() {
    float d, i, g, r;

    printf("what is your deposit?\n");
    scanf("%f", &d);

    printf("what is the interest rate?\n");
    scanf("%f", &i);

    g=d*(i/100);
    r=g+d;

    printf("\n\tyour deposit increased in %.2f\n\tyour new total is %.2f", g, r);

    return 0;
}
