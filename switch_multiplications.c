#include <stdio.h>

int main(){
    int x, y;

    do{
    printf("choose an operation:\n1 - double\n2 - triple\n3 - quadruple\n");
    scanf("%d", &x);
    }while(x<=0 || x>=4);


    printf("choose a number\n");
    scanf("%d", &y);

    switch(x){
    case 1:
        x=y*2;
        printf("%d", x);
        break;

    case 2:
        x=y*3;
        printf("%d", x);
        break;

    case 3:
        x=y*4;
        printf("%d", x);
        break;

    }
}
