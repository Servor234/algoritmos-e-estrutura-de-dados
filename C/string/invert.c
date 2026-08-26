#include <stdio.h>
//modulo da função strlen 
int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
    cont++;
    
    return cont;   
}

void invert(char a[], char b[], int n ){
	for(int i=0;i<n;i++){
	b[i]=a[n-1-i];
	}

	b[n]='\0';
    printf("%s", b);//exibe a frase

    //realiza o print para separar as linhas apos o for
    printf("\n");
}

int FIM(char a[], int n){//checa se a frase é fim e retorna sim ou não caso seja
    if(n==3 && a[0]=='F' && a[1]=='I' && a[2]=='M'){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    char frase[200], frase1[201];
    int n=0;
    
    //leitura da frase analisada
    while(scanf("%s", frase)!=EOF){
    
    //leitura do tamanho da frase para eficiencia
    n=strleng(frase);

    if(FIM(frase,n)==0){//para caso a frase seja fim
    //modulo que chama o metodo de inversão da frase
    invert(frase, frase1,n);
    }
    }

    return 0;
}
