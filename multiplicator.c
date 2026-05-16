#include <stdio.h>

int main() {
    int x=0,y=0,z=0;
    
    printf("type numbers to multiply?\n");
    scanf("%d %d", &x, &y);
    
       for(int i=0; i<y; i++){
           z+=x;
        }
    printf("%d", z);
    
    return 0;
