#include <stdio.h>

int main(){
    int a, c=0,t[1000],i=0,d,b,l=0,f=0,h,maior=0,menor;

    scanf("%d", &d);

    for(int y=0;y<d;y++){
    scanf("%d", &h);
    scanf("%d", &a);
    scanf("%d", &b);

    while(a>0){
        t[i]=a%10;
        if(a/10>0){
        i++;
        a/=10;
        }else{
        a/=10;
        }
    }

    while(i>=0){
        c+=t[i];
        i--;
    }
    i=0;

    while(b>0){
        t[l]=b%10;
        if(b/10>0){
        l++;
        b/=10;
        }else{
        b/=10;
        }
    }

    while(l>=0){
        f+=t[l];
        l--;
    }
    l=0;

    if(c>f){
    printf("RED\n");
    }else if(f>c){
    printf("BLUE\n");
    }else{
    printf("EQUAL\n");
    }
    c=0;
    f=0;
    }
}
