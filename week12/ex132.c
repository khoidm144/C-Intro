#include<stdio.h>
#include<string.h>
void replace(char s[],char a,char b){
  for(int i=0;i<strlen(s);i++){
    if(s[i]==a){
      s[i]=b;
    }
  }
 
}
int main(){
  char s[30];
  char a,b;
  printf("Input the string: ");
  scanf("%s%*c",s);
  printf("Input first character:");
  scanf("%c%*c",&a);
   printf("Input second character:");
  scanf("%c%*c",&b);
  replace(s,a,b);
  printf("The result string : %s\n",s);  



  return 0;
}
