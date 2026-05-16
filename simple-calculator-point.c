#include <stdio.h>

void calc(int *a, int *b){
    int c,d;
    c=*a+*b;
    d=*a**b;
    *a=c;
    *b=d;
}

int main(){
    int a,b;

    printf("Type two numbers for a calculator\n");
    scanf("%d %d", &a, &b);

    calc(&a,&b);

    printf("the sum is: %d\nthe multiplication is: %d\n", a,b);

    return 0;
}
