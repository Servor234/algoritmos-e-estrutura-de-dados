#include <iostream>

using namespace std;

class retangulo{
private:
    int largura, altura;

public:
    retangulo(){
        largura=0;
        altura=0;
    }

    void setlargura(int a){
        largura=a;
    }

    void setaltura(int b){
        altura=b;
    }

    void exibi(){
        cout<<"perimetro: "<<2*(largura+altura)<<endl;
        cout<<"area: "<<altura*largura<<endl;
    }
};

int main(){
    retangulo r1;
    int lar=0, alt=0;

    cin>>lar;
    cin>>alt;

    r1.setaltura(alt);
    r1.setlargura(lar);

    r1.exibi();
}
