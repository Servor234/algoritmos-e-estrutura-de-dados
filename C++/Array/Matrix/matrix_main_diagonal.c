#include <stdio.h>

int main(){
    int a[4][4],d=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &a[i][j]);

            if(i==j){
                d+=a[i][j];
            }
        }
    }
    printf("%d\n", d);
}
