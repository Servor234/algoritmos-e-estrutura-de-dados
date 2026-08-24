#include <stdio.h>

int main(){
	int a=4;
	for(int i=0;i<a;i++){
		for(int j=i;j<a;j++){
			printf("%d ", j);
		}
		printf("\n");
	}
}	
