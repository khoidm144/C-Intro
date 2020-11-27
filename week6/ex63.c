#include<stdio.h>
int main(){
  int age;
  printf("Enter your age : ");
  scanf("%d",&age);
  if(age<=0||age>=200){
    printf("Not a valid age\n");
  }
  else{
  if(age<18){
    printf("Child\n");   
  }
  else if(18<=age&&age<65){
    // different from 18<=age<65
    printf("Adult\n");
  }
  else {
    printf("Senior Citizen\n");
  }
 }
  return 0;
}
