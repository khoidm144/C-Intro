#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
  int arr[100];
  int min=100;
  int i;
  int sum;
  srand(time(NULL));
  for(i=0;i<100;i++){
  arr[i]=rand()%101;
  if(arr[i]%2==1){
    sum+=arr[i];
  }
  if(arr[i]<=min){
    min=arr[i];
  }
  if(i!=0&&i%10==0){
    printf("\n");
  }
  printf("%d\t",arr[i]);
  }
  printf("\n");
  printf("Sum of odd number : %d\n",sum);
  printf("Minimum value : %d \n",min);
  
  
  

  return 0;
}
