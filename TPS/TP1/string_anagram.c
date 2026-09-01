#include <stdio.h>
//modulo que realiza a função de strlen
int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0'){
        cont++;
    }
    return cont;
}

void mais(char a[], int n){//modulo que transforma as letras da string em maiusculas
    for(int i=0;i<n;i++){
        if(a[i]>=96){
            a[i]=((char)a[i]-32);
        }
    }
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

void check(char f1[], char f2[], int n1,int n2){//função que checa as mudanças
    int cond=0;
    if(n1!=n2){
        cond=1;
    //para tamanhos diferentes retorna não
    }else{

        mais(f1,n1);//transformas as duas frases em maiusculas para evitar conflitos
        mais(f2,n2);

        //caso tamanhos iguais, entra na condição de analise
    seque(f1,n1);//ordena a frase 1 
    seque(f2,n2);//ordena a frase 2


       //compara letra por letra 
        for(int i=0;i<n1;i++){
            if(f1[i]!=f2[i]){//caso haja diferença, para o codigo e altera a condição de sim para 1, parando o codigo
                cond=1;
                break;
            }
        }
    }

    if(cond==1){//caso a funçao retorne que é um anagrama mostra sim e caso contrario mostra não
        printf("NAO\n");
    }else{
        printf("SIM\n");
    }

}

int FIM(char f1[], int n){//checa se a frase é fim e retorna sim ou não conforme isso
    if(n==3 && f1[0]=='F' && f1[1]=='I' && f1[2]=='M'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char f1[100], f2[100];
    int n1=0,n2=0;
    int cond=0;
    

    while(scanf("%s", f1)!=EOF){
        n1=strleng(f1);
        if(FIM(f1,n1)==0){

        scanf("%s", f2);
        n2=strleng(f2);
        //leitura das frases e seus tamanhos
        //caso seja fim a frase ele para de rodar
            check(f1,f2,n1,n2);//guarda o valor boleano da função após sua chamada
        }
    }
}