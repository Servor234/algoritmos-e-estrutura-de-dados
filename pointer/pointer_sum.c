#include <stdio.h>

int main(){
    int *p,*f,a,b;

    printf("Type 2 numbers\n");
    scanf("%d %d", &a,&b);

    p=&a;
    f=&b;

    printf("sum of numbers: %d\n", *p+*f);

    return 0;
}
