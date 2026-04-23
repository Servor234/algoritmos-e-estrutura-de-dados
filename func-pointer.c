#include <stdio.h>

void two(int *b){
    *b=*b*2;
}

int main(){
    int a,*b=&a;

    scanf("%d", &a);

    two(&a);

    printf("%d\n", a);
}
