#include <stdio.h>
#include <math.h>

int par(int a){
    int c=0,b=a;
    while(b>0){
        c+=2;
        b--;
    }
    return c;
}

int potpar(int a, int b){
    int c=0;
    c=par(a)*pow(b,a);
    return c;
}

void red(int a){
    int b=a-1;
    while(b>0){
        printf("%d\n", par(b));
        b--;
    }
}

double umsob(int a){
    int c=1,b=a;
    while(b>0){
        c+=2;
        b--;
    }
    return c;
}

double somasob(int a){
    double c=1,b=a,d=0;
    while(b>0){
        c+=2;
        b--;
        d=d+(1/c);
    }
    return d;
}

double parsob(int a){
    double b=a, c;
        c=par(b)/umsob(b);
    return c;
}

double sumparsob(int a){
    double b=a,c=0;
    while(b>0){
        c=c+parsob(b);
        b--;
    }
    return c;
}

double potsob(int a, int b){
    double c;
    c=parsob(a)*pow(b,a);
    return c;
}

double sumpotsob(int a, int b){
    double f=a,c;
    while(f>0){
        c=c+potsob(f, b);
        f--;
    }
    return c;
}

int fat(int a){
    int c=1;
    for(int i=1;i<=a;i++){
        c*=i;
    }
    return c;
}

double seq(int a, int b){
    double c=0,d=0,m=0;
    c=potpar(a,b);
    d=fat(umsob(a));
    m=c/d;
    return m;
}

double sumseq(int a, int b){
    double g=a, c=0;
    while(g>0){
        c=c+seq(g,b);
        g--;
    }
    return c;
}


double m2sumseq(int a, int b){
    double g=a, c=0;
    while(g>0){
        if(g<=2){
            c=c+seq(g,b);
            g--;
        }else{
            g--;
        }
    }
    return c;
}

void mult5(int a){
    for(int i=1; i<=a; i++){
        printf("%d * 5 = %d\n", i, i*5);
    }
}

void exerc1(int a){
    printf("%d\n", par(a));
}

void exerc2(int a){
    red(a);
}

void exerc3(int a){
    printf("%lf\n", 1/umsob(a));
}

void exerc4(int a){
    printf("%lf\n", somasob(a));
}

void exerc5(int a){
    printf("%lf\n", parsob(a));
    printf("%lf\n", sumparsob(a));
}

void exerc6(int a, int b){
    printf("%lf\n", potsob(a,b));
}

void exerc7(int a, int b){
    printf("%lf\n", sumpotsob(a,b));
}

void exerc8(int c){
    printf("%d\n", fat(c));
}

void exerc9(int a, int b){
    printf("%lf\n", seq(a,b));
}

void exerc10(int a, int b){
    printf("%lf\n", sumseq(a,b));
}

void exerc11(int a, int b){
    printf("%lf\n", m2sumseq(a,b));
}

void exerc12(int a){
    mult5(a);
}

int main(){
    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    exerc1(a);

    exerc2(a);

    exerc3(a);

    exerc4(a);

    exerc5(a);

    exerc6(a,b);

    exerc7(a,b);

    exerc8(c);

    exerc9(a,b);

    exerc10(a,b);

    exerc11(a,b);

    exerc12(a);

    return 0;
}
