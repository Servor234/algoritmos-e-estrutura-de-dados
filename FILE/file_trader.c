#include <stdio.h>

int main(){
    char b[100], c[100], a[100];
    FILE *p=NULL, *v=NULL;

    scanf("%s", b);

    scanf("%s", c);

    p=fopen(b,"r");
    v=fopen(c,"a");

    if(p==NULL || v==NULL){
        return 1;
    }

    while(fgets(a,100,p)!=NULL){
        fputs(a,v);
    }

    fclose(p);
    return 0;
}
