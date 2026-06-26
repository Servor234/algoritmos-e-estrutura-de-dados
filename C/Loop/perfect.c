#include <stdio.h>

int per (int a){
    int b;
    for (int i=1; i<a;i++){
        if(a%i==0){
            b=b+i;
            printf("%d\n", i);
        }
    }
    if(b==a){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a,c;
    scanf("%d", &a);
    
    c=per(a);
    if(c==1){
        printf("perfect");
    }else{
        printf("no");
    }
}