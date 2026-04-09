#include <stdio.h>

int som(int a, int b){
    return a+b;
}

int dob(int d){
    return 2*d;
}

int main(){
    int a,b,c;

    scanf("%d %d", &a, &b);

    c=dob(som(a,b));

    printf("%d", c);
}
