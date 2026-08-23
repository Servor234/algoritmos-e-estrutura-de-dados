#include <iostream>

using namespace std;

int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
    cont++;
    
    return cont;
    
}

int main()
{
    char frase[200];
    int n=0;
    
    cin>>frase;
    n=strleng(frase);
    
    for(int i=0;i<n;i++){
        cout<<frase[n-i-1];
    }

    return 0;
}
