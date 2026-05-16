#include <stdio.h>

int main(){
    int a;

    printf("What is your age?\n");
    scanf("%d", &a);

    if(a>=18){
        printf("access allowed");
    } else {
        printf("access denied");
    }

    return 0;
}
