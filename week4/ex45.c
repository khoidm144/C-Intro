#include<stdio.h>
int main(){
  int a;
  printf("Input the working hours: \n");
  
  scanf("%d",&a);
  printf("The wages are: \n");
  if(a>40){
    printf("%dVND\n",(a-40)*40000+40*25000);
  }
  else {
    printf("%dVND\n",a*25000);
  }
return 0;
}
