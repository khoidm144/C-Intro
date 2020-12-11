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
void sortOdd(int a[]){
 int temp;
  for(int i=0;i<9;i++){
    for(int j=i+1;j<10;j++){
      if(a[j]>=a[i]&&a[i]%2==1&&a[j]%2==1){
        temp=a[j];
	a[j]=a[i];
	a[i]=temp;
      }
    }
  }
}
int main(){
  int a[10],b[10];
  printf("Input the elements: \n");
  for(int i=0;i<10;i++){
    scanf("%d",&a[i]);
    b[i]=a[i];
  }
  sortAll(a);
  printf("Sorting all elements\n");
for(int  i=0;i<10;i++){
   printf("%d\n",a[i]);
  }
 sortOdd(b);
 printf("Sorting odd elements\n");
for(int  i=0;i<10;i++){
   printf("%d\n",b[i]);
  }
 
  

 return 0;
}
