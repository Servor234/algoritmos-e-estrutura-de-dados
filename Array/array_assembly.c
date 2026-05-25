#include <stdio.h>

int main(){
    int a[10],b[10],c[20], t1=0,t2=0;

    for(int i=0;i<10;i++){
        scanf("%d %d", &a[i], &b[i]);
    }

    for(int i=0;i<20;i++){
        if(i%2==0){
            c[i]=a[t1];
            t1++;
            printf("%d\n", c[i]);
        }else{
            c[i]=b[t2];
            t2++;
            printf("%d\n", c[i]);
        }
    }
}
