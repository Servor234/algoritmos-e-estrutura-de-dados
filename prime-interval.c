#include <stdio.h>

int prim(int a){
    if (a==1){
        return 0;
    } else if(a==2){
        return 1;
    } else if(a%2==0){
        return 0;
    }

    for(int i=3; i*i<=a; i+=2){
        if(a%i==0)
            return 0;
    }
    return 1;
}

int main(){
    int a,b,c;

    printf("Type 2 number to see how many prime numbers are in the interval\n\tFirst type the smallest value, then type the greatest value\n");
    scanf("%d %d", &a, &c);

    for(int i=a+1; i<c;i++){
        b+=prim(i);
    }
    printf("%d\n", b);
    
    return 0;
}
