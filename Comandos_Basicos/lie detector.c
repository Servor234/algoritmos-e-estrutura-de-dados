#include <stdio.h>

int main(){
    int x, y;

    printf("for yes = 1\n for no = 0\n");

    printf("is sweating?\n");
    scanf("%d", &x);

    printf("what is the bpm?\n");
    scanf("%d", &y);

    if(x==1 && y>100){
        printf("possible lie");
    } else {
        printf("probably true");
    }

}
