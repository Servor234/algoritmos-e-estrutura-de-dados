#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[100];
    int prob;
    int pen;
}equipe;

int main(){
    int times=0, g,l=0,m=0,n=0;;
    equipe *time;

    scanf("%d", &times);

    time=(equipe*)malloc(sizeof(equipe)*times);

    for(int i=0;i<times;i++){
        scanf("%s %d %d", time[i].nome, &time[i].prob, &time[i].pen);
    }


    for(int i=0; i<times-1; i++){
        for(int j=0; j<times-1-i; j++){

        if(time[j].prob < time[j+1].prob){
            equipe tmp = time[j];
            time[j] = time[j+1];
            time[j+1] = tmp;
        }
        else if(time[j].prob == time[j+1].prob && time[j].pen > time[j+1].pen){
            equipe tmp = time[j];
            time[j] = time[j+1];
            time[j+1] = tmp;
        }
        else if(time[j].prob == time[j+1].prob && time[j].pen == time[j+1].pen && strcmp(time[j].nome, time[j+1].nome) > 0){
            equipe tmp = time[j];
            time[j] = time[j+1];
            time[j+1] = tmp;
        }
    }
}

        for(int i=0;i<times;i++){
            printf("%d %s %d %d\n", i+1,time[i].nome,time[i].prob,time[i].pen);
        }

}
