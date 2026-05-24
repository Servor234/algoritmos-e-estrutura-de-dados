#include <stdio.h>

void fat(int *a){
    int b=1;
    for(int i=1;i<=*a;i++){
        b*=i;
    }
    *a=b;
}

int main(){
    int a,*p=&a,b;

    printf("type a number\n");
    scanf("%d", &a);

    fat(p);

    printf("his factorial is: %d\n", a);

    return 0;
}
