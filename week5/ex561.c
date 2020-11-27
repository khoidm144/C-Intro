#include<stdio.h>
int main()
{
  double num1,num2;
  printf("Enter two double ");
  scanf("%lf%lf",&num1,&num2);
  if(num1==num2)
    printf("%lf is equal to %lf\n",num1,num2);
  if(num1!=num2)
    printf("%lf is not equal to %lf\n",num1,num2);
  if(num1<=num2)
    printf("%lf is less than or equal to %lf\n",num1,num2);
  if(num1>=num2)
    printf("%lf is greater than or equal to %lf\n",num1,num2);
  if(num1<num2)
    printf("%lf is  less than %lf\n",num1,num2);
  if(num1>num2)
    printf("%lf is greater than %lf\n",num1,num2);
  return 0;
}
