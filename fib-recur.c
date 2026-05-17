#include <stdio.h>

int fib(int a){
    if(a-1<=0 || a-2<=0){
        return 1;
    } else{
        return fib(a-1)+fib(a-2);
    }
}

int main(){
    int a;

    printf("Type the number you want of fibonacci\n");
    scanf("%d", &a);

    printf("%d\n", fib(a));

    return 0;
}
