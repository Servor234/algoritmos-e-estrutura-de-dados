#include <stdio.h>

int main(){
    int a=0,b=1,*c=&a,*f=&b;

    printf("which factorial?\n");
    scanf("%d", c);

    for(int i=1;i<=*c;i++){
        *f*=i;
    }
    printf("the factorial of %d is: %d\n", *c, *f);

    return 0;
}
