#include <stdio.h>

int main(){
    int numero=0, soma=0;

    scanf("%d", &numero);

    while(numero!=0){
        soma+=numero%10;
        numero/=10;
    }

    printf("%d\n", soma);

}