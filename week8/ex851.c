#include<stdio.h>
#include<math.h>
int main()
{
  double a,xn,ketqua;
  scanf("%lf",&a);
  xn=(a+1)/2;
  do{
    ketqua=xn;
    xn=0.5*(xn+a/xn);
  }while(fabs(xn-ketqua)>0.0001);
  printf("%lf",xn);
}
