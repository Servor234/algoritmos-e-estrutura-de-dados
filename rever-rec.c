#include <stdio.h>

int reverse(int a){
    int c,b;
    if(a<10){
        printf("%d", a%10);
        return a;
    } else{
        printf("%d", a%10);
        return reverse(a/10);
    }
}

int main(){
    int a;

    scanf("%d", &a);

    reverse(a);
}
