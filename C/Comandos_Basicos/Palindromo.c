#include <stdio.h>

int strleng(char a[]){
	int j=0;
	
	while(a[j]!='\0'){
		j++;
	}
	return j;
}

int main(){
	char palavra[200];
	int cont=0, n=0;
	
	while(scanf(" %s", palavra)!=EOF){
		n=strleng(palavra);
	
			for(int i=0;i<n/2;i++){
				if(palavra[i]==palavra[n-i-1]){
					cont++;
				}else{
					printf("NAO\n");
					cont=0;
					break;
				}
			}
	
			if(cont==n/2){
				printf("SIM\n");
				cont=0;
			}	

		}	
	}



