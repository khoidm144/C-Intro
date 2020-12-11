#include<stdio.h>
void sortAll(int a[],int n){
  int temp;
  int i=0,j=0;
  for( i=0;i<n;i++){
    for(j=i+1;j<n;j++){
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
  int t=1;
  int fre=0;
  for(i=0;i<n-1;i++){
  	if(b[i+1]==b[i]){
  		t++;
	  }
	  else {
	  	printf("%d %d \n",b[i],t);
	  	fre=fre+t;
	  	t=1;  	
	  }
  }
  
  	printf("%d  %d\n",b[n-1],n-fre);
}
  
  




