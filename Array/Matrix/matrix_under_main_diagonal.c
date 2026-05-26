#include <stdio.h>

int main(){
    int a[3][3],d=0;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d", &a[i][j]);
            if(j<i){
                d+=a[i][j];
            }
        }
    }

    printf("%d\n", d);
}
