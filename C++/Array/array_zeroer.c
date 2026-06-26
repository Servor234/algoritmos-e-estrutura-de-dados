#include <stdio.h>

int main(){
    int a[10];

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
        if(a[i]<0){
            a[i]=0;
        }
    }

    for(int i=0;i<10;i++){
        printf("%d\n", a[i]);
    }
}
