#include<stdio.h>
int main(){
  int n;
  printf("Input N: ");
  scanf("%d",&n);
  for(int i=1;i<n;i++){
    int sum=0;
    for(int j=1;j<i;j++){
        if(i%j==0){
          sum=sum+j;
	}
      }
     	  if(sum==i){
            printf("%d\n",i);
	  }

  }
  return 0;
}
