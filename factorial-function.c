#include <stdio.h>

int fac(int i){
    if(i*(i-1)!=0){
        return i;
    } else{
        return 1;
    }
}

int main(){
    int a,c=1;

    printf("Type a number for its factorial\n");
    scanf("%d", &a);

    for(int i=a; i>0; i--){
        c*=fac(i);
    }
    printf("%d", c);
}
