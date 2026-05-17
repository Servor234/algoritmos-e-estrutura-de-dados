#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c,d;

    printf("type two numbers\n");
    scanf("%d %d", &a, &b);

    printf("choose an operation\n\t1 Sum\n\t2 Sub\n\t3 Multi\n\t4 Divi\n");
    scanf("%d", &c);

    switch(c){
    case 1:
        d=a+b;
        printf("%d\n", d);
        break;

    case 2:
        abs(d=a-b);
        printf("%d\n", d);
        break;

    case 3:
        d=a*b;
        printf("%d\n", d);
        break;

    case 4:
        d=a/b;
        printf("%d\n", d);
        break;

    default:
        printf("invalid number\n");
        }
    return 0;
    }
