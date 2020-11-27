#include<stdio.h>
int main(){
  char a;
  char b;
  char c;
  scanf("%c%c%c",&a,&b,&c);
  char min=a;
  if(b<min){
    min=b;
  }
  if(c<min){
    min=c;
  }
  printf("%c\n",min);

  return 0;
}
