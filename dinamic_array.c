#include <stdio.h>
#include <stdlib.h>

int main(){
   int a,c=0,d=0;
   int *b,*p;
   scanf("%d",&a);
   b=(int*)malloc(sizeof(int)*a);
   for(int i=0;i<a;i++){
      scanf("%d",&b[i]);
      if(b[i]%2==0)c++;
   }
   p=(int*)malloc(sizeof(int)*c);
   for(int i=0;i<a;i++){
      if(b[i]%2==0){
         p[d]=b[i];
         d++;
      }
   }
   for(int i=0;i<a;i++){
      printf("%d\n",b[i]);
   }
   for(int i=0;i<d;i++){
      printf("%d\n",p[i]);
   }
   free(b);
   free(p);
   
   return 0;
}