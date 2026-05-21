#include <stdio.h>
#include <string.h>

int main(){
    char a[50];
    int b,c=1;

    scanf("%[^\n]", a);

    for(int i=0;i<strlen(a);i++){
        if(a[i]==' '){
            c++;
        }
    }

    printf("there are %d words\n", c);

    return 0;
}
