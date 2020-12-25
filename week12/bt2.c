#include<stdio.h>
#include<string.h>
#include<ctype.h>
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
int standalizeName(char a[]){
  a[0]=toupper(a[0]);
  for(int i=1;i<strlen(a)-1;i++){
    if(a[i]==' '){
      a[i+1]=toupper(a[i+1]);
    }
  }
  for(int i=0;i<strlen(a)-1;i++){
    if(a[i]>='A'&&a[i]<='Z'){
      for(int j=i+1;j<strlen(a);j++){
	if(a[j]==' '){
          break;
	}
        a[j]=tolower(a[j]);
	
      }
    }
  }

}
int main(){
  char a[5][40];
  for(int i=0;i<5;i++){
    printf("Input the name of Student %d: ",i+1);
  scanf("%[^\n]%*c",a[i]);
  }
  for(int i=0;i<5;i++){
 trimRight(a[i]);
  trimLeft(a[i]);
  trimMiddle(a[i]);
  standalizeName(a[i]);
  puts(a[i]);
  }



  return 0;
}
