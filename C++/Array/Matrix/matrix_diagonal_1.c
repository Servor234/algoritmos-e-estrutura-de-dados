#include <stdio.h>

int main(){
    int a[5][5]={0};

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                a[i][j]=1;
            }else if(j==4-i){
                a[i][j]=1;
            }
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
