#include <stdio.h>
#include <stdlib.h>

#define TAMi 50
#define TAM 51
int arr[TAMi+1];
int primeiro=0, ultimo=0;

void insercao(int x){
        for(int i=primeiro;i!=ultimo;i=(i+1)%TAM){
        int el = arr[i%TAM];
        int j=(i-1)%TAM;

        while(j!=ultimo && el>arr[j%TAM]){
            arr[j%TAM]=arr[(j-1)%TAM];
            j=(j-1)%TAM;
        }

        arr[(j+1)%TAM]=el;
    }



}

int main(){
}