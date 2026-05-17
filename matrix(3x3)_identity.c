#include <stdio.h>

#define h 3

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
           if(i==j){
            if(a[i][j]!=1){
                f++;
            }
           }else{
            if(a[i][j]!=0){
                f++;
            }
           }
        }
    }

    if(f==0){
        printf("is identity\n");
    }else{
        printf("not identity\n");
    }

    return 0;
}

