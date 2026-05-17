#include <stdio.h>

int fib(int a){
    int c=1,b=0,d=a,f=0;
    while(d-2>0){
        b=f+c;
        f=c;
        c=b;
        d--;
    }
    return b;
}

int gfib(int a){
    int b=0;
    while(fib(b)<=a && !(fib(b+1)>a)){
        b++;
    }

    return fib(b);
}

void callfib(int a){
    printf("%d\n", fib(a));
}

void lesfib(int a){
    printf("%d\n", gfib(a));
}

int main(){
    int a;
    
    printf("Type the number for fibonacci\n");
    scanf("%d", &a);

    callfib(a);

    printf("%d\n", gfib(a));
}
