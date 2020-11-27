#include<stdio.h>
int main(){
  int choice;
  do{
    printf("1. Thuc hien bai tap 8.1\n");
    printf("2. Thuc hien bai tap 8.2\n");
    printf("3. Thuc hien bai tap 8.3\n");
    printf("4. Thuc hien bai tap 8.4\n");
    printf("5. Thuc hien bai tap 8.5\n");
    printf("6. Thoat\n");
    do{
    printf("Lua chon cua ban (tu 1 toi 6): ");
    scanf("%d",&choice);}
    while(choice>6||choice<1);
    switch(choice){
    case 1:{
 printf("Excuting Exercise 8.%d\n",choice);
      int n;
  long ans=1;
  int i=1;
  printf("Input the number n: ");
  scanf("%d",&n);
  while(i<=n){
    ans=ans*i;
    i++;
  }
  printf("%d!=%ld\n",n,ans);

      break;}
    case 2 :{
      printf("Excuting Exercise 8.%d\n",choice);
     int n1;
  long ans1=1;
  int i1=1;
  char option1;
  do {
    printf("Input your option: \n");
    printf("1. Calculating the factorial.\n");
    printf("2. Quit\n");
    scanf(" %c",&option1);
    switch(option1){
    case '1':{
      do{
  printf("Input the positive  number n: ");
  scanf("%d",&n1);
      }while(n1<0);
  ans1=1;
  i1=1;
  while(i1<=n1){
    ans1=ans1*i1;
    i1++;
  }
  printf("%d!=%ld\n",n1,ans1);
  break;
  }
    
    case '2': break;
  
    }
  }while(option1!='2');
      break;
    }
    case 3 : {
       printf("Excuting Exercise 8.%d\n",choice);
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



      break;
    }
    case 4 : {
       printf("Excuting Exercise 8.%d\n",choice);

  char c,lastc='-';
  while((c=getchar())!='\t'){
    if(c==' '){
      if(lastc!=' '){
	putchar(c);
      }
    }
    else{
      putchar(c);
    }
    lastc=c;
  }



      break;
    }
    case 5 : {
       printf("Excuting Exercise 8.%d\n",choice);
int n2;
  double xk,xk1,dif;
  do{
    printf("Please input the positive number n: ");
    scanf("%d",&n2);
  }while(n2<=0);
  xk=n2;
  dif=xk;
  while(dif>0.0001){
    xk1=(xk+(double)n2/xk)/2;
    if(xk1-xk>0){
      dif=xk1-xk;
    }
    else{
      dif=xk-xk1;
    }
    xk=xk1;
  }
  printf("Square root of %d is %lf\n",n2,xk1);

      break;
    }
    case 6 : return 0;
    }

  }while(1);




  return 0;
}
