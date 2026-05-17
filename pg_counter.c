#include <stdio.h>
#include <math.h>

int main(){
    int x,y,q,f,s,resp;

    printf("what is the growth?\n");
    scanf("%d", &x);
    
    q=x;
    
    printf("what is the number of the term wished?\n");
    scanf("%d", &y);
    
    f=y-1;
    
    printf("what is the first term of the progression?\n");
    scanf("%d", &s);

    resp= s*(pow(q,f));

    printf("the %d term is %d", y, resp);

}

