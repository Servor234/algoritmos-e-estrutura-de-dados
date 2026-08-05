#include <stdio.h>
#include <math.h>

typedef struct{
    int x;
    int y;
    int z;
}pontos2d;

int main(){
    pontos2d in, fi;
    int a,b;
    double c;

    scanf("%d %d %d", &in.x,&in.y,&in.z);
    scanf("%d %d %d", &fi.x,&fi.y,&fi.z);

    a=(in.x-fi.x)*(in.x-fi.x);
    b=(in.y-fi.y)*(in.y-fi.y);

    c=sqrt(a+b);

    printf("%lf\n",c);

}
