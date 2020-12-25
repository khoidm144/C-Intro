#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
  char s[40];
  printf("Input the string: ");
  scanf("%s",s);
  if(strlen(s)!=7||!isdigit(s[3])||!isdigit(s[4])||!isdigit(s[5])||!isdigit(s[6])||!isalpha(s[0])||!isalpha(s[1])||!isalpha(s[2])){
    printf("Is not in valid format\n");
    return 0 ;
  }
printf("In the valid format\n");

  




  return 0;
}
