#include <stdio.h>

int main(){
    int a[10],d=0, t=0;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &d);

    for(int i=0;i<10;i++){
        if(a[i]%d==0){
            printf("%d\n", a[i]);
            t++;
        }
    }
    printf("%d\n", t);
}
