#include <stdio.h>
#include <string.h>

int main(){
    int b,c=0;
    char a[50];

    scanf("%[^\n]", a);

    b=strlen(a);

    for(int i=0;i<b;i++){
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
            c++;
        }else if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            c++;
        }
    }

    printf("%d vowels\n", c);

}
