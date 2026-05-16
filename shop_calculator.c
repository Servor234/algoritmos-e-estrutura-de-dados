#include <stdio.h>

int main(){
    int x, y, i;

    for(int i=0; i<=1;){
        printf("how much is your product?\n");
        scanf("%d", &x);
        y=x+y;
        printf("do you want to continue?\n\t1 for yes\n\t2 for no\n");
        scanf("%d", &i);
    }
    printf("your total %d", y);

}
