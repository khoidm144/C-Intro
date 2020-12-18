#include<stdio.h>
int main(){
  float a,b,c;
  float *pta=&a;
  float *ptb=&b;
  float *ptc=&c;
    printf("Input the 3 values of floats: \n");
    scanf("%f %f %f",&a,&b,&c);
    *pta+=100.0;
    *ptb+=100.0;
    *ptc+=100.0;
    printf("The value after increment: %f %f %f\n",a,b,c);
    

  return 0;
}
