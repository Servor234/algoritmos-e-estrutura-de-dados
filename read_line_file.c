#include <stdio.h>

int main(){
    int a, f=0;
    char b[100],buffer[200];
    FILE *c;

    printf("What is the name of the file?\n");
    scanf("%s", &b);

    printf("%s\n", b);

    c=fopen("meus_dados.txt","r");

    if(c==NULL){
        printf("Error while opening file\n");
        return 1;
    }

    while(fgets(buffer,sizeof(buffer), c)){
       printf("%s", buffer);
    }

    fclose(c);

}
