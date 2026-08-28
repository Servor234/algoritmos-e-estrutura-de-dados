#include <stdio.h>

int strleng(char frase[]){//função que executa a contagem de caracteres da frase
    int n=0;

    while(frase[n]!='\n' && frase[n]!='\0'){
        n++;
    }

    return n;
}

void palin(char frase[]){
    int n=strleng(frase), cond=0;

    for(int i=0;i<n/2;i++){//metodo que verifica metade da frase e caso encontre a diferença retorna não e para o loop
        if(frase[i]!=frase[n-i-1]){
            cond=1;
            break;
        }
        cond=0;
    }
    
    

    if(cond==1){//retorno do metodo
        printf("NAO\n");
    }else{
        printf("SIM\n");
    }
}

int FIM(char frase[]){//metodo que verifica se a string é fim ou não, retornando de acordo
    int a=strleng(frase);
    if(a==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M'){
        return 1;
    }else{
        return 0;
    }

}

int main(){
    char a[1000];

    while(fgets(a,1000,stdin)!=NULL && FIM(a)!=1){//leitura da frase e analise se é fim
        palin(a);//chamada do metodo para modularizar o codigo
    }

    return 0;
}
