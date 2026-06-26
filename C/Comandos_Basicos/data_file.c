#include <stdio.h>

int main(){
    int b;
    char a[20];
    FILE *c;

    printf("Type your name and age\n");
    scanf("%s %d", &a, &b);

    c=fopen("meus_dados.txt","w");

    if(c==NULL){
        printf("Error while opening the file\n");
        return 1;
    }

    fprintf(c, "My name is %s\nAnd my age is %d\n", a,b);

    fclose(c);
}
