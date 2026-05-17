#include <stdio.h>

int max2(int a, int b){
    if(a>b){
        return a;
    } else {
        return b;
    }
}

int max3(int a, int b, int c){
    if(max2(a,b)>max2(a,c)){
        if(max2(a,b)>max2(b,c)){
            return max2(a,b);
        } else{
            return max2(b,c);
        }
    } else{
        if (max2(a,c)>max2(b,c)){
            return max2(a,c);
        } else{
            return max2(b,c);
        }
    }
}

int main(){
    int a,b,c;

    printf("Type the three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d", max3(a,b,c));
}
