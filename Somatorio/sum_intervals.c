#include <stdio.h>

int main(){
   int a=0,b=0,c=0;
   
   for (int i=1; i<=6;i++){
      a=i+a;
      c+=a;
   }
   
   printf("%d\n", c);
}