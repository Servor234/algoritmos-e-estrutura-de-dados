#include <stdio.h>

int main(){
    int a[10],d=0;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
        if(a[i]%2==0){
            d++;
        }
    }

    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            printf("%d\n", a[i]);
        }
    }

    printf("%d\n", d);
}
