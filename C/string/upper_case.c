#include <stdio.h>
#include <string.h>

int main(){
    char a[50];

    printf("Type a word\n");
    scanf("%s", a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]>90){
           a[i]-=32;
        }
    }

    printf("word in upper case:\n%s\n", a);

    return 0;
}
