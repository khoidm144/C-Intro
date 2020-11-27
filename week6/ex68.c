#include<stdio.h>
int main(){
  int m;
  printf("Enter the month:");
  scanf("%d",&m);
  switch(m){
  case 2:
    printf("29 or 28 days\n");
    break;
  case 1: case 3: case 5: case 7: case 8: case 10:case 12:
    printf("31 days\n");
    break;
  case 4: case 6: case 9: 
    printf("30 days\n");break;
  default:
    printf("Invalid\n");

  }


  return 0;
}
