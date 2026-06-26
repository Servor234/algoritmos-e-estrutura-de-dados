#include <stdio.h>

int main(){
    char a[100];
    int i=0,g=0;

    scanf("%[^\n]", a);

    while(a[i]!='\0'){
        i++;
        if(a[i]==' '){
        }else{
            g++;
        }
    }

    printf("%d\n", g);
}
