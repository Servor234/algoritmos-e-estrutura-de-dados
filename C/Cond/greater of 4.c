#include <stdio.h>

int main(){
    float x=0, y=0, z=0, m=0;

    printf("type a number\n");
    scanf("%f", &x);

    printf("type a number\n");
    scanf("%f", &y);

    printf("type a number\n");
    scanf("%f", &z);

    printf("type a number\n");
    scanf("%f", &m);

    if(x>y && x>z && x>m){
        printf("%.2f is the greatest number", x);
    } else if (y>z && y>m && y>x){
        printf("%.2f is the greatest number", y);
    } else if (z>x && z>y && z>m){
        printf("%.2f is the greatest number", z);
    } else {
        printf("%.2f is the greatest number", m);
    }

}
