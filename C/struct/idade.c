#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char nome[100];
    float alt;
    data idade;
}pessoa;

int main(){
    int quant=0;
    pessoa *a;

    scanf("%d", &quant);

    a=(pessoa *)malloc(sizeof(pessoa)*quant);

    for(int i=0;i<quant;i++){
        scanf("%s ", a[i].nome);
        scanf("%f", &a[i].alt);
        scanf("%d %d %d", &a[i].idade.dia, &a[i].idade.mes, &a[i].idade.ano);
    }

    for(int i=0;i<quant;i++){
        printf("%s \n", a[i].nome);
        printf("%.2f\n", a[i].alt);
        printf("%d/%d/%d\n", a[i].idade.dia,a[i].idade.mes,a[i].idade.ano);

    }

}
