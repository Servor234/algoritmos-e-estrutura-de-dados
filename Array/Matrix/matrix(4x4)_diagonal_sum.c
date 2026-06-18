#include <stdio.h>

#define h 4

int main(){
    int a[h][h],f=0,d=0;

    for(int i=0; i<h;i++){
        for(int j=0;j<h;j++){
            printf("type the term for line %d, column %d for A\n", i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    for(int i=0; i<h;i++){
        for(int j=0;j<h;j++){
            if(j==(h-1)-i){
                f+=a[i][j];
            }else if(j==i){
                d+=a[i][j];
            }
        }
    }

    printf("main %d\nsecondary: %d\n", f,d);
    return 0;
}

