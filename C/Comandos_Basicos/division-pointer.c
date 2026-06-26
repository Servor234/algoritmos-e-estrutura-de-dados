#include <stdio.h>

void div(int a, int b, int *res, int *quo){
    *res=a%b;
    *quo=a/b;
}

int main(){
    int a,b,quo,res;

    printf("Type two numbers for division\n");
    scanf("%d %d", &a, &b);

    div(a,b,&res,&quo);

    printf("the result of the division is:%d\n the rest of the division is:%d\n", quo, res);

    return 0;
}
