#include <stdio.h>

int main(){
    int a, b;

    printf("type a number:\n");
    scanf("%d", &a);

    b=a%7;

    if(b==0){
        printf("divisible\n\n");
    } else {
        printf("not divisible\n\n");
    }

    return 0;
}
