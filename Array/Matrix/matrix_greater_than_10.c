#include <stdio.h>

int main(){
    int a[4][4],d=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]>10){
                printf("%d\n", a[i][j]);
                d++;
            }
        }
    }

    printf("%d\n", d);
}
