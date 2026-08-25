#include <stdio.h>

int main(){
    int numero=0, soma=0;

    //leitura do numero a ser somado
    scanf("%d", &numero);

    //faz a soma dos restos da divisão e depois divide
    while(numero!=0){
        soma+=numero%10;
        numero/=10;
    }

    //exibe a soma final
    printf("%d\n", soma);

}