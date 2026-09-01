#include <stdio.h>
//modulo que faz a função de strlen
int strleng(char a[]){
    int n=0;

    while(a[n]!='\0' && a[n]!='\n')
    n++;

    return n;
}

void sequen(char frase[]){
    int maior=0,atual=0, letras[26]={0}, inicio=0, pos=0;
    int c=strleng(frase);

    for(int i=0;i<c;i++){
        pos = frase[i]-'a';//variavel pos que pega o indice da letra no alfabeto
        if(letras[pos]==0){//olha se a letra ja apareceu na sequencia
            atual++;//incrementa o valor da sequencia atual pela sequencia caso seja crescrente
            letras[pos]=1;//marca que a letra apareceu
        }else{//caso uma letra já tenha aparecido, ele entra para reiniciar até a letra atual, adicionando 1 para ela logo apos 
            while(letras[pos]==1){
                letras[frase[inicio]-'a']=0;
                inicio++;
                atual--;//reduz a sequenca para cada letra removida
            }
            letras[pos]=1;
            atual++;  //adiciona para a nova sequencia
            }
             if(atual>maior){
                maior=atual;//atualiza o valor da maior sequencia caso a atual seja maior que a maior
            }
        }
    
    
    printf("%d\n", maior);//mostra o tamanho da maior sequencia
}

int FIM(char frase[]){//modulo que olha se a palavra e fim e retorna true or false de acordo
    int c=strleng(frase);
    if(c==3 && frase[0]=='F' && frase[1]=='I' && frase[2]=='M'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char frase[200];

    while(fgets(frase,200,stdin)!=NULL && FIM(frase)!=1){//leitura da frase e para caso a frase seja fim
        sequen(frase);//chamada do metodo
    }
}