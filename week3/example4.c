#include<stdio.h>
int main(){
  int *ptr;
  int x=1234, y;
  ptr=&x;
  printf("The value of ptr is %p\n",ptr);
  printf("The address of x is %p\n\n",&x);

  printf("Guess what ? The number of characters of this line is: %n", &y);
  printf("%d\n\n",y);

  y=printf("This line has 30   characters\n");
  printf("%d characters were printed\n\n",y);
  printf("Printing a %% in a format control string\n");
  y=printf("%d\n",46);
  printf("%d\n",y);
  return 0;


}
  
