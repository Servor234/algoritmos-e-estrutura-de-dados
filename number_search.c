#include <stdio.h>

int main(){
    int a[10], b=0,c=0;

    for(int i=0;i<10;i++){
        scanf("%d", &a[i]);
    }

    scanf("%d", &b);

    for(int i=0;i<10;i++){
        if(a[i]==b){
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}
