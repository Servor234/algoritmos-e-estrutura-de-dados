#include <stdio.h>
#include <string.h>

int main(){
    int b=0;
    char a[50],t[50];

    scanf("%[^\n]", a);
    b=strlen(a);

    strcat(t,a);

    for(int i=0;i<b;i++){
        if(a[i]==' '){
           a[i]=a[i+1];
           a[i+1]=' ';
        }
    }

    printf("%s\n", a);

}
