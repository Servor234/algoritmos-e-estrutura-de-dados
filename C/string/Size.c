#include <stdio.h>

int main(){
    char cid[100];
    int cont=0;

    while(fgets(cid, 100,stdin)!=NULL){
        if(cid[0]!='F' || cid[1]!='I' || cid[2]!='M'){
        while(cid[cont]!='\n'){
            cont++;
        }
        printf("%d\n", cont);
        cont=0;
    }
    }
}