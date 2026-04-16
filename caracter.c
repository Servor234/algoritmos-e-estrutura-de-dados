#include <stdio.h>
#include <math.h>

double exp(double a){
    int i,c;
    if(a<10){
        return 1;
    }else if(a!=0){
        return 1+exp(a/10);
    }
}

int main(){
    double a;

    scanf("%lf", &a);

    printf("%lf\n", exp(a));
}
