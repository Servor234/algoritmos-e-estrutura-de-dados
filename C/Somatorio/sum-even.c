#include <stdio.h>

int par(int a){
    int b=0;
    for(int i; i<a; i++){
        b+=2;
    }
    return b;
}


void exe(int a){
    printf("%d\n", par(a));
}

int main(){
    int a;

    scanf("%d", &a);

    exe(a);
}
