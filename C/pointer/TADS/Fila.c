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

int remover(){
    
}

int main(){
    
    return 0;
}