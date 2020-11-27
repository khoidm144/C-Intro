#include<stdio.h>
int main(){
  int a,b,c;
  int min;
  printf("Enter 3 numbers: \n");
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  min =a;
  if(a==b||b==c||a==c){
    printf("There is no the smallest\n");
  }
  else {
    if(b<min){
      min=b;
    }
    if(c<min){
      min=c;
    }
    printf("%d is the smallest number\n",min);
  }
  return 0;
}
