#include <stdio.h>

void big(int a,int b, int *ma){
    if(a>b){
        *ma=a;
    } else{
        *ma=b;
    }
}

int main(){
    int a,b,ma;

    printf("Type two values\n");
    scanf("%d %d", &a, &b);

    big(a,b,&ma);

    printf("The greatest value is: %d\n", ma);

    return 0;
}
