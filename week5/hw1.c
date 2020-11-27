#include<stdio.h>
int main(){
  int yourHeight,boyAHeight,boyBHeight;
  int boyAAge,boyBAge;
  printf("Login-enter your height(cm): ");
  scanf("%d",&yourHeight);
  printf("\nHi Minh:\n");
  printf("How old are you?");
  scanf("%d",&boyAAge);
  printf("What's your height?");
  scanf("%d",&boyAHeight);
  
  printf("\nHi Manh:\n");
  printf("How old are you?");
  scanf("%d",&boyBAge);
  printf("What's your height?");
  scanf("%d",&boyBHeight);
  
  int scoreBoyA= (boyAAge<=18?-2:((boyAAge<24&&boyAAge>18)?5:2))+(boyAHeight>=yourHeight?3:-2);
  int scoreBoyB= (boyBAge<=18?-2:((boyBAge<24&&boyBAge>18)?5:2))+(boyBHeight>=yourHeight?3:-2);
  scoreBoyA==scoreBoyB?(printf("Manh,are you free on Saturday?\nMinh,are you free on Sunday?")):(scoreBoyA>scoreBoyB?printf("Minh,are you free on Saturday?"):printf("Manh, are you free on Saturday?"));
			
  return 0 ;
}
