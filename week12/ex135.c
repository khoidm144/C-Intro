#include<stdio.h>
#include<string.h>
void cutLastName(char s[]){
  for(int i=strlen(s)-1;i>=0;i--){
    if(s[i]==' '){
      s[i]='\0';
    }
  }
}
int main(){
  char s[30];
  char first[10];
  int index=0;
  printf("Enter the name: ");
  scanf("%[^\n]%*c",s);
  cutLastName(s);
  printf("%s\n",s);

  return 0;
}
