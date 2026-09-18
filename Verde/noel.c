#include <stdio.h>
#include <stdlib.h>


int strleng(char a[]){
	int caracter=0;
	while(a[caracter]!='\0')
		caracter++;

	return caracter;
}

int strcomp(char *p, char *c){
	int i=0;
	while(p[i]!='\0' && c[i]!='\0'){
		if(p[i]>c[i]){
		return 1;
		}else if(p[i]<c[i]){
			return 0;
		}
		i++;
	}

	if(p[i]!='\0')
	return 1;

	return 0;
}

void buble(char **a, int casos){
	for(int i=0;i+1<casos;i++){
		for(int j=0;j+1<casos-i;j++){
            
			if(strcomp(a[j],a[j+1])==1){
                char *p = a[j];
				a[j]=a[j+1];
				a[j+1]=p;
            }
		}
	}
}

int main(){
	int casos, bom=0,ruim=0;
	scanf("%d", &casos);

	char **frase = (char **) malloc (sizeof(char *)*casos);

	for(int i=0;i<casos;i++){
		frase[i]= (char *) malloc (sizeof (char) *22); 
	}

	int c=casos;
	while(casos!=0){
		char sinal;
		scanf(" %c", &sinal);
		if(sinal=='+'){
			bom++;
		}else if(sinal=='-'){
			ruim++;
		}
		scanf("%s", frase[casos-1]);
	casos--;
	}

	if(c>1) buble(frase, c);

	for(int i=0;i<c;i++){
		printf("%s\n", frase[i]);
	}

	printf("Se comportaram: %d | Nao se comportaram: %d\n", bom,ruim);

	return 0;
}
