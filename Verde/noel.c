#include <stdio.h>
#include <stdlib.h>


int strleng(char a[]){
	int caracter=0;
	while(a[caracter]!='\0')
		caracter++;

	return caracter;
}

void buble(char **a, int casos){
	for(int i=0;i<casos;i++){
		if(a[i][2]>a[i+1][2]){
			char *p = a[i];
			a[i]=a[i+1];
			a[i+1]=p;
		}
	}
}

int main(){
	int casos, bom=0,ruim=0;

	scanf("%d", &casos);

	char **frase = (char **) malloc (sizeof(char *)*casos);

	printf("VV\n");

	for(int i=0;i<casos;i++){
		frase[i]= (char *) malloc (sizeof (char) *22); 
	}

	printf("VVV\n");

	int c=casos;
	while(casos!=-1){
		scanf("%s", frase[casos-1]);
		if(frase[casos-1][0]=='+'){
			bom++;
		}else if(frase[casos-1][0]=='-'){
			ruim++;
		}
	casos--;
	}

	printf("%d %d\n", bom, ruim);

	if(casos>1)
	buble(frase, c);

	for(int i=0;i<c;i++){
		printf("%s", frase[i]);
	}

	printf("Se comportaram:%d | Nao se comportaram: %d\n", bom,ruim);
}
