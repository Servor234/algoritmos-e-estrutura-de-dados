#include <stdio.h>

int main(){
    int x,y;

    do{
        printf("type a number\n");
        scanf("%d", &x);
        if(x<0){
            printf("invalid number\n");
        }
    }while(x<0);
    return 0;
}
