#include <stdio.h>

int som(int a, int n){
    if(n==a){
        printf("%d\n", n);
        return 0;
    } else {
        printf("%d\n", n);
        return som(a, n+1);
    }
}

int main(){
    int a,n;

    scanf("%d %d", &a, &n);

    som(a,n);
}
