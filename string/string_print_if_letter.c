#include <stdio.h>

int main(){
    char a[100];

    scanf("%[^\n]", a);

    if(a[0]=='a'||a[0]=='A'){
        printf("%s", a);
    }
    return 0;
}
