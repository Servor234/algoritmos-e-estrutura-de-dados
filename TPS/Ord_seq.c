#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct {//define o tipo data
    int dia;
    int mes;
    int ano;
}Data;

int strleng(char frase[]){//metodo que olha o tamanho das strings
	int i=0;
	for(; frase[i]!='\0'; i++);
	return i;//retorna o tamanho
}

typedef struct{//define o tipo veiculo
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

Data parseData(char *a){//formata os numeros de data
    Data a1;
    int soma=0;
    char *b=strtok(a,"-");//separa a frase
    
    for(int i=0;i<strleng(b);i++){//realiza o processo de soma com uma multiplicação caso diferente do ultimo digito
        soma+=b[i]-'0';
        if(i+1!=strleng(b))
        soma*=10;
    }

    a1.ano=soma;//guarda em ano
    b=strtok(NULL,"-");
    soma=0;

    for(int i=0;i<strleng(b);i++){//repete o metodo de guardar ints de ano
        soma+=b[i]-'0';
        if(i+1!=strleng(b)){
        soma*=10;
	}
    }

    a1.mes=soma;//guarda em mes
    b=strtok(NULL,"-");
    int soma1=0;

    for(int i=0;i<strleng(b)-1;i++){//repete o processo de guardar ints de soma mas sem a separação do if
        soma1= soma1*10+(b[i]-'0');
    }

    a1.dia=soma1;//guarda em dia
    soma=0;

    return a1;//retorna a data formatada
}

void formatData(Data d1){
    if(d1.dia<10){//caso dia seja menor que 10 coloca 0 antes do numero
    printf("0%d/", d1.dia);
    }else{//caso contrario coloca sem o 0
    printf("%d/", d1.dia);
    }
    if(d1.mes<10){//repete a condição de dia
    printf("0%d/", d1.mes);
    }else{
    printf("%d/", d1.mes);
    }
//coloca o ano
    printf("%d]\n", d1.ano);
}

Veiculo* parseVeiculo(char *a){
    Veiculo *v1 = (Veiculo*) malloc (sizeof(Veiculo));
    char *b;
    b = strtok(a, ",");//começa a partir a string original em tokens
    int soma=0;
    for(int i=0;i<strleng(b);i++){//pega todos os digitos de id e guarda somando
        soma+=b[i]-'0';
        if(i+1!=strleng(b)){//caso seja diferente do ultimo digito multiplica por 10
        soma*=10;
	}
    }
    v1->id=soma;//guarda em soma

    b=strtok(NULL,",");
    strcpy(v1->marca,b);//copia a string para a marca

    b = strtok(NULL,",");
    strcpy(v1->modelo,b);//copia a string para o modelo

    b=strtok(NULL,",");
    soma=0;
    for(int i=0;i<strleng(b);i++){//repete a leitura de int de id
        soma+=b[i]-'0';
        if(i+1!=strleng(b)){
        soma*=10;
	}
    }
    v1->ano=soma;//guarda em ano

    b=strtok(NULL,",");
    strcpy(v1->categoria,b);//copia a string para a categoria

    b = strtok(NULL, ",");
    
    int j = 0;
    while(b[j]!='\0' && b[j]!=';'){//procura se existe um ; na parte da string
	    j++;
    }

    if(b[j]==';'){//caso tenha ; executa o processo de guardar combustivel
    b[j]='\0';//separa as strings de combustivel

    strcpy(v1->combustivel[0],b);//copia a primeira string para o primeiro combustivel

    strcpy(v1->combustivel[1],b+j+1);//copia o segundo string para o segundo combustivel

    }else{//caso contrario guarda somente o primeiro combustivel e deixa a segunda string de combustivel como \0
    strcpy(v1->combustivel[0], b);
    v1->combustivel[1][0] = '\0';
    }
 
    b=strtok(NULL,",");

    soma=0;

    for(int i=0;i<strleng(b);i++){//repete o processo de guardar int de id
        soma+=b[i]-'0';
        if(i+1!=strleng(b)){
            soma*=10;
        }
    }

    v1->cilindro=soma;//guarda em numero de cilindros

    b=strtok(NULL,",");
    double soma1=0;
    soma1+=b[0]-'0';
    soma1*=10;
    soma1+=b[2]-'0';
    //guarda as cilindradas por pegar o digito antes e depois da virgula, multiplicar e somar
    v1->cilindrada=(soma1/10);//guarda em cilindrada
    
    b=strtok(NULL,",");
    strcpy(v1->transmissao,b);//copia a frase para transmissão

    b=strtok(NULL,",");
    strcpy(v1->tracao,b);//copia a frase para tracao

    soma1=0;
    b=strtok(NULL,",");
    for(int i=0;i<strleng(b);i++){//faz um processo para guardar doubles, que caso chege no . ele irá pular para analisar o proximo numero
        if(b[i]=='.'){
            i++;
        }
        soma1+=b[i]-'0';
        if(i+1<strleng(b)){//caso i+1 seja diferente do ultimo multiplica soma para colocar mais digitos
            soma1*=10;
        }
    }
    v1->consumoCidade=(soma1/100);//guarda a soma dividida de doubles
    
    soma1=0;
    b=strtok(NULL,",");
    for(int i=0;i<strleng(b);i++){//repete o metodo de consumo cidade
        if(b[i]=='.'){
            i++;
        }
        soma1+=b[i]-'0';
        if(i+1<strleng(b)){
            soma1*=10;
        }
    }
    v1->consumoEstrada=(soma1/100);//guarda em consumo estrada

    b=strtok(NULL,",");
    if(b[0]=='0'){//caso co2 seja 0, ele já guarda como 0, e não executa
        v1->co2=0;
    }else{
        soma1=0;
        for(int i=0;i<strleng(b);i++){//faz a leitura dos digitos igual a consumo cidade
            if(b[i]=='.'){
                i++;
            }
            soma1+=b[i]-'0';
            if(i+1<strleng(b)){
                soma1*=10;
            }
        }
        v1->co2=soma1/10;//divide por 10 para pegar o digito decimal
    }

    b=strtok(NULL,",");//guarda os booleanos
    if(strcmp(b,"true")==0){
        v1->turbo=true;
    }else{
        v1->turbo=false;
    }
   b = strtok(NULL, ",");

v1->dataRegistro = parseData(b);//chama o parseamento de dados de data
    return v1;//retorna a linha já preparada
}

void formatVeiculo(Veiculo v){//metodo de mostrar a da maneira formatada se encontrar o veiculo
    printf("[%d ## %s ## %s ## %d ## %s ##", v.id,v.marca,v.modelo,v.ano,v.categoria);

    printf(" [");//encapsula o combustivel
    if(v.combustivel[1][0]!='\0'){//se o digito do segundo combustivel não for \0, ira colocar os dois combustiveis
    printf("%s,", v.combustivel[0]);
    printf("%s] ## ", v.combustivel[1]);

    }else{//caso contrario não ira fazer isso e coloca somente 1
        printf("%s] ## ", v.combustivel[0]);
    }
//mostra todos com suas devidas casas decimais
    printf("%d ## %.1lf ## %s ## %s ## %.2lf ## %.2lf ## %.1lf ##", v.cilindro,v.cilindrada,v.transmissao,v.tracao,v.consumoCidade,v.consumoEstrada, v.co2);

    if(v.turbo == true){
        printf(" true ## ");
    }else{
        printf(" false ## ");
    }

    formatData(v.dataRegistro);//chama o registro de data
}

Veiculo* Lercsv(char *caminhoArquivo){
    FILE *f = fopen(caminhoArquivo, "r");//le o caminho do arquivo com um ponteiro para este
    if(f == NULL){
	    printf("Erro ao abrir o arquivo \n");//marca o erro de leitura do arquivo
    }
    Veiculo *v1=(Veiculo*)malloc(sizeof(Veiculo)*500);//cria a tabela de veiculos 
    char *b=(char *) malloc (sizeof(char)*1000);//pega as linhas do arquivo
    int i=0;
    
    fgets(b,1000,f);//pula o cabeçario
    
    while(fgets(b,1000,f)!=NULL){//le tudo ate o fim do arquivo
        Veiculo *tmp;
        tmp=parseVeiculo(b);
        v1[i]=*tmp;//guarda o conteudo em cada linha
	free(tmp);//libera o ponteiro de temporario e vai para a proxima linha
        tmp=NULL;
        i++;
    }
    fclose(f);
    free(b);
    b=NULL;
    return v1;//fecha o arquivo e retorna o vetor
}

Veiculo* convert(Veiculo *a, int *id, int k){//realiza a converção dos ids para um vetor de veiculos ja formatado
	Veiculo *v2=(Veiculo*)malloc(sizeof(Veiculo)*k);
	for(int j=0;j<k;j++){//olha a quatidade de ids que tem
	for(int i=0;i<500;i++){//procura pelo arquivo
		if(a[i].id==id[j]){
			v2[j]=a[i];//caso ache, para o loop e vai para o proximo
			i=500;
		}
	}
	}
	return v2;//retorna o novo array montado
}

void busca(Veiculo *v1,int k){//realiza a mostra de todos os veiculos de um array
	for(int i=0;i<k;i++){
		formatVeiculo(v1[i]);
	}
}

int strcomp(char *a, char *b){//metodo de comparar strings
    int i = 0;
    while(a[i] != '\0' || b[i] != '\0'){
        char char1 = a[i];//sempre pega o caracter analisado de cada string
        char char2 = b[i];
        
        if(char1>='A' && char1<='Z'){ //converte para minusculo para que tudo seja minusculo nas frases
            char1=char1+32; 
        }

        if(char2>='A' && char2<='Z'){
            char2=char2+32; 
        }
        
        if(char1<char2)//caso a letra da frase 1 seja menor, a frase 2 é maior
        return -1;//retorna -1
        if(char1>char2) //caso a letra da frase 2 seja menor, a frase 1 é maior
        return 1;//retorna 1
        
        i++;
    }
    return 0;
}

void ord(int *ids, int k, Veiculo *v1){//ordena os ids para ter as saidas em base de modelo
	Veiculo *v2=convert(v1,ids,k);//faz a converção dos ids
	for(int i=0;i<k;i++){
	
	int menor=i;//realiza a seleção baseada em modelo
	
	for(int j=i+1;j<k;j++){
		if(strcomp(v2[j].modelo,v2[menor].modelo)<0){
			menor=j;
		}
	}

	Veiculo tmp=v2[menor];
	v2[menor]=v2[i];
	v2[i]=tmp;
	}
	busca(v2,k);//mostra o encontrado
}

int main(){
	Veiculo *carro=Lercsv("/tmp/veiculos.csv");//começa a leitura do arquivo
	int i=0, j=0;
	int *vetor=NULL;
	
	while(scanf("%d", &i)==1 && i!=-1){//le ate -1 ou enquanto o scanf for valido	
		vetor=(int *)realloc(vetor, sizeof(int)*(j+1));//realiza o aumento dinamico de um vetor para cada chamada
		vetor[j]=i;
		j++;
	}

	ord(vetor,j,carro);//começa o codigo de ordenar e mostrar

	free(vetor);//libera o vetor

    return 0;
}
