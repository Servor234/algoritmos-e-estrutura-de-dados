#include <stdio.h>

int main(){
    int a[8], b,c,d=0;

    for(int i=0;i<8;i++){
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &b,&c);

    for(int i=0;i<8;i++){
        if(i==b){
            d+=b;
        }else if(i==c){
            d+=c;
        }
    }

    printf("%d", d);
}
