#include <stdio.h>
//modulo que faz a função de strlen
int strleng(char a[]){
    int n=0;

    while(a[n]!='\0')
    n++;

    return n;
}

int main(){
    int maior=0, atua=0, n=0;
    char frase[200];

    scanf("%s", frase);//leitura da frase e associação do seu tamanho com n
    n=strleng(frase);

    for(int i=0;i<n;i++){
        if(i<n && frase[i]<frase[i+1]){
            atua++;//incrementa o valor da sequencia atual pela sequencia caso seja crescrente
        }else if(i==n-1 && frase[i]>frase[i-1]){
            atua++;//incrementa o valor da sequencia atual na ultima posição para evitar sair do limite do array caso seja crescente
        }else{//caso a sequencia não seja crescrente, reinicia a sequencia atual para 0
            atua=0;
        }

        if(atua>maior){
            maior=atua;//atualiza o valor da maior sequencia caso a atual seja maior que a maior
        }
    }

    printf("%d\n", maior);//mostra o valor da maior sequencia

}