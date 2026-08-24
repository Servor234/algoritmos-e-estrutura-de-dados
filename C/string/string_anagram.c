#include <stdio.h>

int strleng(char a[]){
    int cont=0;
    
    while(a[cont]!='\0')
        cont++;
        
    return cont;
}

void seque(char a[], int n){
    for(int i=0;i<n;i++){
        int menor=i;
        for(int j=i+1;j<n;j++){
            if(a[menor]>a[j]){
                menor=j;
            }
        }
        
        char aux=a[menor];
        a[menor]=a[i];
        a[i]=aux;
        
    }
}

int main(){
    char f1[100], f2[100];
    int n1=0,n2=0;
    int cond=0;
    
    scanf("%s", f1);
    n1=strleng(f1);
    scanf("%s", f2);
    n2=strleng(f2);

    if(n1!=n2){
        printf("NAO\n");
    }else{
    seque(f1,n1);
    seque(f2,n2);

        for(int i=0;i<n1;i++){
            if(f1[i]!=f2[i]){
                printf("NAO\n");
                cond=1;
                break;
            }
        }

        if(cond==0){
            printf("SIM\n");
        }else{
            cond=0;
        }
        
    }
    
}