#include <stdio.h>

int main(){
    int a[3];

    for(int i=0;i<3;i++){
        a[i]=3*(i+1);
    }

    for(int i=0;i<3;i++){
        if(i<2){
        a[i]=a[i]+a[i+1];
        }
    }

    for(int i=0;i<3;i++){
        printf("%d\n", a[i]);
    }
}