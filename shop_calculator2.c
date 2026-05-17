#include <stdio.h>
#include <limits.h>

int main(){
    int x, y, z, ma=0, me=INT_MAX;

    for(int i=0; i<=1;){
        printf("how much is your product?\n");
        scanf("%d", &x);
        y=x+y;
        printf("do you want to continue?\n\t1 for yes\n\t2 for no\n");
        scanf("%d", &i);
        z++;
        if(x<me){
            me=x;
        }
        if(x>ma){
            ma=x;
        }
    }
    printf("your total %d\n", y);
    printf("you have %d products\n", z);
    printf("the average price is %d\n", y/z);
    printf("the smallest value is %d\n", me);
    printf("the biggest value is %d\n", ma);

}
