#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(){
    char a[100], b[100], c[100], *f[100], *g[100], a1[100];
    FILE *p=NULL, *v=NULL, *h=NULL;
    int k=0,l=0,g2=0;

    scanf("%s", a);
    scanf("%s", b);
    scanf("%s", c);

    p=fopen(a,"r");
    v=fopen(b,"r");
    h=fopen(c,"w");

    if(p==NULL || v==NULL || h==NULL){
        return 1;
    }

    while(fgets(a1,100,p)!=NULL){
        f[k]=strdup(a1);
        k++;
    }

    while(fgets(a1,100,v)!=NULL){
        g[l]=strdup(a1);
        l++;
    }
    g2=k+l;
    k=0;
    l=0;

    for(int i=0;i<g2;i++){
        if(i%2==0){
            fputs(f[k],h);
            k++;
        }else{
            fputs(g[l],h);
            l++;
        }
    }
    fclose(p);
    fclose(v);
    fclose(h);
    return 0;

}
