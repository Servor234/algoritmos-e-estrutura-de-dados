#include <iostream>
using namespace std;

class frase{
    private:

    char letras[200]; 
    int size;

    public:

    int tamanho(){
        int cont=0;

        while(letras[cont]!='\0'){
            cont++;
        }
        return cont;

    }

    void reverse(){
        for(int i=0;i<size/2;i++){
            char tmp=letras[i];
            letras[i]=letras[(size)-i-1];
            letras[(size)-i-1]=tmp;
        }
    }

    void setletras(char a[]){
        int cont=0;
        while(a[cont]!='\0'){
            letras[cont]=a[cont];
            cont++;
        }
    }

    void setsize(int a){
        size=a;
    }

    void exibir(){
        cout<<letras<<endl;
    }

};

int main(){
    frase f1;
    char pala[200];
    int tam=0;

    cin>>pala;

    f1.setletras(pala);

    tam=f1.tamanho();

    f1.setsize(tam);

    f1.reverse();

    f1.exibir();

    return 0;
}
