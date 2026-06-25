#include <iostream>

using namespace std;

class soldado{
private:
    string nome;
    int idade;
    int pontuacao;

public:
    soldado(string n, int a, int b){
        nome=n;
        idade=a;
        pontuacao=b;
    }

    void setnome(string n){
        nome=n;
    }

    void setidade(int a){
        if(a>0){
            idade=a;
        }else{
            idade=1;
        }
    }

    void setpontuacao(int b){
        if(b>=0 && b<=100){
         pontuacao=b;
        }else{
        pontuacao=0;
        }
    }

    string getnome(){
        return nome;
    }

    int getidade(){
        return idade;
    }

    int getpontuacao(){
        return pontuacao;
    }

    void exibi(){
        cout<<"Nome: "<<nome<<endl;
        cout<<"Idade: "<<idade<<endl;
        cout<<"Pontuacao: "<<pontuacao<<endl;
    }

};

int main(){
    int idade, pont;
    string nome;

    cin>>nome;
    cin>>idade;
    cin>>pont;

    soldado p1(nome,idade,pont);

    p1.exibi();

    cin>>pont;

    p1.setpontuacao(pont);

    p1.exibi();

}
