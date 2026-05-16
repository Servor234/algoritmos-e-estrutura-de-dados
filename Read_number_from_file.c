#include <stdio.h>

int main(){
    int a=0;
    FILE *c=NULL;

    if(c==NULL){
        printf("Error while opening file");
        return 1;
    }

   if (fscanf(c, "%d", &a) >= 1) {
       printf("Number: %d\n", a);
   } else {
       printf("Failed to read data from file.\n");
   }

    fclose(c);
}
