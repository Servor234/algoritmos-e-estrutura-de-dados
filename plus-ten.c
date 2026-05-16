#include <stdio.h>

int main(){
    int a,*b=&a;
    
    printf("Type the value of A\n");
    scanf("%d", &a);

    *b=a+10;

    printf("%d\n", a);
    
    return 0;
}
