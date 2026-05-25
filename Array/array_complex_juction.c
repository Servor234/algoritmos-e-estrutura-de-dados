#include <stdio.h>
#include <limits.h>

int main(){
    int a[5],maior=0,menor=INT_MAX;
    float d=0;

    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
        if(a[i]>maior){
            maior=a[i];
        }
        if(a[i]<menor){
            menor=a[i];
        }
        d+=a[i];
    }

    for(int i=0;i<5;i++){
        printf("%d\n", a[i]);
    }
    d/=5;
    printf("%d %d %f\n", maior,menor,d);
}
