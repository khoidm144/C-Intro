#include<stdio.h>
int main(){
  int age;
  int n;
  double discounta=1,discountb=1,discountc=1;
  int p;
  char s[30];
  char c;
  printf("GALAXY CINEMA BILLING\n");
  printf("Number of Persions: ");
  scanf("%d",&n);
  if(n==1){
  printf("Enter your age No 1 : ");
  scanf("%d",&age);
  if(age<18){
    discounta=0.5;
    
  }
  else if(age>=65){
    discounta=0.3;
  }
  }
  else if(n==2){
     printf("Enter your age No 1 : ");
  scanf("%d",&age);
  if(age<18){
    discounta=0.5;
    
  }
  else if(age>=65){
    discounta=0.3;
  }
   printf("Enter your age No 2 : ");
  scanf("%d",&age);
  if(age<18){
    discountb=0.5;
    
  }
  else if(age>=65){
    discountb=0.3;
  }
  }
  else{
    printf("Enter your age No 1 : ");
  scanf("%d",&age);
  if(age<18){
    discounta=0.5;
    
  }
  else if(age>=65){
    discounta=0.3;
  }
   printf("Enter your age No 2 : ");
  scanf("%d",&age);
  if(age<18){
    discountb=0.5;
    
  }
  else if(age>=65){
    discountb=0.3;
  }
   printf("Enter your age No 3 : ");
  scanf("%d",&age);
  if(age<18){
    discountc=0.5;
    
  }
  else if(age>=65){
    discountc=0.3;
  }
  }
  printf("Title of movie: ");
  scanf("%s",s);
  fflush(stdin);
  printf("WEEL(E)ND OR WEE(D)DAY?: ");
  scanf("%c",&c);
  scanf("%c",&c);
  printf("%c",c);
  
  return 0;
}
