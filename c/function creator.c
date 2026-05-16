#include <stdio.h>
#include <stdlib.h>

int multi(int x, int y, int t){
for(int i=1; i<t; i++){
        x=x+y;
}
    return x;
}


int main(){
    int x,y,z, resp=0, t;

    scanf("%d", &x);
    scanf("%d", &z);
    y=x;
    t=x;

    resp=multi(x,y,t);

    printf("%d\n", resp);


}
