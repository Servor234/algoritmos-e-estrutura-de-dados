#include <stdio.h>

int main(){
    int a;
    FILE *c=NULL;

    printf("Type a number\n");
    scanf("%d", &a);

    c=fopen("meus_dados.txt", "w");

    if(c==NULL){
        printf("Error while opening file");
        return 1;
    }

    fprintf(c,"your number is %d\n", a);

    fclose(c);

}
