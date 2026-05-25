#include <stdio.h>

int main(){
    int a[10], b[10]={0},c[10]={0},t1=0,t2=0;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
        if(a[i]%2==0){
            b[t1]=a[i];
            t1++;
        }else{
            c[t2]=a[i];
            t2++;
        }
    }

    for(int i=0;i<10;i++){
        if(c[i]!=0){
            printf("%d ", c[i]);
        }else{
            printf("\t");
        }
        if(b[i]!=0){
            printf("%d\n", b[i]);
        }else{
            printf("\n");
        }
    }


}
