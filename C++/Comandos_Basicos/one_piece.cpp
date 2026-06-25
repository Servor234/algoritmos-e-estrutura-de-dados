#include <iostream>

using namespace std;

class pirata{
private:
    string nome;
    int idade;

public:
    pirata(string n, int i){
        nome=n;
        idade=i;
    }

    void setnome(string n){
        nome=n;
    }

    void setidade(int i){
        idade=i;
    }

    string getnome(){
        return nome;
    }

    int getidade(){
        return idade;
    }

    void exibi(){
        cout<<"Nome: "<<nome<<endl;
        cout<<"Idade: "<<idade<<endl;
    }
};

class capitao:public pirata{
private:
    string navio;
    float recomp;

public:
    capitao(string n, int r, string N,float i):pirata(n,r){
        navio=N;
        recomp=i;
    }

    void setnavio(string n){
        navio=n;
    }

    void setrecomp(float r){
        recomp=r;
    }

    string getnavio(){
        return navio;
    }

    float getrecomp(){
        return recomp;
    }

    void exibi(){
        pirata::exibi();
        cout<<"Navio: "<<navio<<endl;
        cout<<"Recompensa: "<<recomp<<endl;
    }

};

int main(){
    capitao c1("Luffy",19,"Thousand Sunny", 15);

    c1.exibi();
}
