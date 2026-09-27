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

Veiculo* convert(Veiculo *a, int *id, int k){//faz a converção dos ids para um vetor de veiculos
	Veiculo *v2=(Veiculo*)malloc(sizeof(Veiculo)*k);//aloca um vetor do tamanho do de ids
	for(int j=0;j<k;j++){//faz a leitura por todos os ids
	for(int i=0;i<500;i++){//busca pelo arquivo original pelos ids
		if(a[i].id==id[j]){
			v2[j]=a[i];//caso ache o id, guarda o veiculo
			i=500;
		}
	}
	}
	return v2;//retorna o vetor encontrado
}

void busca(Veiculo *v1,int k){//mostra todos os veiculos do array entregue
	for(int i=0;i<k;i++){
		formatVeiculo(v1[i]);
	}
}


Veiculo* ord(Veiculo *v2, int k, int *restos){//começa o counting sort no vetor
	Veiculo *saida;
        int *nums;	
	int maior=0;
	for(int i=0;i<k;i++){//acha o maior dos digitos entregues de anos
		if(restos[i]>maior){
			maior=restos[i];
		}
	}

	nums=(int*)calloc(maior+1,sizeof(int));//cria um vetor zerado com tamanho maior +1 para acessar a posição maior

	for(int i=0;i<k;i++){//soma os indices dos restos dos anos
	nums[restos[i]]++;
	}

	for(int i=1;i<=maior;i++){//junta todos os indices
	nums[i]+=nums[i-1];
	}

	saida=(Veiculo*)malloc(sizeof(Veiculo)*k);//aloca o vetor de saida

	for(int i=k-1;i>=0;i--){//ordena o vetor de saida baseado em restos e na quantidade de digitos disponiveis
	saida[nums[restos[i]]-1]=v2[i];
	nums[restos[i]]--;	
	}

	return saida;//retorna a ordenação parcial
}

void radix(int *id, int k, Veiculo *v1){//começa a ordenação por digitos
	Veiculo *v2=convert(v1,id,k);//converte os ids em anos
	int *restos = (int *)malloc(sizeof(int)*k);//cria um vetor dinamico para os digitos dos anos
	int j=0;//cria uma condição para a ordenação
	int div=1;//deixa um "marcador" para os digitos que serão a chave do counting sort

	while(j==0){//repete ate não se ter mais digitos no ano
	j=1;//deixa a condição falsa para cada loop

	for(int i=0;i<k;i++){
		restos[i]=(v2[i].ano/div)%10;//divide os anos para pegar seus digitos
		if(v2[i].ano/div!=0){//caso o resto da divisão seja 0, ira manter a falso e parar o loop
			j=0;
		}
	}

	v2=ord(v2,k,restos);//chama a ordenação e aumenta o marcador do indice do digito a ser ordenado
	div*=10;
	}

	busca(v2,k);//chama para mostrar todos elementos do array ordenado

}

int main(){
	Veiculo *carro=Lercsv("/tmp/veiculos.csv");//começa a leitura do arquivo
	int i=0, j=0;
	int *vetor=NULL;
	
	while(scanf("%d", &i)==1 && i!=-1){//realiza a leitura até -1 ou o scanf parar de ser valido
		vetor=(int *)realloc(vetor, sizeof(int)*(j+1));//cria um vetor que cresce dinamicamente com o tamanho da entrada
		vetor[j]=i;
		j++;
	}

	radix(vetor,j,carro);//chama a ordenação por digitos

	free(vetor);

    return 0;
}
