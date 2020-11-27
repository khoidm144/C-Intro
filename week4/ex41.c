#include<stdio.h>
int main(){
  double a;
  int b;
  printf("Input a float: \n");
  scanf("%lf",&a);
  printf("Input an Integer \n");
  scanf("%d",&b);
  printf("%f and %d\n",a,b);
  printf("%e and %d\n",a,b);
  return 0;
}
