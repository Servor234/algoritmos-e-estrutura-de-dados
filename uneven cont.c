#include <stdio.h>

int main() {
    int i=1,N,a=0;
    
    printf("quantos numeros impares??\n");
    scanf("%d", &N);
    
    while (a<=N){
        printf("%d\n", i);
        i+=2;
        a++;
    }
    return 0;
}