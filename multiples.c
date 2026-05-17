#include <stdio.h>

int main(){
    int x, y;

    printf("what is the value to be multiplicated?\n");
    scanf("%d", &x);

    for(int i=0; i<10; i++){
        y=x*(i+1);
        printf("%d * %d = %d\n", x,i+1,y);
    }
    return 0;
}
