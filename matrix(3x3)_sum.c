#include <stdio.h>

int main(){
    int a[3][3], f=0;

    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            printf("type the term for line %d, column %d\n", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }


    for(int i=0; i<3;i++){
        for(int j=0;j<3;j++){
            f+=a[i][j];
        }
    }

    printf("%d\n", f);

    return 0;

}

