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

Celula* novaCelula(Veiculo x){//metodo que cria uma nova celula
	Celula *tmp=(Celula*)malloc(sizeof(Celula));//cria a nova celula dinamicamente
	tmp->arr=x;//coloca o veiculo da celula como o veiculo x do parametro
	tmp->prox=NULL;//deixa prox como null para evitar erros
	return tmp;//retorna a nova celula
}

void tiraFim(Lista *v2){//metodo que remove no final
    if(v2->primeiro==NULL){//caso a lista esteja vazia não faz nada
    }else if(v2->primeiro==v2->ult){//caso a lista tenha somente 1 elemento
        printf("(R)%s %s\n",v2->ult->arr.marca,v2->ult->arr.modelo);//mostra os elementos desejados do veiculo da celula

        free(v2->ult);//libera a celula

        v2->primeiro = NULL;//deixa os ponteiros dos limites como nulos
        v2->ult = NULL;
    }else{//caso não seja nula e tenha mais de 1 elemento
        Celula *ant=v2->primeiro;//cria um ponteiro auxiliar na primeira celula 

        while(ant->prox!=v2->ult){//caminha até a posição anterior a ultima celula
            ant=ant->prox;
        }

        printf("(R)%s %s\n",v2->ult->arr.marca,v2->ult->arr.modelo);//mostra os elementos desejados do veiculo da celula

        free(v2->ult);//libera a celula

        v2->ult = ant;//passa o ponteiro da ultima celula para sua celula anterior
        v2->ult->prox = NULL;//deixa que o proximo seja nulo para evitar erros
    }
}

void tiraIni(Lista *v2){//metodo que remove no inicio
    if(v2->primeiro==NULL){//caso a lista esteja vazia não faz nada
    }else{
        Celula *tmp=v2->primeiro;//caso tenha elementos cria um ponteiro auxiliar na primeira celula

        printf("(R)%s %s\n",tmp->arr.marca,tmp->arr.modelo);//mostra os elementos da primeira celula

        v2->primeiro=tmp->prox;//faz o ponteiro da primeira celula ir para frente

        if(v2->primeiro==NULL){//caso tenha somente 1 celula atualiza o ultimo para nulo
            v2->ult=NULL;
        }

        free(tmp);//libera a antiga primeira celula
    }
}

void tira(int pos, Lista *v2){//realiza a remoção da celula em uma posição desejada
    if(pos==0){//caso a posição seja 0, chama a remoção no inicio
        tiraIni(v2);
    }else if(v2->primeiro==NULL){//caso a posição seja diferente de 0 e a lista esteja vazia, não faz nada
    }else{
        Celula *ant=v2->primeiro;//cria uma celula auxiliar a partir de primeiro da lista analisada

        for(int i=0;i<pos-1;i++){//caminha pela lista até a posição anterior da desejada
            ant=ant->prox;
        }

        if(ant->prox!= NULL){//caso não seja a ultima ira operar
        Celula *remover=ant->prox;//cria outro ponteiro de apoio na celula que ira remover

        printf("(R)%s %s\n",remover->arr.marca,remover->arr.modelo);//mostra os atributos desejados do veiculo da celula a ser removida

        ant->prox=remover->prox;//faz a celula anteriora ao removido pular a celula que deve ser removida

        if(remover==v2->ult){//caso o removido seja a ultima, atualiza para ultimo ser a celula anteriora
            v2->ult=ant;
        }

        free(remover);//libera a memoria da celula removida
        }
    }
}

void inserirFim(Veiculo x, Lista *v2){//realiza a inserção no final da lista
    Celula *nova=novaCelula(x);//cria a celula desejada

    if(v2->primeiro==NULL){//caso a lista esteja vazia, cria a primeira celula
        v2->primeiro=nova;
        v2->ult=nova;

    }else{//caso contrario coloca a celula desejada na ultima posição e move a ultima
        v2->ult->prox=nova;
        v2->ult=nova;
    }
}

void inserirIni(Veiculo x, Lista *v2){//metodo para inserir no inicio
    Celula *nova=novaCelula(x);//celula nova desejada

    if(v2->primeiro==NULL){//caso a lista esteja vazia ira inserir a celula como a primeira 
        v2->primeiro=nova;
        v2->ult=nova;

    }else{//caso contrario ira realizar a inserção na como anterior ao primeiro e leva primeiro para tras
        nova->prox=v2->primeiro;
        v2->primeiro=nova;
    }
}

void inserir(int pos, Veiculo x, Lista *v2){//metodo de inserir na posição desejada um veiculo x
    if(pos==0){//caso a posição seja 0, chama a função para inserir no inicio
        inserirIni(x, v2);
    }else if(v2->primeiro==NULL){//caso a lista esteja vazia, não ira operar
    }else{//caso seja outra posição e tenha elementos ira realizar a inserção
        Celula *ant=v2->primeiro;//cria um ponteiro auxilidar a partir da primeira celula

        for(int i=0;i<pos-1;i++){//percorre ate a posição anterior ao desejado 
            ant=ant->prox;
        }

        if(ant->prox!=NULL){//caso a posição não seja a ultima
        Celula *nova=novaCelula(x);//cria a celula com o veiculo desejado

        nova->prox=ant->prox;//coloca a celula na posição desejada
        ant->prox=nova;

        if(nova->prox==NULL){//caso a nova celula seja a ultima, troca o ponteiro da ultima celula para ela
            v2->ult=nova;
        }
        }else{//caso a posição seja a ultima ira inserir no fim
            inserirFim(x,v2);
        }
    }
}

Lista *convert(Veiculo *a, int *id, int k){//metodo que converte o vetor de ids em um vetor de veiculos no formato de lista encadeada
    Lista *v2=malloc(sizeof(Lista));//cria a lista encadeada que vai receber os veiculos

    v2->primeiro=NULL;//inicializa a lista encadeada com NULL em primeiro e ultimo
    v2->ult = NULL;

    for(int j=0;j<k;j++){//começa a busca por cada id do vetor de ids
        for(int i=0;i<500;i++){
            if(a[i].id==id[j]){//caso encontre o veiculo com o mesmo id, insere no fim da lista encadeada
                inserirFim(a[i],v2);
                i=500;
            }
        }
    }

    return v2;
}

Veiculo convertP(Veiculo *v1, int id){//realiza a busca de um veiculo pelo id e retorna o veiculo encontrado
    for(int i=0;i<500;i++){
        if(v1[i].id==id){
            return v1[i];
        }
    }
}

void busca(Lista *v1){//metodo que mostra toda a lista entregue como parametro 
    for(Celula *i=v1->primeiro;i!=NULL;i=i->prox){
        formatVeiculo(i->arr);
    }
}

int pegaint(char *frase){//metodo de conversão de string numerica para int
    int soma = 0;
    for(int i=0; frase[i]>='0' && frase[i]<='9';i++){//enquanto os digitos da frase numerico estiverem entre 0 e 9, realiza a soma dos digitos em 1 numero que estava na string
        soma = soma * 10 + (frase[i] - '0');
    }
    return soma;//retorna o numero inteiro
}

void ops(char **operacoes,Lista *v1,int ops2,Veiculo *carro){//metodo que realiza as operações de inserção e remoção de veiculos na lista
    for(int i=0;i<ops2;i++){//percorre todas as requisições feitas no main
        char *frase=strtok(operacoes[i], " ");//separa as requisições pelo espaço para pegar a operação e o id e posição

        if(frase[0]=='I' && frase[1]=='I'){//caso seja II, pega o id e chama a função de inserir no inicio
            frase=strtok(NULL, " ");//puxa a string do id
            int id=pegaint(frase);//transforma a string em int
            inserirIni(convertP(carro,id),v1);//realiza a inserção, apos buscar o veiculo pelo id

        }else if(frase[0]=='I' && frase[1]=='F'){//repete a II, mas para o fim
            frase=strtok(NULL, " ");
            int id=pegaint(frase);
            inserirFim(convertP(carro, id), v1);

        }else if(frase[0]=='I' && frase[1]=='*'){//caso seja I* entra nesse bloco
            frase=strtok(NULL, " ");//primeiro faz a separação da posição
            int pos=pegaint(frase);//pega a string e converte para int
            frase = strtok(NULL, " ");
            int id = pegaint(frase);//repete para o id
            inserir(pos, convertP(carro, id), v1);//chama a função de inserir na posição, após buscar o veiculo pelo id

        }else if(frase[0]=='R' && frase[1]=='I'){//caso seja RI, chama a função de remover no inicio
            tiraIni(v1);

        }else if(frase[0]=='R' && frase[1]=='F'){//caso seja RF, chama a função de remover no fim
            tiraFim(v1);

        }else if(frase[0]=='R' && frase[1]=='*'){//caso seja R*, chama a função de remover na posição
            frase = strtok(NULL, " ");//pega a string de posição
            int pos = pegaint(frase);//converte a string para int
            tira(pos, v1);//chama para remover nesta posição
        }
    }

    busca(v1);//mostra a lista final de veiculos apos todas as operações
}


int main(){
	Veiculo *carro=Lercsv("/tmp/veiculos.csv");//começa a leitura do arquivo
	int i=0, j=0, k=0;
	Lista *v1;
	char **frases=NULL,frase[3000];
	int *vetor=NULL;

	while(scanf("%d", &i)==1 && i!=-1){//le ate chegar o -1 ou a leitura parar de ser valida
		vetor=(int *)realloc(vetor, sizeof(int)*(j+1));//aumenta o vetor de maneira dinamica para caber todas as entradas
		vetor[j]=i;
		j++;//pega o numero de elementos
	}

	getchar();//buffer de entrada para o teclado

	v1=convert(carro,vetor,j);//converte os ids em veiculos e depois formata na lista

	int ops2=0;//define o numero de operações
	scanf("%d", &ops2);
	getchar();//buffer de entrada para o teclado
	
	frases=(char**)malloc(sizeof(char*)*ops2+1);//cria uma matriz dinamica para guardar as requisições
	for(int i=0;i<ops2;i++){
		frases[i]=(char *)malloc(sizeof(char)*100);
	}//substitutuo de vetor de strings

	int aux=0;
	
	while(aux<ops2){//le todas as requisições e as copia para cada linha da matriz
		fgets(frase,3000,stdin);
	
        strcpy(frases[aux], frase);
		aux++;
	}
	ops(frases,v1, ops2,carro);//começa a chamada para realizar as operações

	free(vetor);//libera o vetor de ids

    return 0;
}
