#include<stdio.h>
int is_prime(int n);
int main(){
  int n;
  int i;
  printf("Input the number n: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    if(is_prime(i)==1){
      printf("%d\n",i);
    }
  }
  return 0;
}
int is_prime(int n){
  int i=1;
  if(n<2){
    return 0;}
  for(i=2;i<n;i++){
    if(n%i==0){
      return 0;}
  }
  return 1;

}
