#include <stdio.h>
#include <math.h>

int main(){
    float x, p, a, d;
    const float y;

    printf("lado do seu quadrado?\n");
    scanf("%f", &x);

    p = x*4;
    a = x*x;
    d = x*sqrt(2);

    printf("\tseu perimetro eh %.0f\n\tsua area eh %.0f\n\tsua diagonal eh %.2f", p, a, d);
    return 0;
}
