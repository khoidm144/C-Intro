#include<stdio.h>
void reverse(double a[],int n){
  double temp;
  int j;
  for(int i=0, j=n-1;i<=j;i++,j--){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
  }

}
int main(){
  int n;
  int i;
  do{
    printf("Input the number of elements: ");
    scanf("%d",&n);
  }while(n<=0);
  double a[n];
  printf("Input the list of float numbers\n");
  for(i =0 ;i<n;i++){
    scanf("%lf",&a[i]);
  }
  reverse(a,n);
  printf("The reverse array: \n");
  for(i=0;i<n;i++){
    printf("%G\n",a[i]);
  }
  
  return 0;
}
