#include <stdio.h>
#include <limits.h>

int main(){
    int x=1,ma=INT_MAX,me=0;
    int z,y=0,t;

    while(x>-1){
            printf("type a grade\n");
            scanf("%d", &x);
            if(x>-1){
                y++;
                z=z+x;
                if(x>me)
                    me=x;
                else if(x<ma)
                    ma=x;

            }
        }
    t=z/y;
    printf("the number of students is %d\n", y);
    printf("the average grade is %d\n", t);
    printf("the greatest grade is %d and the smallest is %d\n", ma,me);
    
    return 0;
    }
