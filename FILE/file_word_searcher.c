#include <stdio.h>
#include <string.h>

int main(){
    char a[100],b[50], c[100];
    FILE *p;
    int d=0,f=0,g=0;

    scanf("%s", a);

    p=fopen(a,"r");

    if(p==NULL){
        return 1;
    }

    scanf("%s", b);

    d=strlen(b);

    while(fgets(c,100,p)!=NULL){
        for(int i=0;i<100;i++){
            if(c[i]==b[f]){
                f++;
            }
            if(f==d && (c[i+1]==' ' || c[i+1]=='\n' || c[i+1]=='\0')){
                g++;
                f=0;
            }
        }
    }

    fclose(p);

    printf("%d\n", g);

}
