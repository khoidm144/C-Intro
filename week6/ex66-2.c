#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
  int a;
  int b;
  srand(time(NULL));
  a=rand()%10;
  a=a+1; 
  printf("Guess my number (between 1 and 10): ");
  scanf("%d",&b);
  switch((a-b==0)?0:(a-b>0?1:-1)){
  case 1:
    printf("Your guess was too small\n");
  break;
  case -1:
    printf("Your guess was too high\n");
    break;
    default:
    printf("Your guess is correct\n");
    break;
  }
  printf("The correct number was %d\n",a);
  
        return 0;
}
