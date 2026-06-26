#include <stdio.h>

int troc(int *a,int *b, int *c){
    int t;

    if(*a>*b){
        if(*b>*c){
        }else{
        t=*c;
        *c=*b;
        *b=t;
        }
        if(*c>*a){
            t=*c;
            *c=*a;
            *a=t;
        }
    }else{
        t=*a;
        *a=*b;
        *b=t;
        if(*b>*c){
        }else{
            t=*b;
            *b=*c;
            *c=t;
        }
        if(*a>*b){
        }else{
            t=*a;
            *a=*b;
            *b=t;
        }
    }

    if(*a==*b && *b==*c){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int a,b,c,res;

    printf("Type three values\n");
    scanf("%d %d %d", &a,&b,&c);

    res=troc(&a,&b,&c);

    if(res==1){
        printf("values are equal\n%d %d %d", a, a, a);
    }else{
        printf("values are different\n%d %d %d", a,b,c);
    }
}
