#include <stdio.h>

int main(){
    int a[4][4], maior=0;

    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            printf("type the term for line %d, column %d\n", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }


    for(int i=0; i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]>maior){
                maior=a[i][j];
            }
        }
        printf("line %d: greatest element: %d\n", i+1,maior);
    }

    return 0;
}

