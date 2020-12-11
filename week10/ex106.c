#include<stdio.h>
int main(){
  int n;
  do{
    printf("Input the number of elements: ");
    scanf("%d",&n);
  }while(n<=0);
  int a[n];
  int check=1;
  int i=0;
  printf("Input the elements: \n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
    if(a[i]!=a[n-1-i]){
      check = 0;
      break;
    }
  }
  if(check){
    printf("Symmetric");
  }
  else{
    printf("Not Symmetric");
  }

 
  return 0;
}
