#include <stdio.h>

int main() {
  int x;
  float y, z;

  do{
    printf("choose your conversion:\n\t1 - meter to centimeter\n\t2 - kilogram to gram\n\t3 - hour to minute\n");
    scanf("%d", &x);
  }while(x<=0 || x>=4);

  printf("choose a number:\n");
  scanf("%f", &y);

  switch(x){
case 1:
    z=y;
    y=y*100;

    printf("with %.2f meters you have %.2f centimeters\n", z, y);
    break;

case 2:
    z=y;
    y=y/100;

    printf("with %.2f kilograms you have %.2f grams\n", z, y);
    break;

case 3:
    z=y;
    y=y*60;

    printf("With %.2f hours you have %.2f minutes\n", z,y);
    break;
  }
  return 0;

}
