#include <stdio.h>
#include <limits.h>

int main(){
    int a[10], maior=0,menor=INT_MAX;

    for(int i=0;i<10;i++){
            scanf("%d", &a[i]);
        if(a[i]>maior){
            maior=a[i];
        }
        if(a[i]<menor){
            menor=a[i];
        }
    }

    printf("%d %d", maior, menor);

}
