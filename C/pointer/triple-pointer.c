#include <stdio.h>

void trip(int *a, int *b){
    *a=*a*3;
    *b=*b*3;
}

int main(){
    int a,b;

    printf("Type two number\n");
    scanf("%d %d", &a, &b);

    trip(&a,&b);

    printf("the triple of the first is: %d\nthe triple of the second is: %d", a,b);
    
    return 0;
}
