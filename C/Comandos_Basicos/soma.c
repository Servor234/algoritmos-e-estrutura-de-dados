#include <stdio.h>

int soma(int a){
	int soma2=0;
	while(a!=0){
		soma2+=a%10;
		a/=10;
	}

	return soma2;
}

int main(){
    int numero=0, soma1=0;

    //leitura do numero a ser somado
    while(scanf("%d", &numero)!=EOF){
    //faz a soma dos restos da divisão e depois divide
    soma1=soma(numero);

    //exibe a soma final
    printf("%d\n", soma1);
    }

}
