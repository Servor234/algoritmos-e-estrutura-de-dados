#include <stdio.h>
#include <string.h>

int main(){
    int a=123;
    char palavra1[50], palavra2[50];

    scanf("%[^\n] ", palavra1);
    scanf("%[^\n]", palavra2);

    a=strcmp(palavra1,palavra2);

    if(a==0){
        printf("Equal\n");
    }else{
        printf("Not equal\n");
    }

    return 0;
}
