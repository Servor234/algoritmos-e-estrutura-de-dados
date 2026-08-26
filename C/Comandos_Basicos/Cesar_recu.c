#include <stdio.h>
//modulo para realizar a função strlen
int strleng(char a[]){
    int n=0;

    while(a[n]!='\0'){
        n++;
    }

    return n;
}

void cifra(char a[], char b[], int n, int i){
    if(i==n-1){
        b[i]=(char)(a[i]+3);//guarda a ultima letra e exibe
        printf("%s\n", b);//mosta a frase em uma string já cifrada
    }else{
        b[i]=(char)(a[i]+3);//guarda a frase recursivamente com a alteração
        return cifra(a, b,n, i+1);//incrementa o indice e continua chamando recursivamente
    }
}

int FIM(char frase[], int n){//analisa se a frase é fim e retorna sim e não de acordo
    if(n==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char frase[100], frase2[100];
    int n1=0;

    while(scanf("%s", frase)!=EOF){
    //leitura das frases
    n1=strleng(frase);
    //verificação do tamanho da frase guardada em n1

    if(FIM(frase, n1)==0){//para as chamadas se a frase for fim
    cifra(frase, frase2,n1,0);//uso de uma frase, do tamanho e de um contador em i para o limite da operação
    }
}
}