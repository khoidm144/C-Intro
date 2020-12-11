#include<stdio.h>
int main(){
  int n,i;
  int count=0,countLength=0;
  do{
    printf("Input the size of the array: ");
    scanf("%d",&n);
  }while(n<=0);
  int a[n];
  printf("Input the elements of the array: ");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(a[i]==0){
      count++;
    }
  }
  



}
