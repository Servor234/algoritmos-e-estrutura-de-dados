#include <stdio.h>

void troc(int *a,int *b){
    int t;

    t=*a;
    *a=*b;
    *b=t;
}

int main(){
    int a,b;

    printf("Type two values\n");
    scanf("%d %d", &a,&b);

    troc(&a,&b);

    printf("first is now: %d\nsecond is now: %d\n", a,b);

  return 0;
}
