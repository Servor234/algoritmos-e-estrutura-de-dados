#include <stdio.h>

int main(){
    char a[100],t[100];
    int d=0;

    scanf("%s", a);

    while(a[d]!='\0'){
        d++;
    }

    for(int i=0;i<d+1;i++){
        printf("%c", a[d-i]);
    }
}
