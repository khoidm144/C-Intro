#include<stdio.h>
#include<string.h>
int main(){
  char s[40];
  printf("Enter the string: ");
  scanf("%[^\n]%*c",s);
  for(int i=0;i<strlen(s);i++){
    if(s[i]==','||s[i]=='.'||s[i]==';'||s[i]==':'||s[i]=='!'||s[i]=='?'){
      s[i]=' ';
    }
  }
  puts(s);

  return 0;
}
