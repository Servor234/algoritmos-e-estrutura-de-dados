#include <stdio.h>

int main(){
    int *p, a;
    float *g,h;
    char *e,f;

    scanf("%d %f %c", &a,&h,&f);

    p=&a;
    g=&h;
    e=&f;

    printf("%d\n%f\n%c\n", a,h,f);

    scanf("%d %f %c", p,g,e);

    printf("%d\n%f\n%c\n", a,h,f);

    return 0;
}
