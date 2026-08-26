#include <stdio.h>
//modulo da função strlen 
int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
    cont++;
    
    return cont;   
}

void invert(char a[], char b[], int n ){
	for(int i=0;i<n;i++){
	b[i]=a[n-1-i];
	}

	b[n]='\0';

}

int main(){
    char frase[200], frase1[201];
    int n=0;
    
    //leitura da frase analisada
    while(scanf("%s", frase)!=EOF){
    
    //leitura do tamanho da frase para eficiencia
    n=strleng(frase);

    //modulo de exibição da frase em ordem oposta
    invert(frase, frase1,n);

    printf("%s", frase1);

    //realiza o print para separar as linhas apos o for
    printf("\n");

    }

    return 0;
}
