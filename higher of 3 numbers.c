#include <stdio.h>

int main(){
    int x=0,y=0,z=0;

    printf("type a number\n");
    scanf("%d", &x);

    printf("type a number\n");
    scanf("%d", &y);

    printf("type a number\n");
    scanf("%d", &z);

    if (x>y && x>z){
        printf("\nthe greatest number is:%d", x);
    } else if(y>x && y>z){
        printf("\nthe greatest number is:%d", y);
    } else if (z>x && z>y){
        printf("\nthe greatest number is:%d", z);
    } else {
        printf("\nthey are the same");
    }

    return 0;


}
