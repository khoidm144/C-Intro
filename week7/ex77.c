#include<stdio.h>
int main(){
  int n;
  printf("Input a number: ");
  scanf("%d",&n);
  for(int i=10;n!=0;i=i*10){
    printf("%d",n%10);
    n=n/10;
  }

  return 0;
}
