#include <stdio.h>

int pot(int a, int b){
    if(b<=0){
        return 1;
    } else{
        return a*pot(a,b-1);
    }
}

int main(){
    int a,b;

    printf("Type two number\n");
    scanf("%d %d", &a,&b);

    printf("%d\n", pot(a,b));

    return 0;
}
