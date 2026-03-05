#include <stdio.h>
#include <math.h>

int main(){
    float x, p, a, d;
    const float y;

    printf("what is the side of your square?\n");
    scanf("%f", &x);

    p = x*4;
    a = x*x;
    d = x*sqrt(2);

    printf("\tyour perimetrer is %.0f\n\tyour area is %.0f\n\tyour diagonal is %.2f", p, a, d);
    return 0;
}
