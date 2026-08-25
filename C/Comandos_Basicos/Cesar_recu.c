#include <stdio.h>
//modulo para realizar a função strlen
int strleng(char a[]){
    int n=0;

    while(a[n]!='\0'){
        n++;
    }

    return n;
}

void cifra(char a[], int n, int i){
    if(i==n-1){
        printf("%c\n", a[i]+3);//mosta a primeira letra com o incremento da chave
    }else{
        printf("%c", a[i]+3);//mostra as letras na tela de forma recursivamente
        return cifra(a,n, i+1);//incrementa o indice e continua chamando recursivamente
    }
}

int main(){
    char frase[100];
    int n1=0;
    int i=0;
    //declaração da variavel

    scanf("%s", frase);
    //leitura das frases
    n1=strleng(frase);
    //verificação do tamanho da frase guardada em n1

    cifra(frase,n1,i);//uso de uma frase, do tamanho e de um contador em i para o limite da operação

}