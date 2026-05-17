#include <stdio.h>

int main(){
    int a[2][3], b[2][3], maior=0;

    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("type the term for line %d, column %d for A\n", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("type the term for line %d, column %d for B\n", i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }


    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            a[i][j]=a[i][j]+b[i][j];
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

