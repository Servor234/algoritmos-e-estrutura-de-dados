#include <stdio.h>

int main(){
    int a[5],d=0;

    for(int i=0;i<5;i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &d);

    if(d==0){
        return 0;
    }else if(d==1){
        for(int i=0;i<5;i++){
            printf("%d\n", a[i]);
        }
    }else if(d==2){
        for(int i=4;i>=0;i--){
            printf("%d\n", a[i]);
        }
    }else{
        scanf("%d", &d);
    }
}
