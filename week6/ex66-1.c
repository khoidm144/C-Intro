#include<stdio.h>
int main(){
  int age;
  printf("Enter your age : ");
  scanf("%d",&age);
  switch(age<18?0:((age>=18&&age<65)?1:2)){
  case 0:
    printf("Child\n");
    break;
    case 1:
      printf("Adult\n");
      break;
      case 2:
      printf("Senior Citizen\n");
      break;
  }
  return 0;
}
