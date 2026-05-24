#include <stdio.h>

void sum(int *a,int *b){
    *a=*a+*b;
}

int main(){
    int a,b;

    printf("Type two numbers\n");
    scanf("%d %d", &a,&b);

    sum(&a,&b);

    printf("the sum is: %d\nAnd the second value is: %d\n", a,b);

    return 0;
}
