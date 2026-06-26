#include <stdio.h>
#include <string.h>

int per(char (*p)[10], int *r){
    int co=0, maior=0, fd=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<10;j++){
            if(*(*(p+i)+j)=='X'){
            *(r+co)+=10;
            }
        }
        if(*(r+co)>maior){
            maior=*(r+co);
            fd=co;
        }
        co++;
        }
    return fd;
}

int main(){
    char grade[5][10];
    int perigo[5]={0},risco,tam[5];

    for(int i=0;i<5;i++){
        scanf("%s", grade[i]);
        tam[i]=strlen(grade[i]);
    }

    risco=per(grade,perigo);

    for(int i=0;i<5;i++){
            printf("codigo ");
            for(int j=0;j<tam[i];j++){
                printf("%c", grade[i][j]);
            }
        printf(" || perigo: %d\n", perigo[i]);
    }

    printf("mais perigoso: ");
    for(int i=0;i<tam[risco];i++){
        printf("%c", grade[risco][i]);
    }

    return 0;
}
