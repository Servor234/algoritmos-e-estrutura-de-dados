#include <stdio.h>

void troca(int *c, int *f){
    int temp;
    temp=*c;
    *c=*f;
    *f=temp;
}

int main(){
    int a,b,*c=&b,*f=&a;

    scanf("%d %d", &a, &b);

    troca(c,f);

    printf("%d %d\n", a, b);
    
    return 0;
}
