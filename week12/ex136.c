#include<stdio.h>
#include<string.h>
int strend(char s1[],char s2[]){
  for(int i=strlen(s2)-1,j=strlen(s1)-1;i>=0;i--,j--){
    if(s1[j]!=s2[i]){
     
      return 0;
    }
  }

  return 1;
}
int main(){
  char s1[30];
  char s2[30];
  printf("Input the first string ");
  scanf("%[^\n]%*c",s1);
   printf("Input the second string ");
  scanf("%[^\n]%*c",s2);
  printf("%d\n",strend(s1,s2));
  
}
