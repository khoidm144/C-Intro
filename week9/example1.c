#include<stdio.h>
double square (double a);
int main(){
  double num=0.0,sqr =0.0;
  printf("Enter a number\n");
  scanf("%lf",&num);
  sqr=square(num);
  printf("square of %g is %g\n",num,sqr);
  


  return 0;

}
double square (double a){

  return a*a;
}
