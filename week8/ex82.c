#include<stdio.h>
int main(){
  int n;
  long ans=1;
  int i=1;
  char option;
  do {
    printf("Input your option: \n");
    printf("1. Calculating the factorial.\n");
    printf("2. Quit\n");
    scanf(" %c",&option);
    switch(option){
    case '1':{
      do{
  printf("Input the positive  number n: ");
  scanf("%d",&n);
      }while(n<0);
  ans=1;
  i=1;
  while(i<=n){
    ans=ans*i;
    i++;
  }
  printf("%d!=%ld\n",n,ans);
  break;
  }
    
    case '2': return 0;
  
    }
  }while(1);
  return 0;
}
