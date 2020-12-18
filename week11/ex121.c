#include<stdio.h>
int countEven(int* a,int n){
  int ans=0;
  for(int i=0;i<n;i++){
    if((*(a+i))%2==0){
      ans++;
    }
  }
  return ans ;
}
int main(){
  int n;
  do{
  printf("Input the size of array: ");
  scanf("%d",&n);
   }while(n<=0);
  int a[n];
  printf("Input the elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  int *p=a;
  int count = countEven(p,n);
  printf("The number of even number is : %d\n",count);
	


  return 0;
}
