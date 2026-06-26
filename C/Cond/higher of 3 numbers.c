#include <stdio.h>

int main(){
    int x=0,y=0,z=0;

    printf("type three number\n");
    scanf("%d %d %d", &x, &y, &z);

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
