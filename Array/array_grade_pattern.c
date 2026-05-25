#include <stdio.h>

int main(){
    int a[15];
    float d=0;

    for(int i=0;i<15;i++){
        scanf("%d", &a[i]);
        d+=a[i];
    }

    d/=15;
    printf("%f\n", d);

}
