#include<stdio.h>
int main(){
  int quantity;
  long price;
  char ISBN[20];
  char title[30];
  char Qty[]="Qty";
  char ISBNN[]="ISBN";
  char Title[]="Title";
  char Price[]="Price";
  char Total[]="Total";
  printf("Input the ISBN\n");
  scanf("%[^\n]%*c",ISBN);
  fflush(stdin);
  printf("Input the Title\n");\
  scanf("%[^\n]%*c",title);
    printf("Input the Price\n");
    scanf("%ld",&price);
    printf("Input the Quantity\n");
    scanf("%d",&quantity);
    printf("\n");
    printf("BK Bookseller\n");
    printf("%s%10s%20s%10s%10s",QTy,ISBNN,Title,Price,Total); 
    printf("----------------------------------------------------------------------------\n");
    printf("%10d%20s%10s%10%10ld\t%ld",quantity,ISBN,title,"",price,price*quantity);


  return 0;
}
