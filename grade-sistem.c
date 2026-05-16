#include <stdio.h>

int main(){
    int x=1,ma=0,me=200000;
    int z,y=0;
    float t;

    while(x>-1){
            printf("type a grade\n");
            scanf("%d", &x);
            if(x>-1){
                y++;
                z=z+x;
                if(x>ma)
                    ma=x;
                if(x<me)
                    me=x;

            }
        }
    t=z/y;
    printf("the number of students is %d\n", y);
    printf("the average grade is %f\n", t);
    printf("the greatest grade is %d and the smallest is %d\n", ma,me);

    return 0;
    }
