#include <stdio.h>

int main() {
    int n,x=0,y=1,z=0,h=0;
    
    printf("ate onde?\n");
    scanf("%d", &n);
    
    
    while(x<n-1){
        h=y+z;
        z=y;
        y=h;
        x++;
    }
    printf("%d\n", h);
}
