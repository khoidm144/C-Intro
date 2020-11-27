#include<stdio.h>
int main(){
  int a;
  printf("Enter a number: ");
  scanf("%d",&a);
  for(int i=1;i<a+1;i++){
    for(int j=1;j<=i;j++){
      printf("*");
    }
    printf("\n");
  }
 
  return 0;
}
