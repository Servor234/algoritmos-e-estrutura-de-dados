#include <stdio.h>

int main(){
    int a[6];

    for(int i=0; i<6; i++){
        scanf("%d", &a[i]);
    }

    for(int i=5; i>=0; i--){
        printf("%d\n", a[i]);
    }
    return 0;
}
