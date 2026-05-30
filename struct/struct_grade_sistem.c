#include <stdio.h>

typedef struct alunos{
    char nome[100];
    int mat;
    int nota;
}Alunos;

int main(){
    Alunos turma[5];

    for(int i=0;i<5;i++){
        scanf("%s", &turma[i].nome);
        scanf(" %d", &turma[i].mat);
        scanf("%d", &turma[i].nota);
    }
    printf("\n");

    for(int i=0;i<5;i++){
        printf("nome: %s || matricula: %d || nota: %d\n", turma[i].nome,turma[i].mat,turma[i].nota);
    }

    printf("\naprovados:\n");

    for(int i=0;i<5;i++){
        if(turma[i].nota>=60){
            printf("%s\n", turma[i].nome);
        }
    }

}
