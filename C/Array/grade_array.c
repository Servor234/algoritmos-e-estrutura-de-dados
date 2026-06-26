#include <stdio.h>

int main(){
    int grade[12];

    for(int i=0;i<10;i++){
        scanf("%d", &grade[i]);
        grade[10]+=grade[i];
    }

    grade[10]/=10;

    for(int i=0;i<10;i++){
        if(grade[i]>grade[10]){
            grade[12]++;
        }
    }

    printf("%d", grade[12]);

    return 0;


}
