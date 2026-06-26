#include  <stdio.h>

int main(){
    char a[100], b[100];
    FILE *p=NULL, *v=NULL;

    scanf("%s", a);
    scanf("%s", b);

    p=fopen(a,"r");
    v=fopen(b,"w");

    if(p==NULL||v==NULL){
        return 1;
    }

    while(fgets(a,100,p)!=NULL){
        fputs(a,v);
    }

    fclose(p);
    return 0;

}
