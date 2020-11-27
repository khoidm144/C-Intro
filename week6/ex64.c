#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int a;
  int b;
  srand(time(NULL));
  a=rand()%10;
  a=a+1;
  printf("%d",a);
  
  printf("Guess my number (between 1 and 10): ");
  scanf("%d",&b);
  if(a>b){
    printf("Your guess was too small\n");
  }
  else if(b>a){
    printf("Your guess was too high\n");
  }
  else{
    printf("Your guess is correct\n");
  }
  printf("The correct number was %d\n",a);
  
        return 0;
}
