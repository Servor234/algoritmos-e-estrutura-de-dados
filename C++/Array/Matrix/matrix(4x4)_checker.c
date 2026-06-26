#include <stdio.h>

int main(){
    int a[4][4], search=0, repetition=0;

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            scanf("%d", &a[i][j]);
        }
    }

    printf("what value do you want to search?\n");
    scanf("%d", &search);

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==search){
                printf("value found in i:%d j:%d\n", i+1,j+1);
                repetition++;
            }
        }
    }

    printf("value found %d times\n", repetition);

    return 0;
}
