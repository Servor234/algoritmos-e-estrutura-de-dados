#include <stdio.h>
#include <limits.h>

int main(){
    int grade[10], maior=0, b=0;

    for(int i=0;i<10;i++){
        scanf("%d", &grade[i]);
    }

    for(int i=0;i<10;i++){
        if(grade[i]>maior){
            maior=grade[i];
            b=i+1;
        }
    }

    printf("%d\n%d\n", maior, b);

    return 0;
}
