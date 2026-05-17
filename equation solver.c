#include <stdio.h>

int main(){
    float a,b,r;

    printf("what are the coefficients of the equation ax b==0?\n");
    scanf("%f %f", &a, &b);

    if(a!=0 && b!=0){
          r=b/a;
          printf("%.2f is the solution", r);
    } else if(a!=0 && b==0){
        printf("the solution is 0");
    } else if(a==0){
        printf("not an equation");
    }

    return 0;
}
