#include <stdio.h>
#include <string.h>

int main(){
    int c,d,f;
    char a[50], b;

    scanf("%s %c", a, &b);
    d=strlen(a);

    if(strchr(a,b)!=0){
        for(int i=0;i<d;i++){
            if(a[i]==b){
                c++;
            }
        }
        printf("This many of %c: %d\n", b,c);

        printf("In these positions\n");

        for(int i=0;i<d;i++){
            if(a[i]==b){
                printf("%d\n", i);
            }
        }
    }else{
        printf("Not found\n");
    }

    return 0;
}
