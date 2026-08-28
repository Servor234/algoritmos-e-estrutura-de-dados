#include <stdio.h>

void recu (char frase[], int n, int cond1, int cond2, int cond3, int cond4){
        if(n==-1){
            if(cond1==0){//condição se é só de vogais
            printf("SIM ");
            }else{//retorna não caso seja 1
                printf("NAO ");
            }   
            
            if(cond2==0){//condição se é so consoantes
            printf("SIM ");
            }else{//retorna nao caso seja 1
                printf("NAO ");
            }   
            
            if(cond3==0){//condição se é um numero natural
            printf("SIM ");
            }else{//retorna nao caso 1
                printf("NAO ");
            }   
            
            if(cond4==1 || cond4==0){//condição se é real e se só tem mais de 1 ponto ou virgurla
            printf("SIM\n");
            }else{//caso seja 2 retorna nao 
                printf("NAO\n");
            }   
            
        }else if(n!=-1 && (frase[n]>='0' && frase[n]<='9' || frase[n]== ',' || frase[n]=='.') ){//caso seja numero ou virgula e ponto entra aqui
            if(frase[n]== 46 || frase[n]==44){//caso ponto soma 1 para naturais e reais, parando os naturais e adicionando 1 para os reais, para se superar 1 ponto ele tornar falso
                return recu(frase, n-1,1,1,cond3+1,cond4+1);
            }

            return recu(frase, n-1,1,1,cond3,cond4);//torna as condições de frases falsa instantaneamente
        }else if(n!=-1 && (frase[n]>='a' && frase[n]<='z' && (frase[n]!='a' && frase[n]!='e' && frase[n]!='i' && frase[n]!='o' && frase[n]!='u') && (frase[n]!='A' && frase[n]!='E' && frase[n]!='I' && frase[n]!='O' && frase[n]!='U'))){//entra caso seja uma letra diferente de vogal
            return recu(frase, n-1, 1, cond2, cond3+1,2);//torna as condições falsas para numeros e para vogais
        }else if(n!=-1 && (frase[n]>='a' && frase[n]<='z' && (frase[n]=='a' || frase[n]=='e' || frase[n]=='i' || frase[n]=='o' || frase[n]=='u') && (frase[n]=='A' || frase[n]=='E' || frase[n]=='I' || frase[n]=='O' || frase[n]=='U'))){//entra caso tenha uma vogal, por não se tratar de uma consoante
            return recu(frase,n-1,cond1,1,cond3+1,2);//torna as condições falsas para numeros e para consoantes
        }else if(n!=-1 && (frase[n]<'a' || frase[n]>'z')){//faz com que caso não tenha letra, torne as frases falsas
            return recu(frase,n-1,1,1,cond3,cond4);
        }else{//caso as condições sejam compridas ele retorna na proxima caractere
            return recu(frase,n-1,cond1,cond2,cond3,cond4);
        }
}

//função que realiza a função do strlen
int strleng(char a[]){
    int n=0;
    while(a[n]!='\0')
    n++;

    return n;
}

int FIM(char frase[], int n){
    if(n==3 && frase[0]=='F' && frase[1]=='I' && frase[2] == 'M'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char frase[200];
    int n1=0;
//leitura e tamanho da string
    while(fgets(frase,200,stdin)!=NULL){
    n1=strleng(frase);
//chamada recursiva do codigo
    if(FIM(frase,n1)==0){
    recu(frase,n1-1,0,0,0,0);
    }
    }
}