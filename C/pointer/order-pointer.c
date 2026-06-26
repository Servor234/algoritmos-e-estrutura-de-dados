#include <stdio.h>

void trip(int *a, int *b){
    int c=*a,d=*b;
    if(c>d){
    }else{
        *a=d;
        *b=c;
    }
}

int main(){
    int a,b;

    printf("Type two numbers\n");
    scanf("%d %d", &a, &b);

    trip(&a,&b);

    printf("ordering: %d %d", a,b);

    return 0;
}
