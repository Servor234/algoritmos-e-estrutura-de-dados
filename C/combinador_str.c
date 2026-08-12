#include <stdio.h>

int main(){
	char a[200],b[200],c[400];
	int i1=0, i2=0;
	for(int i=0;i<3;i++){
		scanf("%s", a);

		scanf("%s", b);


		while(a[i1]!='\0' ||  b[i2]!='\0'){
			if(a[i1]!='\0'){
				printf("%c", a[i1]);
			}
			if(b[i2]!='\0'){
				printf("%c",b[i2]);
			}
			i1++;
			i2++;
		}
	}
}
