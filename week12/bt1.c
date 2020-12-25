#include<stdio.h>
#include<string.h>
void trimRight(char a[]){
  for(int i=strlen(a)-1;i>=0;i--){
    if(a[i]!=' '){
      a[i+1]='\0';
      break;
    }
  }
}
void trimLeft(char a[]){
  for(int i=0;i<strlen(a);i++){
    if(a[i]!=' '){
      break;
    }
    else{
      for(int j=i;j<strlen(a);j++){
        a[j]=a[j+1];
      }
      i--;
    }
  }
}
void trimMiddle(char a[]){
 for(int i=0;i<strlen(a)-1;i++){
   if(a[i]==' '&&a[i+1]==' '){
        for(int j=i;j<strlen(a);j++){
        a[j]=a[j+1];
      }
      i--;
   }
 }
}
int main(){
  char a[40];
  printf("Input the string: ");
  scanf("%[^\n]%*c",a);
  trimRight(a);
  trimLeft(a);
  trimMiddle(a);
  puts(a);



}
