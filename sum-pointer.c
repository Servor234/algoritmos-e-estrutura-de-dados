#include <stdio.h>

void sum(int a,int b, int *resp){
    *resp=a+b;
}

int main(){
    int a,b, resp;

    printf("Type two values\n");
    scanf("%d %d", &a,&b);

    sum(a,b,&resp);

    printf("the sum is:%d\n", resp);
    
    return 0;
}
