#include <stdio.h>
//modulo da função strlen 
int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
    cont++;
    
    return cont;   
}

int main(){
    char frase[200];
    int n=0;
    
    //leitura da frase analisada
    scanf("%s", frase);
    
    //leitura do tamanho da frase para eficiencia
    n=strleng(frase);

    //modulo de exibição da frase em ordem oposta
    for(int i=0;i<n;i++){
        printf("%c", frase[n-i-1]);
    }

    //realiza o print para separar as linhas apos o for
    printf("\n");

    return 0;
}