#include<stdio.h>
int main(){
  int countPassed=0;
  // int countFailed=0;
  int count=1;
  int grade;
  while(count<=10){
    do{printf("Input the grade of Student %d (0-10): ",count);
      scanf("%d",&grade);}while(grade<0||grade>10);
    count++;
    if(grade>=4)countPassed++;
   
  }
  printf("There are %d Student(s) Passed and %d Student(s) Failed\n",countPassed,10-countPassed);



  return 0;
}
