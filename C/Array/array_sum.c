#include <stdio.h>

#define t 8

int main(){
    int sum[t],cou=0;

    for(int i=0;i<t;i++){
        scanf("%d", &sum[i]);
        cou+=sum[i];
    }

    printf("%d\n", cou);

}
