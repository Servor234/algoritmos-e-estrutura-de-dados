#include <iostream>

using namespace std;

class conta{
private:
    int saldo;
    string titular;
public:
    conta(){
        saldo=0;
        titular="";
    }

    void setsaldo(int a){
        saldo=a;
    }

    void settitu(string b){
        titular=b;
    }

    void depositar(int a){
        saldo+=a;
    }

    void sacar(int b){
        saldo-=b;
    }

    void exibir(){
        cout<<"Titular: "<<titular<<endl;
        cout<<"Saldo: "<<saldo<<endl;
    }

};

int main(){
    conta pes;
    int saldo, varia=0;
    string nome;

    cin>>nome;
    cin>>saldo;

    pes.setsaldo(saldo);
    pes.settitu(nome);
    pes.exibir();
    
    cin>>varia;
    pes.depositar(varia);
    pes.exibir();

    cin>>varia;
    pes.sacar(varia);
    pes.exibir();
}
