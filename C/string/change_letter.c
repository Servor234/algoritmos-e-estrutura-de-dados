#include <stdio.h>
#include <string.h>

int main(){
    char a[50], b,c;

    scanf("%s ", a);
    scanf("%c %c", &b, &c);

    for(int i=0;i<strlen(a);i++){
        if(a[i]==b){
            a[i]=c;
        }
    }

    printf("%s\n", a);
    
    return 0;
}
