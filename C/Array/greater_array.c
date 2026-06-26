#include <stdio.h>
#include <limits.h>

int main(){
    int grade[10], maior=0, menor=INT_MAX;

    for(int i=0;i<10;i++){
        scanf("%d", &grade[i]);
    }

    for(int i=0;i<10;i++){
        if(grade[i]>maior){
            maior=grade[i];
        }
        if(grade[i]<menor){
            menor=grade[i];
        }
    }

    printf("%d\n%d\n", maior, menor);

    return 0;
}
