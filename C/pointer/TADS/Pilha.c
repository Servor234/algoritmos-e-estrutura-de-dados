#include <stdio.h>
#include <stdlib.h>

typedef struct Celula{
    int elemento;
    Celula *prox;
}Celula;

Celula* novaCelula(int x){
    Celula *tmp = (Celula*) malloc (sizeof(Celula));
    tmp->elemento=x;
    tmp->prox=NULL;
    return tmp;
}

typedef struct pilha{
    Celula *topo;
}pilha;

void push(pilha *a,int x){
    Celula *tmp = novaCelula(x);
    tmp->prox=a->topo;
    a->topo=tmp;
    tmp=NULL;
    free(tmp);
}

int pop(pilha *a){
    int elemento=a->topo->elemento;
    Celula *tmp=a->topo;
    a->topo=a->topo->prox;
    tmp->prox=NULL;
    free(tmp);
    tmp=NULL;
    return elemento;
}

int main(){

    return 0;
}