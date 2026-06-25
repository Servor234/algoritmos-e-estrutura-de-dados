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

class elite:public soldado{
private:
    string especial;
    int nivelmissao;
public:
    elite(string n, int a, string e, int f, int g):soldado(e,f,g){
        especial=n;
        nivelmissao=a;
    }

    void setespecial(string n){
        especial=n;
    }

    void setnivelmissao(int a){
        if(a<=5 && a>=1){
            nivelmissao=a;
        }else{
            nivelmissao=1;
        }
    }

    string getespecial(){
        return especial;
    }

    int getnivel(){
        return nivelmissao;
    }

    void exibi(){
        soldado::exibi();
        cout<<"Especial: "<<especial<<endl;
        cout<<"Nivel: "<<nivelmissao<<endl;
    }
};

int main(){
    int idade, pont, nivel;
    string nome, especial;

    cin>>nome;
    cin>>idade;
    cin>>pont;
    cin>>nivel;
    cin>>especial;

    elite p1(especial,nivel,nome,idade,pont);

    p1.exibi();

    cin>>pont;

    p1.setpontuacao(pont);

    p1.exibi();

}
