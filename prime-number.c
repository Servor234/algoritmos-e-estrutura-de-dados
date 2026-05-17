#include <stdio.h>

int prim(int a){
    if(a!=1 && a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0){
        return 1;
    } else if(a==2 || a==3 || a==5 || a==7){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int a,b;

    scanf("%d", &a);

    b=prim(a);

    if(b==1){
        printf("Prime number\n");
    } else{
        printf("Not prime\n");
    }
}
