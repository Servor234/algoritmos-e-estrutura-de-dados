#include <stdio.h>
#include <stdlib.h>

typedef struct Celula{
    int el;
    Celula *prox;
}Celula;

Celula* novaCelula(int x){
    Celula *tmp = (Celula *) malloc (sizeof(Celula));
    tmp->prox=NULL;
    tmp->el=x;
    return tmp;
} 

int main(){


    return 0;
}