#include<stdio.h>
int years(int a,int b);
int main(){
  int ageFather,ageSon;
  do{
    printf("Input the age of Father: ");
    scanf("%d",&ageFather);
  }while(ageFather<15);
   do{
    printf("Input the age of Son: ");
    scanf("%d",&ageSon);
  }while(ageSon<=0||ageSon>ageFather-15||ageFather-2*ageSon<0);
   printf("Years taken for Father to have age double of his son's age: %d\n ",years(ageFather,ageSon));

}
int years(int a,int b){

  return a-2*b; 
}
