#include <stdio.h>

int main(){
    int x,y,z,c;

    printf("how many number are you going to sum?\n");
    scanf("%d", &x);

    while(y<x){
        z=c;
        printf("type the %d number\n", y+1);
        scanf("%d", &c);
        c=z+c;
        y++;

    }

    printf("this is the sum of the %d number: %d", x, c);

}
