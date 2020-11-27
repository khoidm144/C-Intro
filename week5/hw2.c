#include<stdio.h>
int main(){
  int numberOfIphone;
  int numberOfMacbook;
  char ip[]="iPhone";
  char mb[]="Macbook";
  char net[]="Net";
  printf("Ban muon mua bao nhieu iPhone? ");
  scanf("%d",&numberOfIphone);
  printf("Ban muon mua bao nhieu Macbook?");
  scanf("%d",&numberOfMacbook);
  printf("FPT SHOP-HOA DON THANH TOAN\n");
  printf("%-20s %d x 1000 = %d\n" ,ip,numberOfIphone,numberOfIphone*1000);
  printf("%-20s %d x 1500= %d\n",mb,numberOfMacbook,numberOfMacbook*1500);
  printf("%-20s\n",net);
  
  



  return 0;
  
}
