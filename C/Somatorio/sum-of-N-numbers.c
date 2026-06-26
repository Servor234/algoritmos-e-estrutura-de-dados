#include <stdio.h>

int main(){
    int x,y,i,f;

    printf("how many numbers?\n");
    scanf("%d", &x);

    while(i<x){
        y=y+(i+1);
        i++;
    }
    printf("%d\n", y);
}
