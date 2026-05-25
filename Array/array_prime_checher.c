#include <stdio.h>

int main(){
    int a[10];

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    for(int i=0;i<10;i++){
        if(a[i]%6==1 || a[i]%6==5 || a[i]==2 || a[i]==3){
            printf("%d %d\n", a[i], i+1);
        }
    }
}
