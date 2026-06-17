#include <iostream>

using namespace std;

class pessoa{
private:
    string nome;
    int idade;

public:
    pessoa(){
        nome="";
        idade=0;
    }

    void setnome(string a){
        nome=a;
    }

    void setidade(int b){
        idade=b;
    }

    void exibir(){
        cout<<"nome: "<<nome<<endl;
        cout<<"idade: "<<idade<<endl;
    }

};

int main(){
    pessoa jonas;
    int idade;
    string nome;

    cin>>nome;
    cin>>idade;

    jonas.setidade(idade);
    jonas.setnome(nome);

    jonas.exibir();
}
