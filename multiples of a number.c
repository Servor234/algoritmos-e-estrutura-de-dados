#include <stdio.h>

int main(){
    const int x;
    int y=1, z;

    printf("type a number for his multiples\n");
    scanf("%d", &x);

    while (y<=10){
        z=x*y;
        printf("%d x %d = %d\n", x, y, z);
        y++;

    }
}
