#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){
  int count=0;
  char s[40];
  printf("Input the string: ");
  scanf("%[^\n]%*c",s);
  for(int i=0;i<strlen(s);i++){
    if(isspace(s[i])){
      count++;
    }
  }
  printf("The number of spacebar is %d \n",count);


  
    return 0;
}
