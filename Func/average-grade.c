#include <stdio.h>

float gra(float x, float y, float z, char a){
    float c;
    if(a=='A'){
        c=(x+y+z)/3;
        return c;
    }else if(a=='P'){
        c=((5*x)+(3*y)+(2*z))/3;
        return c;
    }
}

int main(){
    float x,y,z,c;
    int d;
    char a;

    printf("How many students?\n");
    scanf("%d", &d);

    do{
        printf("Type A for an arithmetic mean\nType P for a pondered mean\n");
        scanf("%s", &a);

        printf("\nType the three grades.\nIf using a pondered mean, type in the format of 5,3,2\n");
        scanf("%f %f %f", &x, &y, &z);

        c=gra(x,y,z,a);

        printf("%f\n", c);
        d--;
    }while(d>0);
}
