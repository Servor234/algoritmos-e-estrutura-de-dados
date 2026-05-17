#include <stdio.h>

void tiper(int *a, int *b){
    int c,d;

    printf("Type two values\n");
    scanf("%d %d", &c, &d);

    *a=c;
    *b=d;
}

int main(){
    int a,b;

    tiper(&a,&b);

    printf("the value of a is:%d\nthe value of b is:%d\n", a,b);

    return 0;
}
