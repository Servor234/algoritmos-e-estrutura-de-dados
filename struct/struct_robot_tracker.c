#include <string.h>
#include <stdio.h>

typedef struct{
    int codigo;
    char modelo[100];
    int bateria;
    float dist;
} Robo;

char* condi(Robo unidade){
    for(int i=0;i<4;i++){
        if(unidade.bateria<20){
            return "critico";
        }else if(unidade.bateria>=20 && unidade.bateria<50){
            return "atencao";
        }else{
            return "operacional";
        }
    }
}

int exib(Robo unidade, char status[40]){
    printf("codigo: %d ||modelo: %s ||bateria: %d ||status: %s ||distancia: %f\n", unidade.codigo,unidade.modelo,unidade.bateria,status,unidade.dist);
    return 1;
}



int main(){
    Robo unidade[4];
    char status[4][40];
    float maior=0;
    int marcador=0, g=0;

    for(int i=0;i<4;i++){
        printf("o codigo: \n");
        scanf("%d", &unidade[i].codigo);
        printf("o modelo: \n");
        scanf("%s", &unidade[i].modelo);
        printf("a bateria: \n");
        scanf(" %d", &unidade[i].bateria);
        printf("a distancia: \n");
        scanf("%f", &unidade[i].dist);

        if(maior<unidade[i].dist){
            maior=unidade[i].dist;
            marcador=i;
        }
    }

    for(int i=0;i<4;i++){
    strcpy(status[i],condi(unidade[i]));
    }

    while(g<4){
        g+=exib(unidade[g],status[g]);
    }

    printf("\nmaior distancia: %s\n", unidade[marcador].modelo);

}
