#include <stdio.h>

int main(){
    int a[2][3];

    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("type the term for line %d, column %d\n", i,j);
            scanf("%d", &a[i][j]);
        }
    }


    for(int i=0; i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;

}

