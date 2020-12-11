#include<stdio.h>
void sortAll(int a[]){
  int temp;
  for(int i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
      if(a[j]>=a[i]){
        temp=a[j];
	a[j]=a[i];
	a[i]=temp;
      }
    }
  }
}
int main(){
  
  int n,i,j;
  int x,y;
  int count=0,countLengthMax=0,countTemp=0;
  do{
    printf("Input the size of the array: ");
    scanf("%d",&n);
  }while(n<=0);
  int a[n],b[n];
  int count1[n][2];
  printf("Input the elements of the array:\n");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    b[i]=a[i];
    count1[i][0]=a[i];
    if(a[i]==0){
      count++;
      countTemp++;    
	if(countTemp>=countLengthMax){
	  countLengthMax=countTemp;
	}
    }
    else{
      countTemp=0;
    }
    for(x=0;x<i;x++){
      if(count1[x][0]==a[i]){
        if(count1[x][1]==0){
	  count1[x][1]=1;
      }
	else{
	  count1[x][1]++;
    }
      }
    }
  }
  sortAll(b,n);  
  printf("The number of number 0 in the array: %d\n",count);
  printf("The max length: %d\n",countLengthMax);
  for(i=0;i<n;i++){
    printf("%d %d\n",count1[i][0],count1[i][1]);
  }
  int t=1;
  for(i=1;i<n;i++){
    if(b[0]!=b[1]){
      printf("%d: 1",a[0]);
    }
      if(b[i]==b[i-1]){
	t++;
      }
      else {
        printf("%d : %d",b[i-1],t);
	t=1;
      }
    }
}
  
  



}
