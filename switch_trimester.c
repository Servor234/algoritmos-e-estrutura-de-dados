#include <stdio.h>

int main(){
    int x=0, y=0;

    do{
        if(x<=0 || x>=13){
        printf("what month are you in?\n");
        scanf("%d", &x);
        } else {
            printf("again");
        }
    }while(x<=0 || x>=13);

    y=(x-1)/3;

    switch(y){

    case 0:
        printf("first semester\n");
        break;

    case 1:
        printf("second semester\n");
        break;

    case 2:
        printf("third semester\n");
        break;

    case 3:
        printf("fourth semester\n");
        break;
    }
}
