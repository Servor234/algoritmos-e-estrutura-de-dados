#include <stdio.h>

int som(int a){
    int n;
    if(a==0){
        return 0;
    } else {
        printf("%d\n", a);
        return 1+som(a-1);
    }
}

int main(){
    int a;

    scanf("%d", &a);

    som(a);
}
