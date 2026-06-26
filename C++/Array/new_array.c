#include <stdio.h>

int main(){
    int a[5], b[5], c[5];

    for(int i=0;i<5;i++){
        scanf("%d %d", &b[i], &c[i]);
    }

    for(int i=0;i<5;i++){
        a[i]=b[i]+c[i];
    }

    for(int i=0;i<5;i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
