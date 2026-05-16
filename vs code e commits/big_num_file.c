#include <stdio.h>

int main(){
    int a,b=0, f=0;
    FILE *c;

    c=fopen("meus_dados.txt","r");

    while(fscanf(c,"%d", &a)!=EOF){
        if(a>b){
            b=a;
        }
    }

    fclose(c);

    printf("%d\n", b);

}
