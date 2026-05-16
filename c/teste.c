#include <stdio.h>

int tripleLoop (int n) {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= j; k++) {
                count++;
            }
        }
        z}

    return count;
}

int main(){
    printf("%d\n", tripleLoop(4));
}
