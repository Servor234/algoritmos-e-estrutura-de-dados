#include <stdio.h>
#include <limits.h>

int main(){
    int a=0,b=100000,f=0;
    float c=0, e=0;
    char d[100];
    FILE *p;

    scanf("%s",d);
    p=fopen(d,"r");

    if(p==NULL){
        return 1;
    }
    while(fscanf(p,"%f",&e)==1){
        if(e>a){
            a=e;
        }
        if(e<b){
            b=e;
        }
        c+=e;
        f++;
    }

    fclose(p);
    c/=f;

    printf("%d %d %f\n",a,b,c);
}
