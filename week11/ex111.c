#include<stdio.h>
int main(){
  int a;
  int b;
  int c;
  int *pta=&a;
   int *ptb=&b;
    int *ptc=&c;
    
  printf("Input the value of 3 Integers: \n");
  scanf("%d %d %d",&a,&b,&c);
  printf("The value through 3 pointers: %d %d %d \n",*pta,*ptb,*ptc);
  printf("The value of 3 pointers itself: %p %p %p\n",pta,ptb,ptc);
  



  return 0;
}
