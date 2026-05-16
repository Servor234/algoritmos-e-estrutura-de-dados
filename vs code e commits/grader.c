#include <stdio.h>
#include <limits.h>

int main(){
float x,y,z,t=1,c,f,g;

printf("how many students?\n");
scanf("%f", &x);

for(int i=0; i<x; i++){
printf("Type the grade for the student %d: \n", i+1);

        for(int j=3; j!=1;){
        printf("Type the grade of the test %.0f:\n", t);
        scanf("%f", &z);

        y=y+z;

        do{
        printf("Want to continue?\n\tType 1 for no\n\tType 2 for yes\n");
        scanf("%d", &j);
        }while(j>2 || j<1);

        if(y/t>80 && j==1){
            c++;
        }

        if(j==1){
            y=y/t;
            f=y+f;
            printf("the student %d average grade is %.2f\n\n", i+1, y);
            y=0;
            t=1;
        }else{
            t++;
        }
        }
}
    g=f/x;
    c=(c/x)*100;
    printf("%.0f percent of students are above 80%\nThe average grade of the students is %.0f", c, g);
}
