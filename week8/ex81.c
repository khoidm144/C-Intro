#include<stdio.h>
int main(){
  int n;
  long ans=1;
  int i=1;
  printf("Input the number n: ");
  scanf("%d",&n);
  while(i<=n){
    ans=ans*i;
    i++;
  }
  printf("%d!=%ld\n",n,ans);


  return 0;
}
