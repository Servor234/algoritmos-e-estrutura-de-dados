#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int g=0,f,d;

    scanf("%s", a);

    scanf("%s", b);

    f=strlen(a);
    d=strlen(b);

    if(f!=d){
        g=0;
    }else{
    for(int i=0;i<f;i++){
        if(a[i]!=b[i]){
            g=0;
        }else{
            g=1;
        }
    }
    }

    if(g==1){
        printf("iguais\n");
    }else{
        printf("diferentes\n");
    }
}
