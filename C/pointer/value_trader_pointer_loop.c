#include <stdio.h>

int troc(int *a,int *b, int *c){
    int t;

    for(int i=0;i<3;i++){
        if(*a<*b){
            t=*a;
            *a=*b;
            *b=t;
            if(*b<*c){
                t=*c;
                *c=*b;
                *b=t;
            }
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
