#include <stdio.h>

int main(){
    int a[10], maior=0,g=0;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);

        if(a[i]>maior){
            maior=a[i];
            g=i+1;
        }
    }

    for(int i=0;i<10;i++){
        printf("%d\n", a[i]);
    }

    printf("%d %d\n", maior,g);
}
