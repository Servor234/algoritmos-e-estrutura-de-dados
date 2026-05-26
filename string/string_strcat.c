#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int d,c,j=0;

    scanf("%s", a);
    scanf("%s", b);

    d=strlen(a);
    c=strlen(b);

    for(int i=d;i<d+c;i++,j++){
        a[i]=b[j];
    }

    printf("%s", a);

}
