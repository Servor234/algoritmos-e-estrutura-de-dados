#include <stdio.h>

void imp(int *a){
    if(*a%2==0){
        *a=0;
    }else{
        *a=2*(*a);
    }
}

int main(){
    int a;

    printf("Type a number\n");
    scanf("%d", &a);

    imp(&a);

    printf("%d\n", a);

    return 0;
}
