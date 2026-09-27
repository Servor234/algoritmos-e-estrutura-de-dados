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

Veiculo* convert(Veiculo *a, int *id, int k){//realiza a conversão de todos os ids para veiculos
	Veiculo *v2=(Veiculo*)malloc(sizeof(Veiculo)*k);//cria um vetor do tamanho dos ids
	for(int j=0;j<k;j++){//le todos os ids e busca pelos veiculos correspondentes
	for(int i=0;i<500;i++){//busca pelo arquivo pelo id desejado
		if(a[i].id==id[j]){//caso ache, guarda no vetor desejado
			v2[j]=a[i];
			i=500;
		}
	}
	}
	return v2;//retorna o vetor convertido
}


Veiculo* ord(int *ids, int k, Veiculo *v1){//ordena por seleção o vetor desejado
	Veiculo *v2=convert(v1,ids,k);//converte os ids para os veiculos
	for(int i=0;i<k;i++){
	int maior=i;
	
	for(int j=i+1;j<k;j++){//busca pelo modelo com maior valor lexicografico
		if(strcmp(v2[maior].modelo,v2[j].modelo)>0){
			maior=j;
		}
	}

	Veiculo tmp=v2[maior];//faz o swap
	v2[maior]=v2[i];
	v2[i]=tmp;
	}
	return v2;//retorna o vetor ordenado de veiculos
}

void buscabi(char **frases, int k, Veiculo *v1, int j){//realiza a busca binaria pelo vetor ordenado 
	for(int i=0;i<k;i++){
		int esq=0, dir=j-1, cond=-1;//pega os limites e uma condição para evitar a volta da busca em um mesmo registro
		
		while(esq<=dir){
		int meio=(esq+dir)/2;

		if(strcmp(frases[i], v1[meio].modelo)==0){
			printf("SIM\n");//retorna sim caso encontre o modelo e muda a condição
			esq=dir+1;
			cond=0;
		}else if(strcmp(frases[i], v1[meio].modelo)>0){//compara os modelos dos carros
			esq=meio+1;//caso a frase seja maior que a do meio, ele faz a busca pela segunda metade
		}else{
			dir=meio-1;//caso contrario busca pela primeira
		}
		}
	
		if(cond==-1){//caso depois de buscar não ache, ira retornar não
		printf("NAO\n");
		}
	}
}

int main(){
	Veiculo *carro=Lercsv("/tmp/veiculos.csv");//começa a leitura do arquivo
	int i=0, j=0, k=0;
	Veiculo *v1;
	char **frases=NULL,frase[3000];
	int *vetor=NULL;
	
	while(scanf("%d", &i)==1 && i!=-1){//faz a leitura dos ids até -1 ou o scanf não ser valido	
		vetor=(int *)realloc(vetor, sizeof(int)*(j+1));//cria o vetor dinamico para guardar todos os digitos e crescer pelas chamadas
		vetor[j]=i;
		j++;
	}
	
	getchar();//buffer para as entradas do teclado

	v1=ord(vetor,j,carro);//ordena o vetor e guarda em um array de veiculos

	while(fgets(frase,3000,stdin)!=NULL){//le as requisições de modelos com fgets para pegar todos os espaços
	
		frase[strleng(frase)-1]='\0';//troca o \n por \0 para o strcmp garantir a igualdade em seus usos
		
		if(strcmp(frase,"FIM")==0){//caso chegue a entrada de fim, ele para de buscar entradas
			break;
		}
		frases = (char **)realloc(frases, sizeof(char*) * (k + 1));//guarda as requisições em uma matriz equivalente a um vetor de strings 
		frases[k] = (char *)malloc(sizeof(char) * (strlen(frase) + 1));

        	strcpy(frases[k], frase);//copia as frases para a matriz

        	k++;
	}

	buscabi(frases,k,v1,j);//realiza a busca binaria a partir dos registros

	free(vetor);

    return 0;
}
