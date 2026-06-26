#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    char nome[100];
    char filme[100];
    int ano;
    float nota;
}personagem;


int main(){
    personagem *casto;
    int numero=0,marcador=0;
    float maior_nota=0;

    scanf("%d", &numero);

    casto=(personagem *)malloc(sizeof(personagem)*numero);

    for(int i=0;i<numero;i++){
        scanf("%d", &casto[i].codigo);
        scanf("%s", casto[i].nome);
        scanf("%s", casto[i].filme);
        scanf("%d", &casto[i].ano);
        scanf("%f", &casto[i].nota);

        if(casto[i].nota>maior_nota){
            maior_nota=casto[i].nota;
            marcador=i;
        }
    }

    printf("Personagem mais popular:\n");
    printf("Codigo: %d\n", casto[marcador].codigo);
    printf("Nome: %s\n", casto[marcador].nome);
    printf("Filme: %s\n", casto[marcador].filme);
    printf("Ano: %d\n", casto[marcador].ano);
    printf("Nota: %.2f\n", casto[marcador].nota);

    free(casto);


}
