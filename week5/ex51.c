#include<stdio.h>
int main(){
  int a,b,c;
  printf("Insert 3 integers: \n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  int  max= a>b?a:b;
  max= max>c?max:c;
  printf("Max is %d\n",max);
  double avg =(double) (a+b+c)/3;
  int sum = avg>10.0?(a+b):(b>c?b-c:c-b);
  printf("Ans is %d",sum);
    
  return 0;
}
