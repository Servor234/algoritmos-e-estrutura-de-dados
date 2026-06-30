#include <stdio.h>

typedef struct{
    char nome[100];
    char atu[100];
    float val;
    float vala;
    double cres;
}bolsa;

int main(){
    bolsa a;

    scanf("%s %s %f %f", a.nome,a.atu,&a.val, &a.vala);

    a.cres=a.val/a.vala;


    printf("%s\n%s\n%f\n%f\n%lf\n", a.nome,a.atu,a.val,a.vala, a.cres);

}
