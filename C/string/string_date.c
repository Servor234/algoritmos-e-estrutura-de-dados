#include <stdio.h>
#include <string.h>

int main(){
    char a[100],di[2], an[4], me[2];
    int d=0, d1=0,a1=0,m1=0;

    scanf("%s",a);

    d=strlen(a);

    for(int i=0;i<d;i++){
        if(a[i]=='\\'){
                printf("\n");
        }else if(i<2){
            printf("%c", a[i]);
        }else if(i>2 && i<5){
            printf("%c", a[i]);
        }else if(i>5){
            printf("%c", a[i]);
        }
    }

}
