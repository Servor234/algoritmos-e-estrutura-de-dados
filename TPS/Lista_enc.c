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

typedef struct Celula{
	Veiculo arr;
	struct	Celula *prox;
}Celula;

typedef struct Lista{
	Celula *primeiro;
	Celula *ult;
}Lista;

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
    if(strcmp(b,"true")){
        v1->turbo=false;
    }else{
        v1->turbo=true;
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

Celula* novaCelula(Veiculo x){
	Celula *tmp=(Celula*)malloc(sizeof(Celula));
	tmp->arr=x;
	tmp->prox=NULL;
	return tmp;
}

void tiraFim(Lista *v2){
	Celula *v1=v2->primeiro;

	for(;v1->prox!=v2->ult;v1=v1->prox);
	printf("(R)%s %s\n", v2->ult->arr.marca, v2->ult->arr.modelo);
	v2->ult=v1;
	v2->ult->prox=NULL;

}

void tiraIni(Lista *v2){
    printf("(R)%s %s\n",
           v2->primeiro->arr.marca,
           v2->primeiro->arr.modelo);

    Celula *tmp = v2->primeiro;

    v2->primeiro = v2->primeiro->prox;

    if(v2->primeiro == NULL){
        v2->ult = NULL;
    }

    free(tmp);
}
void tira(int pos, Lista *v2){

    if(v2->primeiro == NULL){
        printf("Lista vazia!\n");
        return;
    }

    if(pos == 0){
        tiraIni(v2);
        return;
    }

    Celula *v1 = v2->primeiro;

    for(int i = 0; i < pos - 1; i++){

        if(v1 == NULL){
            printf("Posicao invalida!\n");
            return;
        }

        v1 = v1->prox;
    }

    if(v1 == NULL || v1->prox == NULL){
        printf("Posicao invalida!\n");
        return;
    }

    Celula *v = v1->prox;

    printf("(R)%s %s\n",
           v->arr.marca,
           v->arr.modelo);

    v1->prox = v->prox;

    if(v == v2->ult){
        v2->ult = v1;
    }

    free(v);
}
void inserirFim(Veiculo x, Lista *v2){
	if(v2->primeiro==v2->ult){
		v2->primeiro=novaCelula(x);
        v2->ult=v2->primeiro;
	}else{
		v2->ult->prox=novaCelula(x);
		v2->ult=v2->ult->prox;
	}
}

void inserirIni(Veiculo x, Lista *v2){
	if(v2->primeiro==v2->ult){
		v2->primeiro=novaCelula(x);
		v2->ult=v2->primeiro;
	}else{
		Celula *tmp=novaCelula(x);
		
		tmp->prox=v2->primeiro;
		v2->primeiro=tmp;
	}
}

void inserir(int pos, Veiculo x, Lista *v2){
	if(v2->primeiro==v2->ult){
		v2->primeiro=novaCelula(x);
        v2->ult=v2->primeiro;
	}else{
		Celula *tmp=v2->primeiro;

		for(int i=0;i<pos;i++, tmp=tmp->prox);

		Celula *aux=novaCelula(x);

		aux->prox=tmp->prox;
		tmp->prox=aux;
	}
}

Lista* convert(Veiculo *a, int *id, int k){
	Lista *v2=(Lista*)malloc(sizeof(Lista));
	v2->primeiro=NULL;
	v2->ult=NULL;

	for(int j=0;j<k;j++){
	for(int i=0;i<500;i++){
		if(a[i].id==id[j]){
			inserirFim(a[i],v2);
			i=500;
		}
	}
	}
	return v2;
}

Veiculo convertP(Veiculo *v1, int id){
	for(int i=0;i<500;i++){
		if(v1[i].id==id){
			return v1[i];
		}
	}
}

void busca(Lista *v1){
	for(Celula *i=v1->primeiro;i!=NULL;i=i->prox){
		formatVeiculo(i->arr);
	}
}

int pegaint(char *frase){
	int soma=0;
	for(int i=0;i<strleng(frase)-1;i++){
		soma = soma*10+(frase[i]-'0');
	}
	return soma;
}

void ops(char **operacoes, Lista *v1, int ops2,Veiculo *carro){
		for(int i=0;i<ops2;i++){
			char *frase=strtok(operacoes[i], " ");
			if(frase[0]=='I' && frase[1]=='I'){
                printf("II\n");
				frase=strtok(NULL," ");
				int id=pegaint(frase);
				inserirIni(convertP(carro, id),v1);
			}else if(frase[0]=='I' && frase[1]=='F'){
                printf("IF\n");
                		frase=strtok(NULL," ");
				int id=pegaint(frase);
				inserirFim(convertP(carro, id),v1);
			}else if(frase[0]=='I' && frase[1]=='*'){
                printf("I*\n");
				frase=strtok(NULL," ");
				int pos=pegaint(frase);
                frase=strtok(NULL," ");
				int id=pegaint(frase);
				inserir(pos,convertP(carro, id),v1);
			}else if(frase[0]=='R' && frase[1]=='I'){
				printf("RI\n");
				tiraIni(v1);
			}else if(frase[0]=='R' && frase[1]=='F'){
				printf("RF\n");
				tiraFim(v1);
            		}else if(frase[0]=='R' && frase[1]=='*'){
				printf("R*\n");
                		frase=strtok(NULL," ");
				int id=pegaint(frase);
				tira(id, v1);
			}
			
	
		if(v1->primeiro!=v1->ult){
			busca(v1);
		}
	}
}


int main(){
	Veiculo *carro=Lercsv("/tmp/veiculos.csv");//começa a leitura do arquivo
	int i=0, j=0, k=0;
	Lista *v1;
	char **frases=NULL,frase[3000];
	int *vetor=NULL;

	while(scanf("%d", &i)==1 && i!=-1){	
		vetor=(int *)realloc(vetor, sizeof(int)*(j+1));
		vetor[j]=i;
		j++;
	}

	getchar();
	v1=convert(carro,vetor,j);
	
	int ops2=0;
	scanf("%d", &ops2);
	getchar();	
	
	frases=(char**)malloc(sizeof(char*)*ops2+1);
	for(int i=0;i<ops2;i++){
		frases[i]=(char *)malloc(sizeof(char)*100);
	}

	int aux=0;
	
	while(aux<ops2){
		fgets(frase,3000,stdin);
	
        	strcpy(frases[aux], frase);
		aux++;
	}
	ops(frases,v1, ops2,carro);

	free(vetor);

    return 0;
}
