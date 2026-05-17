#include <stdio.h>

int sum(int a){
    if(a-1==0){
        return 1;
    }else{
        return a+sum(a-1);
    }
}

int main(){
    int a;

    scanf("%d", &a);

    printf("%d", sum(a));
}
