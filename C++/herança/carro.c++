#include <iostream>

using namespace std;

class carro{
protected:
    string nome;
    int preco;

public:
    carro(){
        nome="";
        preco=0;
    }

    void setnome(string a){
        nome=a;
    }

    void setpreco(int b){
        preco=b;
    }
};

class marca:public carro{
private:
    string loja;

public:
    marca():carro(){
        loja="";
    }

    void setloja(string c){
        loja=c;
    }

    void exibi(){
        cout<<"preco: "<<preco<<endl;
        cout<<"nome: "<<nome<<endl;
        cout<<"loja: "<<loja<<endl;
    }
};

int main(){
    marca h;
    string nome;
    int cash=0;

    cin>>nome;

    h.setloja(nome);
    cin>>nome;
    h.setnome(nome);
    cin>>cash;
    h.setpreco(cash);

    h.exibi();

}
