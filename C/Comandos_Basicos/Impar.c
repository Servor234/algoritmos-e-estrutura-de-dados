#include <stdio.h>

int main(){
    int clause,num;

    scanf("%d", &clause);

    for(int i=0;i<clause;i++){
        scanf("%d", &num);

        if(num%2==0){
            printf("PAR\n");
        }else{
            printf("IMPAR\n");
        }
    }

}