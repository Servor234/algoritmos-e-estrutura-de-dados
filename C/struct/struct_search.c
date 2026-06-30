#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    char tipo[100];
    int part;
    int rank;
}banda;

int main(){
    banda a[5];
    char grupo[100];

    for(int i=0;i<5;i++){
     scanf("%s %s %d %d", a[i].nome, a[i].tipo, &a[i].part, &a[i].rank);
    }

    for(int i=0;i<4;i++){
     if(a[i].rank>a[i+1].rank){
        banda tmp=a[i];
        a[i]=a[i+1];
        a[i+1]=tmp;
     }
    }

    for(int i=0;i<5;i++){
     printf("%s\n%s\n%d\n%d\n", a[i].nome,a[i].tipo,a[i].part,a[i].rank);
    }

    scanf("%s", grupo);

    for(int i=0;i<5;i++){
        if(strstr(a[i].nome,grupo)!=NULL){
            printf("encontrado\n");
        }
    }
}
