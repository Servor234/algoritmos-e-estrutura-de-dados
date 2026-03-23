#include <stdio.h>

int main(){
    float x=1,y,z;
    float h=1, t=1;

    for(int i=0; i<=49;i++){
        h+=2;
        t++;
        z=(i+2)/h;
        x=x+z;
        printf("%f %f %f\n", t, z, h);
    }

    printf("%f", x);
}
