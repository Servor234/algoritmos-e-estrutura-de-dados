#include <stdio.h>

int main(){
    int a[5][5],f=0;

    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            printf("type the term for line %d, column %d for A\n", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<5;i++){
        for(int j=0;j<5;j++){
            if(i==0 || i==4){
                f+=a[i][j];
            }else if(j==0 || j==4){
                f+=a[i][j];
            }
        }
    }

    printf("%d\n", f);

    return 0;
}

