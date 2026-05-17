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
           if(a[i][j]!=a[j][i]){
            printf("Not simetrical\n");
            f++;
            break;
           }
        }
    }

    if(f==0){
        printf("simetrical\n");
    }

    return 0;
}

