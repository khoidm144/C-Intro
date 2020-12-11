#include<stdio.h>
int check(int arr1[],int n1,int arr2[],int n2){
  if(n1!=n2){
    return 0;
  }
  int i;
  for(i=0;i<n1;i++){
    if(arr1[i]!=arr2[i]){
      return 0;
    }
  }
  return 1;

}
int main(){
  int n1,n2;
  int i;
  do{
  printf("Input the size of 1st array: ");
  scanf("%d",&n1);
  }
  while(n1<=0);
  int arr1[n1];
  printf("Input the elements: \n");
  for(i=0;i<n1;i++){
    scanf("%d",&arr1[i]);
  }
  do{
  printf("Input the size of 2nd array: ");
  scanf("%d",&n2);
  }
  while(n2<=0);
  int arr2[n2];
  printf("Input the elements: \n");
  for(i=0;i<n2;i++){
    scanf("%d",&arr2[i]);
  }
  if(check(arr1,n1,arr2,n2)){
    printf("Equal\n");
  }
  else{
    printf("Not equal\n");
  }

  return 0;
}
