#include <stdio.h>
#include <string.h>

int main(){
    char a[200];
    int ma=0;

    while(fgets(a,sizeof(a),stdin)!=NULL && a[0]!='F' && a[1]!='I'){
        for(int i=0;i<strlen(a);i++){
            if(a[i]>='A' && a[i]<='Z'){
                ma++;
            }
        }
            printf("%d\n", ma);
            ma=0;
    }
    return 0;
}
