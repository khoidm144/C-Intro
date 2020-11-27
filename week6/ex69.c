#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
  double a,b,c;
  printf("Enter 3 edges of triangle\n");
  scanf("%lf",&a);
  scanf("%lf",&b);
  scanf("%lf",&c);
  if((a+b<c&&c>abs((int)(a-b)))||(a+c<b&&b>abs((int)(a-c)))||(b+c<a&&a>abs((int)(b-c)))||a<=0||b<=0||c<=0){
    printf("Invalid\n");
  }
  else{
    if(a==b||b==c||c==a){
      if(a==b&&b==c){
	printf("Equilateral\n");
      }
      else if(a*a==b*b+c*c||a*a+b*b==c*c||b*b==a*a+c*c){
        printf("Isosceles and Right\n");
      }
      else{
	printf("Isosceles");
      }
    }
    else if(a*a==b*b+c*c||a*a+b*b==c*c||b*b==a*a+c*c){
      printf("Right\n");  
    }
    else{
      printf("Normal\n");
    }
  }

  return 0;
}
