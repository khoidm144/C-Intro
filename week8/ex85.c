#include<stdio.h>
int main(){
  double n;
  double xk,xk1,dif;
  do{
    printf("Please input the positive number n: ");
    scanf("%lf",&n);
  }while(n<=0);
  xk=n;
  dif=xk;
  while(dif>0.0001){
    xk1=(xk+(double)n/xk)/2;
    if(xk1-xk>0){
      dif=xk1-xk;
    }
    else{
      dif=xk-xk1;
    }
    xk=xk1;
  }
  printf("Square root of %.0lf is %lf\n",n,xk1);



}
