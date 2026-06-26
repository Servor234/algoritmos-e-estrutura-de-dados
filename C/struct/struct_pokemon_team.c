#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[100];
    char tipo[100];
    int nivel;
    int CP;
}Pokemon;

int leitura(Pokemon *time, int *fogo){
    printf("Pokemon: ");
    scanf("%s", time->nome);
    printf("Tipo: ");
    scanf(" %s", time->tipo);

    if(strcmp(time->tipo,"fogo")==0 || strcmp(time->tipo,"Fogo")==0){
        *fogo=*fogo+1;
    }

    printf("Nivel: ");
    scanf(" %d", &time->nivel);
    printf("CP: ");
    scanf("%d", &time->CP);

    return 1;
}

char* compe(Pokemon time){
    if(time.CP<500){
        return "iniciante";
    }else if(time.CP>=500 && time.CP<1500){
        return "intermediario";
    }else{
        return "lendario";
    }
}

int exibi(Pokemon time, char cla[100]){
    printf("Nome: %s ||Tipo: %s ||Nivel: %d ||CP: %d\n", time.nome,time.tipo,time.nivel,time.CP);

    printf("\nClasse: %s\n", cla);
    return 1;
}

int main(){
    Pokemon time[6];
    int con=0, nivel=0,fogo,CP=0, marcador1=0,marcador2=0;
    char cla[6][100];

    while(con<6){
        con+=leitura(&time[con], &fogo);
        if(time[con-1].CP>CP){
            CP=time[con-1].CP;
            marcador1=con-1;
        }
        if(time[con-1].nivel>nivel){
            nivel=time[con-1].nivel;
            marcador2=con-1;
        }
    }

    for(int i=0;i<6;i++){
        strcpy(cla[i],compe(time[i]));
    }

    con=0;

    while(con<6){
    con+=exibi(time[con],cla[con]);
    }

    printf("maior nivel: %s ||maior CP: %s ||numeros de tipo fogo: %d\n", time[marcador2].nome,time[marcador1].nome,fogo);
}
