#include<stdio.h>
int main(){
  char c,lastc='-';
  while((c=getchar())!='\t'){
    if(c==' '){
      if(lastc!=' '){
	putchar(c);
      }
    }
    else{
      putchar(c);
    }
    lastc=c;
  }



  return 0;
}
