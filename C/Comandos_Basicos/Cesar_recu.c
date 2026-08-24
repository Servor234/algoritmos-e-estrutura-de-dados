#include <stdio.h>

int strleng(char a[]){
    int n=0;

    while(a[n]!='\0'){
        n++;
    }

    return n;
}

void cifra(char a[], int n, int i){
    if(i==n-1){
        printf("%c\n", a[i]+3);
    }else{
        printf("%c", a[i]+3);
        return cifra(a,n, i+1);
    }
}

int main(){
    char frase[100];
    int n1=0;
    int i=0;

    scanf("%s", frase);
    n1=strleng(frase);

    cifra(frase,n1,i);

}