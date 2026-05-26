#include <stdio.h>

int main(){
    int a[4][4],b[4][4],c[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d %d", &a[i][j], &b[i][j]);
            if(a[i][j]>b[i][j]){
                c[i][j]=a[i][j];
            }else{
                c[i][j]=b[i][j];
            }
        }
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}
