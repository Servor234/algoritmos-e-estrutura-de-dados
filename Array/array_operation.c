#include <stdio.h>

int main(){
    int a[10],b[10],c[10];

    for(int i=0;i<10;i++){
        scanf("%d %d", &a[i], &b[i]);
        c[i]=a[i]-b[i];
    }

    for(int i=0;i<10;i++){
        printf("%d\n", c[i]);
    }
}
