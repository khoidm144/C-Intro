#include<stdio.h>
int main(){
  int n;
  printf("Nhap so tien: ");
  scanf("%d",&n);
  int a,b=500000;
  for(;;){
    a=n;
    if(a>=b){
  for(int i=b;i>=5000&&a>0;i=i/2){
    if(i==250000){
      i=200000;}
    else if(i==25000){
      i = 20000;}
    if(a>=i&&a/i!=0){
      printf(" %d  to  %d",a/i,i);
    }
    a=a-i*(a/i);    
  }printf("\n");
    }
  b=b/2;
   if(b==250000){
      b=200000;}
    else if(b==25000){
      b = 20000;}
   if(b==2500){
     break;
   }
}
  return 0;
}
