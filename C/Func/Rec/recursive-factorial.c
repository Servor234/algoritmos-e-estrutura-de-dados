#include <stdio.h>

int fac(int i){
    if(i*(i-1)!=0){
        return i*fac(i-1);
        printf("a\n");
    } else{
        return 1;
        printf("b\n");
    }
}

int main(){
    int a,c=1;

    printf("Type a number for its factorial\n");
    scanf("%d", &a);

    c=fac(a);

    printf("%d", c);
}
