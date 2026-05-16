#include <stdio.h>

int main() {
    int temp;

    printf("What is the temperature?\n");
    scanf("%d", &temp);

    if(temp<18){
        printf("Temperature low");
    } else if(temp>=18 && temp<=25){
        printf("ideal temperature");
    } else if(temp>25){
        printf("high temperature");
    }

    return 0;
}
