#include <stdio.h>

void big(int *a,int *b){
    int t;

    if(*a>*b){
    }else{
        t=*b;
        *b=*a;
        *a=t;
    }
}

int main(){
    int a,b;

    printf("Type two values\n");
    scanf("%d %d", &a,&b);

    big(&a,&b);

    printf("The greatest is %d\nThe smallest is %d\n", a,b);

    return 0;
}
