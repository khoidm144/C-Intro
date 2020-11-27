#include<stdio.h>
int main(){
  for(int i=2;i<=100;i++){
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
