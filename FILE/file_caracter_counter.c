#include <stdio.h>

int main(){
    int d=0;
    char a[100],f=0;
    FILE *p;

    scanf("%s", a);

    p=fopen(a,"r");

    if(p==NULL){
    return 1;
}

    while(fgetc(p)!=EOF){
        d++;
    }

    fclose(p);

    printf("%d\n", d);
}
