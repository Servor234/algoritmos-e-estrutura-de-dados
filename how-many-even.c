#include <stdio.h>

int even(int a){
    if(a%2==0){
        return 1;
    }else {
        return 0;
    }
}

int main(){
    int a,b=0;

    for(int i; i<3; i++){
    printf("Type a number\n);
    scanf("%d", &a);
    b=b+even(a);
    }
    printf("%d", b);
}
