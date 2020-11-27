#include<stdio.h>
int main(){
  int n;
  printf("Input a number n: ");
  scanf("%d",&n);
  if(n==-1){
    return 0;
  }
  for(int i=2;i<=n;i++){
    int flag=1;
    for(int j=2;j<i;j++){
      if(i%j==0){
	flag=0;
    }
    }
      if(flag==1){
	printf("%d\n",i);
       }
  }



  return 0;
}
