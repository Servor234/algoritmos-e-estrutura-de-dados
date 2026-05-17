#include <stdio.h>

void con(float a){
    if(a<=100 && a>=90){
        printf("Concept A");
    } else if(a>=80 && a<=89){
        printf("Concept B");
    } else if(a>=70 && a<=79){
        printf("Concept C");
    } else if(a>=60 && a<=69){
        printf("Concept D");
    } else if(a>=40 && a<=59){
        printf("Concept E");
    } else if(a<=39 && a>=0){
        printf("Concept F");
    }else{
        printf("Invalid grade");
    }
}

int main(){
    int n;
    float a;

    printf("How many students?\n");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        printf("Type your average grade\n");
        scanf("%f", &a);

        con(a);
    }
}
