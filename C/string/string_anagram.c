#include <stdio.h>
//modulo que realiza a função de strlen
int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
        cont++;
        
    return cont;
}

//modulo que realiza a ordenação sequencial para fazer a comparação de cada letra
void seque(char a[], int n){
    for(int i=0;i<n;i++){
        int menor=i;
        for(int j=i+1;j<n;j++){
            if(a[menor]>a[j]){
                menor=j;
            }
        }
        
        char aux=a[menor];
        a[menor]=a[i];
        a[i]=aux;
        
    }
}

int main(){
    char f1[100], f2[100];
    int n1=0,n2=0;
    int cond=0;
    
    scanf("%s", f1);
    n1=strleng(f1);
    scanf("%s", f2);
    n2=strleng(f2);
    //leitura das frases e seus tamanhos

    if(n1!=n2){//para tamanhos diferentes retorna não
        printf("NAO\n");
    }else{//caso tamanhos iguais, entra na condição de analise
    seque(f1,n1);//ordena a frase 1 
    seque(f2,n2);//ordena a frase 2
       //compara letra por letra 
        for(int i=0;i<n1;i++){
            if(f1[i]!=f2[i]){//caso haja diferença, para o codigo e altera a condição de sim para 1, parando o codigo
                printf("NAO\n");
                cond=1;
                break;
            }
        }

        if(cond==0){//retorna sim caso seja sejam iguais
            printf("SIM\n");
        }else{//retorna o valor de cond para 0
            cond=0;
        }
        
    }
    
}