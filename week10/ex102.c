#include<stdio.h>
int main(){
  int n;
  do{
    printf("Input the number of elements: ");
    scanf("%d",&n);
  }while(n<5||n>100);
  int arr[n];
  int sum=0;
  int i;
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);   
  }
  printf("Local maximums: \n");
  for(i=0;i<n;i++){
    if((i>=1&&i<=n-2)&&arr[i-1]<arr[i]&&arr[i]>arr[i+1]){
      printf("%d\t",arr[i]);
      sum+=arr[i];
    }
  }
  printf("\nSum: %d\n",sum);
  


  return 0;
}
