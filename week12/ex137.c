#include<stdio.h>
#include<string.h>
int main(){
  char s[5][30]={"TV127 31 inch Televison","CD057 CD Player","TA877 Abswering Machine","CS409 Car Stereo","PC655 Personal Computer"};
  char look[10];
  char *str;
  printf("Input the product number: ");
  scanf("%[^\n]%*c",look);
  for(int i=0;i<5;i++){
    str=strstr(s[i],look);
    if(str!=NULL){
      for(int i =0;i<strlen(str);i++){
	if(str[i]==' '){
	  for(int j=i+1;j<strlen(str);j++){
            printf("%c",str[j]);
	  }
	  printf("\n");
	  break;
	}
      }
    }
  }
  printf("\n");


  return 0;
}
