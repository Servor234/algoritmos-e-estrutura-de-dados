#include <stdio.h>
#include <string.h>

int main(){
    char a[50], b[50];
    int c=0;

    scanf("%[^\n] %[^\n]", a, b);

    if(strstr(a,b)!=NULL){
        printf("Found\n");
    }else{
        printf("Not found\n");
    }

    return 0;
}
