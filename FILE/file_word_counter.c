#include <stdio.h>

int main(){
    char a[100];
    FILE *p;
    int d=0;

    p=fopen("carro.txt", "r");

    while(fgets(a,100,p)!=NULL){
        for(int i=0;i<100;i++){
            if(a[i]==' '){
                d++;
            }
            if(a[i]=='\n'){
                d++;
                i=100;
            }
        }
    }

    fclose(p);

    printf("%d\n", d+1);

}
