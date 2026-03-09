#include <stdio.h>

int main() {
    int x, y, z, m;

    printf("put a grade:\n");
    scanf("%d", x);

    printf("put a grade:\n");
    scanf("%d", y);

    printf("what is your frequency?\n");
    scanf("%d", z);

    m=(x+y)/2;

    if (m>=60 && z>=75){
        printf("pass");
    } else {
        printf("repeat");
    }

}
