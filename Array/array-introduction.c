#include <stdio.h>

int main(){
    int leps[5];

    for(int i=0; i<5; i++){
        scanf("%d", &leps[i]);
    }

    for(int i=0; i<5; i++){
        printf("%d\n", leps[i]);
    }
    return 0;
}
