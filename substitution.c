#include <stdio.h>

int som(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a-b;
}

int main(){
    int a=10,b=5;

    printf("%d\n", som(a,b));
    printf("%d\n", sub(a,b));

    return 0;
}
