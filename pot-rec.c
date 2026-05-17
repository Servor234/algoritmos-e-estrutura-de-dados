#include <stdio.h>

int exp(int a, int b){
    if(b==0){
        return 1;
    }else{
        return a*exp(a,b-1);
    }
}

int main(){
    int a,b;

    scanf("%d %d", &a, &b);

    printf("%d\n", exp(a,b));
}
