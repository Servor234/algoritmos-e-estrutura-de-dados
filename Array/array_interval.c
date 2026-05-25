#include <stdio.h>

int main(){
    int a[10],b[10]={-1},t=0;;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
        if(a[i]>50 || a[i]<0){
            scanf("%d", a[i]);
        }

        if(a[i]%2==1){
            b[t]=a[i];
            t++;
        }
    }

    for(int i=0;i<10;i++){
        printf("%d ", a[i]);

        if(b[i]!=-1){
            printf("%d\n", b[i]);
        }else{
            printf("sem valores\n");
        }
    }
}
