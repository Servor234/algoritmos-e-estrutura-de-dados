#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int codigo;
    char nome[100];
    float tempo;
    int idade;
}atleta;


int main(){
    atleta *competi;
    int numero=0,marcador=0;
    float menor_tempo=10000;

    scanf("%d", &numero);

    competi=(atleta *)malloc(sizeof(atleta)*numero);

    for(int i=0;i<numero;i++){
        scanf("%d", &competi[i].codigo);
        scanf("%s", competi[i].nome);
        scanf("%f", &competi[i].tempo);
        scanf("%d", &competi[i].idade);

        if(competi[i].tempo<menor_tempo){
            menor_tempo=competi[i].tempo;
            marcador=i;
        }
    }

    printf("Atleta vencedor:\n");
    printf("Inscricao: %d\n", competi[marcador].codigo);
    printf("Nome: %s\n", competi[marcador].nome);
    printf("Tempo: %.2f segundos\n", competi[marcador].tempo);
    printf("Idade: %d\n", competi[marcador].idade);

    free(competi);


}
