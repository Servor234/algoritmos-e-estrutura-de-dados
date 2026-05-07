#include <stdio.h>

int main(){
    int a[10], b=0,c=0;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    for(int i=0;i<10;i++){
        if(a[i]<0){
            a[i]=-1*a[i];
        }
    }

    for(int i=0;i<10;i++){
        printf("%d\n", a[i]);
    }

    return 0;
}
