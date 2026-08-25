#include <stdio.h>

int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
    cont++;
    
    return cont;   
}

int main(){
    char frase[200];
    int n=0;
    
    scanf("%s", frase);
    n=strleng(frase);
    for(int i=0;i<n;i++){
        printf("%c", frase[n-i-1]);
    }

    printf("\n");

    return 0;
}