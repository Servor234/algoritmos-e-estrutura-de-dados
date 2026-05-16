#include <stdio.h>

int main(){
    int a[12], b=0;

    for(int i=0;i<12;i++){
        scanf("%d", &a[i]);
    }

    for(int i=0;i<12;i++){
        if(a[i]%2==0){
            b++;
        }
    }

    printf("%d\n", b);

    return 0;
}
