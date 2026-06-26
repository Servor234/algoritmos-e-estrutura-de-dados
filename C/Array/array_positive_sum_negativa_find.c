#include <stdio.h>

int main(){
    float a[10],d=0,v=0;

    for(int i=0;i<10;i++){
        scanf("%f", &a[i]);
        if(a[i]<0){
            v++;
        }else{
            d+=a[i];
        }
    }

    printf("%f %f\n", d,v);

}
