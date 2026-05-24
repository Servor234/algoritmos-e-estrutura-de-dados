#include <stdio.h>

int main(){
    int a,b,*p=&a,*h=&b;

    printf("Type two numbers\n");
    scanf("%d %d", p,h);

    if(*p>*h){
        printf("the greatest number is %d\n", *p);
    }else{
        printf("the greatest number is %d\n", *h);
    }

    return 0;
}
