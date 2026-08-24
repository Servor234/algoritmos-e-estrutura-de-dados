#include <stdio.h>

int strleng(char a[]){
    int n=0;

    while(a[n]!='\0')
    n++;

    return n;
}

int main(){
    int maior=0, atua=0, n=0;
    char frase[200];

    scanf("%s", frase);
    n=strleng(frase);

    for(int i=0;i<n;i++){
        if(i<n && frase[i]<frase[i+1]){
            atua++;
        }else if(i==n-1 && frase[i]>frase[i-1]){
            atua++;
        }else{
            atua=0;
        }

        if(atua>maior){
            maior=atua;
        }
    }

    printf("%d\n", maior);

}