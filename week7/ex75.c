#include<stdio.h>
int main(){
  int n,fac=1;
  printf("Enter a number (n): ");
  scanf("%d",&n);
  for(int i=n;i>=1;i--){
    fac=fac*i;
  }
  printf("%d!= %d\n",n,fac);
  return 0;
}
