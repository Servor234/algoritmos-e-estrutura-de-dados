#include <stdio.h>

int main(){
    int a,m,e;

    printf("answer:\n1 for yes\n0 for no\n\n");

    printf("Are you a monitor?\n");
    scanf("%d", &m);

    printf("Are you enroled?\n");
    scanf("%d", &e);

    printf("What is your age?\n");
    scanf("%d", &a);

    if(m=1){
        printf("Access allowed");
    } else if(a>=16 && e==1){
        printf("Access allowed");
    } else {
        printf("Access denied");
    }

    return 0;
}
