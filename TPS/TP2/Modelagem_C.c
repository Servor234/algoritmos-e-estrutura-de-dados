#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    int dia;
    int mes;
    int ano;
}Data;

typedef struct{
    int id;
    char marca[1000];
    char modelo[1000];
    int ano;
    char categoria[1000];
    char combustivel[2][1000];
    int cilindro;
    double cilindrada;
    char transmissao[1000];
    char tracao[1000];
    double consumoCidade;
    double consumoEstrada;
    double co2;
    bool turbo;
    Data dataRegistro;
}Veiculo;

Data parseData(char *a){
    Data a1;
    int cont=0, unid=1, soma=0;
    
    for(int i=0;i<4;i++){
        soma+=a[i]-'0';
        if(i+1!=4)
        soma*=10;
    }

    a1.ano=soma;
    soma=0;

    for(int i=0;i<2;i++){
        soma+=a[i]-'0';
        if(i+1!=1)
        soma*=10;
    }

    a1.mes=soma;
    soma=0;

    for(int i=0;i<2;i++){
        soma+=a[i]-'0';
        if(i+1!=1)
        soma*=10;
    }

    a1.dia=soma;
    soma=0;

    return a1;
}

void formatData(Data d1){
    printf("%d/%d/%d\n", d1.dia,d1.mes,d1.ano);
}

Veiculo* parseVeiculo(char *a){
    Veiculo *v1 = (Veiculo*) malloc (sizeof(Veiculo));
    char *b;
    b = strtok(a, ",");
    int soma=0;
    for(int i=0;i<5;i++){
        soma+=b[i]-'0';
        if(i+1!=5)
        soma*=10;
    }
    v1->id=soma;

    b=strtok(NULL,",");
    strcpy(v1->marca,b);

    b = strtok(NULL,",");
    strcpy(v1->modelo,b);

    b=strtok(NULL,",");
    soma=0;
    for(int i=0;i<4;i++){
        soma+=a[i]-'0';
        if(i+1!=4)
        soma*=10;
    }
    v1->ano=soma;

    b=strtok(NULL,",");
    strcpy(v1->categoria,b);

    b=strtok(NULL,";");

    if(b!=NULL){
    b=strtok(NULL,";");
    strcpy(v1->combustivel[0],b);
    b=strtok(NULL,",");
    strcpy(v1->combustivel[1],b);
    }else{
    b=strtok(NULL,",");
    strcpy(v1->combustivel[0],b);
    }

    b=strtok(NULL,",");
    soma=0;
    int tam =0;

    while(b[tam]!='\0'){
        tam++;
    }

    for(int i=0;i<tam;i++){
        soma+=b[i]-'0';
        if(i+1!=tam){
            soma*=10;
        }
    }
    v1->cilindro=soma; 

    b=strtok(NULL,",");
    double soma1=0;
    soma1+=b[0]-'0';
    soma1*=10;
    soma1+=b[1]-'0';
    
    v1->cilindrada=(soma1/100);
    
    b=strtok(NULL,",");
    strcpy(v1->transmissao,b);
    b=strtok(NULL,",");
    strcpy(v1->tracao,b);

    soma1=0;
    b=strtok(NULL,",");
    for(int i=0;i<5;i++){
        if(b[i]=='.'){
            i++;
        }
        soma1+=b[i]-'0';
        if(i+1>=5){
            soma1*=10;
        }
    }
    v1->consumoCidade=(soma1/100);
    
    soma1=0;
    b=strtok(NULL,",");
    for(int i=0;i<5;i++){
        if(b[i]=='.'){
            i++;
        }
        soma1+=b[i]-'0';
        if(i+1>=5){
            soma1*=10;
        }
    }
    v1->consumoEstrada=(soma1/100);

    b=strtok(NULL,",");
    if(b[0]=='0'){
        v1->co2=0;
    }else{
        soma1=0;
        for(int i=0;i<4;i++){
            if(b[i]=='.'){
                i++;
            }
            soma1+=b[i]-'0';
            if(i+1>=4){
                soma1*=10;
            }
        }
        v1->co2=soma1/10;
    }

    b=strtok(NULL,",");
    if(strcmp(b,"true")){
        v1->turbo=false;
    }else{
        v1->turbo=true;
    }

    b=strtok(NULL,",");

    v1->dataRegistro=parseData(b);
    return v1;
}

void formatVeiculo(Veiculo v){
    printf("%d ## %s ## %s ## %d ## %s ##", v.id,v.marca,v.modelo,v.ano,v.categoria);

    if(v.combustivel[1]!=NULL){
        for(int i=0;i<2;i++){
            printf(" %s ##", v.combustivel[i]);
        }
    }else{
        printf(" %s ##", v.combustivel[0]);
    }

    printf("%d ## %lf ## %s ## %s ## %lf ## %lf ## %lf ##", v.cilindro,v.cilindrada,v.transmissao,v.tracao,v.consumoCidade,v.consumoEstrada);

    if(v.turbo == true){
        printf(" true ##");
    }else{
        printf(" false ##");
    }

    formatData(v.dataRegistro);
}

Veiculo* Lercsv(char *caminhoArquivo, int *n){
    FILE *f = fopen(*caminhoArquivo, "r");
    Veiculo *v1=(Veiculo**)malloc(sizeof(Veiculo)*500); 
    char *b=(char *) malloc (sizeof(char)*1000);
    int i=0;
    while(fgets(b,1000,f)!=NULL){
        Veiculo *tmp;
        tmp=parseVeiculo(b);
        v1[i]=*tmp;
        tmp=NULL;
        i++;
    }
}

int strgrand(char a[], char b[]){
    int i=0;
    while(a[i]!='\0' && b[i]!='\0'){
        if(a[i]>b[i]){
            return 1;
        }else if(a[i]<b[i]){
            return 0;
        }
        i++;
    }
    return 2;
}

void selecao(Veiculo *v1){
    for(int i=0;i<500;i++){
        char *modelo = v1[i].modelo;
        int k=i;
        for(int j=i+1;j<500;j++){
            if(strgrand(modelo,v1[j].modelo)==1){
                modelo=v1[j].modelo;
                k=j;
            }
        }

        Veiculo v2=v1[k];
        v1[k]=v1[i];
        v1[i]=v2;
    }
}

void counting(Veiculo *v1){
    int i=0, maior=v1[0].cilindro;

    while(i!=501){
        if(maior<v1[i].cilindro){
            maior=v1[i].cilindro;
        }
        i++;
    }

    int *suport = (int*)malloc(sizeof(int)*maior);  
    for(int i=0;i<500;i++){
        suport[v1[i].cilindro]++;
    }

    for(int i=0;i<maior;i++){
        suport[i+1]+=suport[i];
    }

    Veiculo *v2=(Veiculo*)malloc(sizeof(Veiculo)*500);

    for(int i=0;i<500;i++){
        v2[suport[v1[i].cilindro]]=v1[i];
    }

}

int main(){
    return 0;
}