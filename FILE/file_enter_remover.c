#include <stdio.h>

int main(){
    char a[100],b[100], c[100];
    FILE *p, *v;

    scanf("%s", a);
    scanf("%s", b);

    p=fopen(a,"r");
    v=fopen(b,"w");

    if(p==NULL || v==NULL){
        return 1;
    }

    while(fgets(c,100,p)!=NULL){
        if(c[0]!='\n'){
            fputs(c,v);
        }
    }
    fclose(p);
    fclose(v);

    return 0;
}
