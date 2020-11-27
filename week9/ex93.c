#include<stdio.h>
double salary(int n);
int main(){
  int n;
  do{
    printf("Input the working hours (10<=n<=65): ");
    scanf("%d",&n);
  }while(n<10||n>65);
  printf("The salary is %.0lfVND\n",salary(n));

  return 0;
}
double salary(int n){
  if(n>40){
    return 40.0*50000.0+(n-40)*50000.0*1.5;
  }
  else return n*50000.0;

}
