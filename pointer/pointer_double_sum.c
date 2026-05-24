#include <stdio.h>

int dousum(int *a,int *b){
    *a=2*(*a);
    *b=2*(*b);
    return *a+*b;
}

int main(){
    int a,b,res;

    printf("type two numbers\n");
    scanf("%d %d", &a,&b);

    res=dousum(&a,&b);

    printf("the sum of two times each number is: %d\n", res);

    return 0;
}
