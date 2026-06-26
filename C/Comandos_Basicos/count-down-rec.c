#include <stdio.h>

void count(int a){
    if(a==0){
        printf("0\n");
    }else{
        printf("%d\n", a);
        count(a-1);
    }
}

int main(){
    int a;

    scanf("%d", &a);

    count(a-1);
}
