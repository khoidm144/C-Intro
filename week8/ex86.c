#include<stdio.h>
int main(){
  int sum=0;
  int grade=0;
  int count=0;
  while(1){
    printf("Input the grade: ");
    scanf("%d",&grade);
    if(grade<0){
      break;
    }
    sum=sum+grade;
    count++;
  }
  if(count==0){
    printf("Invalid Input\n");   
  }else{
    printf("The avarage inputted grades is: %lf\n",(double)sum/count);
  }
  return 0;
}
