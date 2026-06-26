#include <stdio.h>
#include <limits.h>

int main(){
    int x;
    float y;

    printf("Type an integer and a real number\n");
    scanf("%d %f", &x, &y);

    while(y<=10 || x>=10){
        if(x>=10){
            printf("%d\n", x);
            x-=2;
        }
        if(y<=10){
            printf("%d %.2f\n", x, y);
            y++;
        }
    }

    return 0;
}
