#include <stdio.h>
#include <string.h>

int main(){
    char a[50], t[50];
    int b;

    scanf("%s", a);
    b=strlen(a);

    for(int i=0;i<b;i++){
        t[i]=a[b-1-i];
    }

    if(strcmp(a,t)==0){
        printf("Palindrome\n");
    }else{
        printf("Not palindrome\n");
    }

    return 0;
}
