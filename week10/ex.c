#include<stdio.h>
#define MONTHS 12
int main(){
  int rainfall[MONTHS];
  int i;
  for ( i =0 ;i<MONTHS;i++){
    printf("Enter the rainfall(mm): ");
    scanf("%d",&rainfall[i]);
  }
  for(i=0;i<MONTHS;i++){
    printf("%5d",rainfall[i]);

  }

  return 0;





}
