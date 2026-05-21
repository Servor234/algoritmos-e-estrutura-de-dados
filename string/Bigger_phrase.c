#include <stdio.h>
#include <string.h>

int main(){
    int c,d;
    char a[50],b[50];

    scanf("%s %s", a,b);

    c=strlen(a);
    d=strlen(b);

    if(c>d){
        printf("the first string is bigger\n");
    }else{
        printf("the second string is bigger\n");
    }

    return 0;
}
