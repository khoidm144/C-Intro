#include<stdio.h>
long sum(int n);
void list(int n);
void sqr(int n);
int main(){
  int n;
  printf("Input the number n: ");
  scanf("%d",&n);
  printf("Sum: \n");
  printf("%ld\n",sum(n));
  printf("Submultiples: \n");
  list(n);
  printf("First %d square numbers: \n",n);
  sqr(n);
  return 0;
}
long sum(int n){
  long sum=0;
  for(int i=1;i<=n;i++){
    sum+=i*i*i;
   }
  return sum;
}
void list(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0){
      printf("%d\n",i);
    }
  }
}
void sqr(int n){
for(int i=1;i<=n;i++){ 
      printf("%d\n",i*i);
  }

}
