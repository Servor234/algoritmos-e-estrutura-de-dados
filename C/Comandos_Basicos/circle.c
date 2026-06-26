#include <stdio.h>

int main(){
    float r, p, a;

    printf("what is radius of your circle?\n");
    scanf("%f", &r);

    p=2*3.14*r;
    a=r*r*3.14;

    printf("%.2f %.2f", a, p);
    return 0;

}
