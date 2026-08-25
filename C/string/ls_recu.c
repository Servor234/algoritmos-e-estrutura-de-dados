#include <stdio.h>

void recu (char frase[], int n, int cond1, int cond2, int cond3, int cond4){
        if(n==-1){
            if(cond1==0){
            printf("SIM ");
            }else{
                printf("NAO ");
            }   
            
            if(cond2==0){
            printf("SIM ");
            }else{
                printf("NAO ");
            }   
            
            if(cond3==0){
            printf("SIM ");
            }else{
                printf("NAO ");
            }   
            
            if(cond4==1 || cond4==0){
            printf("SIM ");
            }else{
                printf("NAO ");
            }   
            
        }else if(n!=-1 && frase[n]>=48 && frase[n]<=57 ||(frase[n]== 46 || frase[n]==44) ){
            if(frase[n]== 46 || frase[n]==44){
                return recu(frase, n-1,1,1,cond3+1,cond4+1);
            }

            return recu(frase, n-1,1,1,cond3,cond4);
        }else if(n!=-1 && frase[n]>=97 && frase[n]<=122 && (frase[n]!='a' && frase[n]!='e' && frase[n]!='i' && frase[n]!='o' && frase[n]!='u')){
            return recu(frase, n-1, 1, cond2, cond3+1,2);
        }else if(n!=-1 && frase[n]>=97 && frase[n]<=122 && (frase[n]=='a' || frase[n]=='e' || frase[n]=='i' || frase[n]=='o' || frase[n]=='u')){
            return recu(frase,n-1,cond1,1,cond3+1,2);
        }else if(frase[n]<97 && frase[n]>122){
            return recu(frase,n-1,0,0,cond3,cond4);
        }else{
            return recu(frase,n-1,cond1,cond2,cond3,cond4);
        }
}

int strleng(char a[]){
    int n=0;
    while(a[n]!='\0')
    n++;

    return n;
}

int main(){
    char frase[200];
    int n1=0;

    scanf("%s", frase);
    n1=strleng(frase);

    recu(frase,n1-1,0,0,0,0);

}