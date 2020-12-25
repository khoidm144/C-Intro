#include<stdio.h>
#include<string.h>
void stringcopy(char s2[],char s1[]){
 for(int i=0;i<strlen(s1);i++){
    s2[i]=s1[i];
  }

}
int main(){
  char s1[20];
  char s2[20];
  char s3[40];
  
  printf("Input the s1 string: ");
  scanf("%[^\n]%*c",s1);
  stringcopy(s2,s1);
  printf("The content of strcpy(s2,s1) : %s\n",s2);
 
}
