#include <stdio.h>

int main(){
    int g;

    printf("what is your grade?\n");
    scanf("%d", &g);

    if(g<0, g>100){
        printf("put a valid grade");
    } else if(g<50 && g>=0){
        printf("your grade is insufficient\n");
    } else if(g>=50 && g<70){
        printf("you have a regular grade\n");
    } else if (g>=70 && g<90){
        printf("you have a good grade, congrats\n");
    } else if (g>=90 && g==100){
        printf("you have an excellent grade\n");
    }
    return 0;
}
