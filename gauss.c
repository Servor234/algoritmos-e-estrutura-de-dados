#include <stdio.h>

int gaus(int b){
    if(b-1==0){
        return 1;
    } else{
        return b+gaus(b-1);
    }
}

int main(){
    int a,b;

    scanf("%d", &b);

    printf("%d", gaus(b));
}
