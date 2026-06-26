#include <stdio.h>

int main(){
    char a[100]={0}, b[100];
    FILE *p=NULL;

    scanf("%s", a);

    p=fopen(a,"r");

    while(fgets(b,100,p)!=NULL){
        printf("%s", b);
    }

}
