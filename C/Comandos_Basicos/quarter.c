#include <stdio.h>
#include <stdlib.h>

int main(){
    int x;

    printf("which month are you on?\n");
    scanf("%d", &x);

    switch(x){
    case 1:
        printf("first quarter");
        break;

    case 2:
        printf("first quarter");
        break;

    case 3:
        printf("first quarter");
        break;

    case 4:
        printf("second quarter");
        break;

    case 5:
        printf("second quarter");
        break;

    case 6:
        printf("second quarter");
        break;

    case 7:
        printf("third quarter");
        break;

    case 8:
        printf("third quarter");
        break;

    case 9:
        printf("third quarter");
        break;

    case 10:
        printf("fourth quarter");
        break;

    case 11:
        printf("fourth quarter");
        break;

    case 12:
        printf("fourth quarter");
        break;

    default:
        printf("type a valid number");
    }
    return 0;
  }
