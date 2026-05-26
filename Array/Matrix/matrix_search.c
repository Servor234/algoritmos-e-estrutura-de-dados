#include <stdio.h>

int main(){
    int a[5][5], c=0,d=0;
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    scanf("%d", &c);
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j]==c){
                printf("found in: [%d][%d]\n", i+1,j+1);
                d=1;
            }
        }
    }
    
    if(d==0){
        printf("not found\n");
    }
}
