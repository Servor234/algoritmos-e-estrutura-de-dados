#include <stdio.h>

int main(){
    int x,y,z, r;

    printf("for yes = 1\n for no = 0\n");

    printf("year of birth:\n");
    scanf("%d", &x);

    printf("year of today:\n");
    scanf("%d", &y);

    printf("birthday passed?\n");
    scanf("%d", &z);

    if (z==0) {
        r=y-x-1;
        printf("the person was born %d years ago", r);
    } else {
        r=y-x;
        printf("the person was born %d years ago", r);
    }

}
