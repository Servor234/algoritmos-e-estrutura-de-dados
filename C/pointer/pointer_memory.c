#include <stdio.h>

int main(){
    int a,b;

    scanf("%d %d", &a,&b);

    if(&a>&b){
        printf("The greatest memory spot is of A\nits value: %d\n", a);
    }else{
        printf("The greatest memory spot is of B\nits value: %d\n", b);
    }
    return 0;
}
