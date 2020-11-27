#include<stdio.h>
int main(){
  char character='K';
  char string[]="Hello, my name is Khoi";
  char *stringPtr="Now I'm studying at B1-303";

  printf("%c\n",character);
  printf("%s\n", "This is a string");
  printf("%s\n",string);
  int a;
  printf("%s\n%n",stringPtr,&a);
  printf("%d\n",a);
  return 0;


}
