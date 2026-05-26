#include <stdio.h>

int main(){
    char a[100], b[100], c[100];
    FILE *p=NULL, *v=NULL;

    scanf("%s", a);
    scanf("%s", b);

    p=fopen(a,"r");
    v=fopen(b,"w");

    if(p==NULL||v==NULL){
        return 1;
    }

    while(fgets(c,100,p)!=NULL){
        for(int i=0;i<100;i++){
            if(c[i]>90 && c[i]!=' '){
                c[i]=c[i]-32;
                fputc(c[i],v);
            }else{
                fputc(c[i], v);
            }
            if(c[i]=='\0'){
                i=100;
            }
        }
    }

    fclose(p);
    fclose(v);
}
