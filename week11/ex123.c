#include<stdio.h>
int reverse1(int a[],int n){
  int temp=0;
  for(int i=0;i<n/2;i++){
    temp=a[i];
    a[i]=a[n-1-i];
    a[n-1-i]=temp;
  }
}
int reverse(int *a,int n){
  int temp=0;
  for(int i=0;i<n/2;i++){
    temp=*(a+i);
    *(a+i)=*(a+(n-1-i));
   *(a+(n-1-i))=temp;
  }
}




int main(){
 int n;
  do{
  printf("Input the size of array: ");
  scanf("%d",&n);
   }while(n<0);
 int  a[n];
  printf("Input the elements: ");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  reverse(a,n);
  for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
  int *p=a;
  reverse1(p,n);
  printf("\n");
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }
   printf("\n");
  return 0 ;
  
}
