#include <stdio.h>

int pot(int a){
    return a*a;
}

int sum(int a, int b){
    return pot(a)+pot(b);
}

int main(){
    int a,b;

    printf("Type two numbers to sum their squares\n");
    scanf("%d %d", &a,&b);

    printf("%d\n", sum(a,b));

    return 0;
}
