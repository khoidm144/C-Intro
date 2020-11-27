#include<stdio.h>
int count(char string[]);
int main(){
  char string[50];
  printf("Enter the String: \n");
  scanf("%[^\n]%*c",string);
  printf("The number of vowels in this string: %d\n",count(string));  

  return 0;
}
int count(char string[]){
  int count=0;
  for(int i=0;i<50;i++){
    if(string[i]=='a'||string[i]=='u'||string[i]=='e'||string[i]=='o'||string[i]=='i'||string[i]=='y'){
      count++;
    }
  }
  return count;

}
