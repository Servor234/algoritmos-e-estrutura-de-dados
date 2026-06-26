#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    char nome[100];
    int quantidade;
    float preco;
}produto;


int main(){
    produto *estoque;
    int numero=0,marcador=0;
    float valor_maior=0,valor=0;

    scanf("%d", &numero);

    estoque=(produto *)malloc(sizeof(produto)*numero);

    for(int i=0;i<numero;i++){
        scanf("%d", &estoque[i].codigo);
        scanf("%s", estoque[i].nome);
        scanf("%d", &estoque[i].quantidade);
        scanf("%f", &estoque[i].preco);

        valor=estoque[i].quantidade*estoque[i].preco;

        if(valor_maior<valor){
            valor_maior=valor;
            marcador=i;
        }
    }

    printf("Produto com maior valor no estoque:\n");
    printf("Codigo: %d\n", estoque[marcador].codigo);
    printf("Nome: %s\n", estoque[marcador].nome);
    printf("Valor: %.2f\n", valor_maior);

    free(estoque);


}
