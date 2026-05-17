#include <stdio.h>

int main() {
    int x,y=0,z=0,a=0,b=0,c;
    
    while(z<20){
        printf("type a grade\n");
        scanf("%d", &x);
        y=y+x;
        z++;
        if(x>=90){
            a++;
        } else if(x<60){
            b++;
        }
       
    }
    
    c=y/20;
    
    printf("%d %d %d", a,b,c);
    return 0;
    
}
