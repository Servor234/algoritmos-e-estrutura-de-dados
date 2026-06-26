#include <stdio.h>

void sum(int *a, int *b,int *c){
    *c=*a+*b;
}

int main(){
    int a,b,res;

    printf("Type two values\n");
    scanf("%d %d", &a,&b);

    sum(&a,&b,&res);

    printf("the sum of %d and %d is: %d\n", a,b,res);

    return 0;
}
