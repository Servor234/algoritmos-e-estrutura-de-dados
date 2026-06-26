#include <stdio.h>

int main(){
    char b[50], a[50];
    int d=0,co=0,h=0,re=0;

    fgets(b,50,stdin);

    scanf("%s", a);

    while(b[d]!='\0'){
        d++;
    }

    while(a[h]!='\0'){
        h++;
    }

    for(int i=0;i<d;i++){
        if(b[i]==a[co]){
            co++;
            if(co==h && (b[i+1]==' '|| b[i+1]=='\n')){
                    i++;
                    re++;
                while(co>0){
                    b[i-co]='*';
                    co--;
                }
            }
        }else{
            co=0;
        }
    }

    printf("%s%d\n", b, re);

}
