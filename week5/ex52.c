#include<stdio.h>
int main(){
  int km;
  printf("Please insert the kilometers value\n");
  scanf("%d",&km);
  printf("The kilometers value in miles is %lf miles\n",(double)km/1.609344);
  return 0;

}
