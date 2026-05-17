#include <stdio.h>

int main(){
    int a,b,r,d;

    printf("type a number\n");
    scanf("%d", &a);

    printf("type another number\n");
    scanf("%d", &b);

    if(a>b){
        r=a-b;
    } else {
        r=b-a;
    }
    printf("the subtraction of the number is %d\n", r);

    if(b!=0){
        d=a/b;
    }
    printf("the division of the numbers is %d\n", d);

    return 0;
}
