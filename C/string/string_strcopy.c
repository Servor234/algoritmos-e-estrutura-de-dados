#include <stdio.h>

int main(){
    char a[100], b[100];
    int g=0;

    scanf("%s", a);

    while(a[g]!='\0'){
        g++;
    }

    for(int i=0;i<g;i++){
        b[i]=a[i];
    }

    printf("%s", b);

}
