#include <stdio.h>

int main(){
    int x;
    char b[100];

    printf("Type your name\n");
    scanf("%s", &b);

    printf("Type your age\n");
    scanf("%d", &x);

    printf("%s has %d years.\n", b,x);

    return 0;
}
