#include <stdio.h>

int main(){
    int g;

    printf("type your grade:\n");
    scanf("%d", &g);

    if(g>=80){
        printf("concept A");
    } else if(g>=60 && g<80){
        printf("concept B");
    } else if (g>=40 && g<60){
        printf("concept C");
    } else {
        printf("concept D");
    }

    return 0;
}
