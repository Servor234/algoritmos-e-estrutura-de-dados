#include <stdio.h>

int main(){
    int x=0, i[x], y, z[x-1];

    printf("how many number are you going to use?\n");
    scanf("%d", &x);

    for (y=0; y<=x; y++){
        printf("type %d number:\n", y+1);
        scanf("%d", &i[y]);
        z[x-1]=i[y]+i[y-1];
    }

    printf("%d", z[x-1]);

}
