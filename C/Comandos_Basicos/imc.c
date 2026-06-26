#include <stdio.h>

void imc(int *ap, int *pn,int *sp,int *o){
    float t, b, a;

    printf("Digite seu peso e sua altura\n");
    scanf("%f %f", &b, &a);

    t=b/(a*a);
    if(t<18.5){
        *ap=*ap+1;
    } else if(t>=18.5 && t<24.9){
        *pn=*pn+1;
    } else if(t>=24.9 && t<29.9){
        *sp=*sp+1;
    } else{
        *o=*o+1;
    }
}

int main(){
    int n, ap=0, pn=0, sp=0, o=0;
    float p,a;

    printf("Digite quantas pessoas\n");
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        imc(&ap,&pn,&sp,&o);

    }
    printf("\nAbaixo do peso: %d\nPeso normal: %d\nAcima do peso: %d\nObesidade: %d\n", ap,pn,sp,o);
}
