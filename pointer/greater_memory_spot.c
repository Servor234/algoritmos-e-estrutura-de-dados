#include <stdio.h>

int main(){
    int a,b;

    printf("Type two numbers\n");
    scanf("%d %d", &a,&b);

    if(&a>&b){
        printf("%d", a);
    }else{
        printf("%d", b);
    }

    return 0;
}
