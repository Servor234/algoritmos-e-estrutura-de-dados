#include <iostream>

using namespace std;

class recursivi{
    private:

    int numero;

    public:

    int recu(int a){
        if(a/10==0 && a/100==0){
            return a%10;
        }else{
            return recu(a/10)+a%10;
        }
    }

    void setnum(int a){
        numero=a;
    }

    void exibir(){
        cout<<numero<<endl;
    }

};

int main(){
    recursivi r1;
    int num1=0;

    while(cin>>num1){

    r1.setnum(num1);

    num1=r1.recu(num1);

    cout<<num1<<endl;
    }
}
