#include <stdio.h>

int main(){
    int x,y,z;

    printf("type three number in a row\n");
    scanf("%d %d %d", &x, &y, &z);

    if(x>0 && y>0 && z>0){
        printf("the numbers can be sides of a triangle\n");
    } else {
        printf("the numbers can't be sides of a triangle\n");
    }

    return 0;
}
