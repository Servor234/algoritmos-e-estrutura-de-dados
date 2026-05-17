#include <stdio.h>

int main(){
    int a,b=0, f=0;
    FILE *c;

    c=fopen("meus_dados.txt","r");

    while(fscanf(c,"%d", &a)!=EOF){
        b+=a;
        f++;
    }

    fclose(c);

    printf("%d %d\n", b, f);

}
