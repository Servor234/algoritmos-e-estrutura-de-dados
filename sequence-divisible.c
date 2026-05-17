#include <stdio.h>
#include <limits.h>

int main(){
    int x, y=1;

    printf("Type how many number of the sequence you want\n");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        if(y%3==0 && y%5==0){
            printf("%d is divisible by 3 and a multiple of 5\n", y);
        }else if(y%7==0){
            printf("%d is divisible by 7\n", y);
        }
            y+=2;
    }
    return 0;
}
