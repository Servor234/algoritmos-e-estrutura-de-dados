#include <stdio.h>

int main(){
    int a[4][4], maior=0,d=0,g=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &a[i][j]);
            if(a[i][j]>maior){
                maior=a[i][j];
                d=i;
                g=j;
            }
        }
    }

    printf("%d [%d][%d]\n", maior,d+1,g+1);
}
