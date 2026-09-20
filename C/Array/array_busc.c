#include <stdio.h>
#include <stdlib.h>

int busc1(int v[], int size, int buscado){
    for(int i=0;i<size;i++){
        if(v[i]==buscado){
            return i;
        }
    }

    return -1;
}

int busc2(int v[],int size, int buscado){
    int esq=0;
    int dir=size-1;

    while(esq<=dir){
        int meio=(dir+esq)/2;
        if(v[meio]==buscado){
            return meio;
        }else if(v[meio]>buscado){
            dir = meio-1;
        }else if(v[meio]<buscado){
            esq = meio+1;
        }
    }

    return -1;
}

int main(){
    int size;

    scanf("%d", &size);

    int *p=(int*)malloc(sizeof(int)*size);

    for(int i=0;i<size;i++){
        scanf("%d", p+i);
    }

    int buscado=0;

    scanf("%d", &buscado);

    printf("%d %d\n", busc1(p,size,buscado), busc2(p,size,buscado));

    free(p);



    return 0;
}