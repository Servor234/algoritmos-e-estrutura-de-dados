#include <stdio.h>

int main(){
    int a[4][4], b[4][4];

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            printf("type the term for line %d, column %d for A\n", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            if(j==3-i){
                printf("%d ", a[i][j]);
            }else{
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}

