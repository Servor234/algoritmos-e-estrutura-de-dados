#include <stdio.h>
#include <string.h>

int main(){
    int b;
    char a[50],t[50];

    scanf("%s", a);
    b=strlen(a);

    for(int i=0;i<b;i++){
        t[i]=a[b-1-i];
    }

    printf("%s\n", t);

    return 0;
}
