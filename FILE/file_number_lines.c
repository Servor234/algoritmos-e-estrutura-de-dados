#include <stdio.h>

int main(){
    char a[100],b[100];
    int i=0;
    FILE *p=NULL;

    scanf("%s", a);

    p=fopen(a,"r");

    if(p==NULL){
        return 1;
    }

    while(fgets(b,100,p)!=NULL){
        i++;
    }

    fclose(p);

    printf("%d\n", i);

}
