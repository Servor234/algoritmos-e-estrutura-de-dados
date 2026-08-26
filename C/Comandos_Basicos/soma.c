#include <stdio.h>

void soma(int a){
	int soma2=0;
	while(a!=0){
		soma2+=a%10;//faz a soma dos restos da divisão e depois divide
		a/=10;
	}

    //exibe a soma final
    printf("%d\n", soma2);
}

int main(){
    int numero=0;

    //leitura do numero a ser somado
    while(scanf("%d", &numero)!=EOF){
    soma(numero);//chama o metodo
    }

}
