#include <stdio.h>

int mult(int a, int b){
    if(b-1==0){
        return a;
    } else{
        return a+mult(a,b-1);
    }
}

int main(){
    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d\n", mult(a,b));
}
