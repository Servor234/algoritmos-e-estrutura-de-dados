#include <stdio.h>
#include <stdlib.h>

typedef struct Celula{
    int elemento;
    Celula *prox;
}Celula;

Celula* novaCelula(int x){
    Celula *tmp = (Celula *) malloc (sizeof(Celula));
    tmp->elemento=x;;
    tmp->prox=NULL;
    return tmp;
}

typedef struct{
    Celula *primeiro;
    Celula *ultimo;
}Fila;

int remover(Fila *a){
    int elemento=a->primeiro->elemento;
    Celula* tmp = a->primeiro;
    a->primeiro=a->primeiro->prox;
    tmp=NULL;
    free(tmp);
    return elemento;
}

void inserir(Fila *a, int x){
    Celula* tmp = novaCelula(x);
    a->ultimo->prox=tmp;
    a->ultimo=a->ultimo->prox;
    tmp=NULL;
    free(tmp);
}

int main(){
    
    return 0;
}