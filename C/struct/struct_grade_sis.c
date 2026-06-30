#include <stdio.h>

typedef struct{
    int mat;
    char nome[100];
    int nota1;
    int nota2;
    int nota3;
    double med;
}turma;

int main(){
    turma aluno[5];
    double maM=0,meM=1000,maP1=0;
    int marc1,marc2,marc3;

    for(int i=0;i<5;i++){
        scanf("%d %s %d %d %d", &aluno[i].mat, aluno[i].nome, &aluno[i].nota1,&aluno[i].nota2,&aluno[i].nota3);
        aluno[i].med=(aluno[i].nota1+aluno[i].nota2+aluno[i].nota3)/3;

        if(aluno[i].nota1>maP1){
            maP1=aluno[i].nota1;
            marc1=i;
        }

        if(aluno[i].med>maM){
            maM=aluno[i].med;
            marc2=i;
        }

        if(aluno[i].med<meM){
            meM=aluno[i].med;
            marc3=i;
        }
    }

    for(int i=0;i<5;i++){
        if(aluno[i].med>6){
            printf("Aluno %d: aprovado\n", i+1);
        }else{
            printf("Aluno %d: reprovado\n", i+1);
        }
    }

    printf("%s\n%s\n%s\n", aluno[marc1].nome,aluno[marc2].nome,aluno[marc3].nome);

}
