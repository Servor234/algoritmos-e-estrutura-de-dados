#include <stdio.h>
#include <limits.h>

int main(){
    int x, y=1;

    printf("Type how many number of the sequence you want\n");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        printf("%d\n", y);
        y+=2;
    }

    return 0;
}
