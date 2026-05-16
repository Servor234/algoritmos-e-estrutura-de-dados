#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int x, y, z;
    time_t t;

    srand((unsigned) time(&t));

    y=rand()%10 + rand()%10;
    printf("type a number\n");
    scanf("%d", &x);


    while(x!=y){
        printf("try again\n");
        scanf("%d", &y);
    }

    if(x==y){
        printf("congrats %d", y);
    }
}
