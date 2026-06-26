#include <stdio.h>

int main(){
    char a[100], b[100];
    FILE *p;

    scanf("%s", a);

    p=fopen(a,"r");

    if(p==NULL){
        return 1;
    }

    while(fgets(b,100,p)!=NULL){
        printf("%s", b);
    }

    fclose(p);

    return 0;  

}
