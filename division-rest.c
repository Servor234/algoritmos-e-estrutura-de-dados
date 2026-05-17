#include <stdio.h>

int main() {
  int x=0,y=0,z=0,h;
    
  printf("type 2 numbers to divide\n");
  scanf("%d %d", &x, &y);
    
    while(x>=y){
        x=x-y;
        z++;
        printf("%d\n", x);
    }
    
  h=x;
  printf("%d e resto: %d", z, h);
    
  return 0;
}
