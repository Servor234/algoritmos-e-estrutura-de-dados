#include <stdio.h>

void order(int a, int b, int c){
    if(a>b && b>c){
        printf("%d %d %d\n", a, b, c);
    }else if(a>c && c>b){
        printf("%d %d %d\n", a, c, b);
    }else if(b>a && a>c){
        printf("%d %d %d\n", b, a, c);
    }else if(b>c && c>a){
        printf("%d %d %d\n", b, c, a);
    }else if(c>a && a>b){
        printf("%d %d %d\n", c, a, b);
    }else if(c>b && b>a){
        printf("%d %d %d\n", c, b, a);
    }
}

int main(){
    int a,b,c,d;

    printf("How many times do you want to sort numbers?\n");
    scanf("%d", &d);

    while(d>0){
        printf("Type three numbers\n");
        scanf("%d %d %d", &a, &b, &c);
        order(a,b,c);
        d--;
    }
}
