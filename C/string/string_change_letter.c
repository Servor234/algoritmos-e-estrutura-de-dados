#include <stdio.h>

int main(){
    char a[100], d;
    int g=0;

    scanf("%s", a);
    scanf(" %c", &d);

    while(a[g]!='\0'){
        g++;
    }

    for(int i=0;i<g+1;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='o'||a[i]=='u'||a[i]=='i'){
            a[i]=d;
        }else if(a[i]=='A'||a[i]=='E'||a[i]=='O'||a[i]=='U'||a[i]=='I'){
            a[i]=d;
        }
    }

    printf("%s", a);

}
