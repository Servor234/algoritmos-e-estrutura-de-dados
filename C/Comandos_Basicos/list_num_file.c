#include <stdio.h>

int main(){
    int a,b;
    FILE *c;

    printf("How many numbers?\n");
    scanf("%d", &a);

    c=fopen("meus_dados.txt", "w");

    for(int i=0; i<a; i++){
        printf("Type a number\n");
        scanf("%d", &b);
        fprintf(c, "%d\n", b);
    }

    fclose(c);
}
