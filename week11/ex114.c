#include<stdio.h>
void rotation(int *a,int *b,int *c){
  int temp;
  temp =*a;
  *a=*b;
  *b=*c;
  *c=temp;
}
int main(){
  int a,b,c;
  printf("Input the values: \n");
  scanf("%d %d %d",&a,&b,&c);
  rotation(&a,&b,&c);
  printf("Values after rotation: %d %d %d\n",a,b,c);
  




  
  return 0;
}
