#include <stdio.h>
#include <limits.h>

int main(){
    int x, z;
    char a;

    printf("Type a letter\n");
    scanf("%c", &a);

    while(z!=1){
        if(a>='A' && a<='Z'){
            printf("Uppercase\n");
            z=1;
        }else if(a>='a' && a<='z'){
            printf("Lowercase\n");
            z=1;
        }else{
            printf("Type again\n");
            printf("Type a letter\n");
            scanf("%c", &a);
            z=0;
        }
    }
}
