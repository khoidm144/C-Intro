#include<stdio.h>
double* maximum(double *a,int size){
  if(a==NULL){
    return NULL;
  }
  double *ans=a;
  for(int i=0;i<size;i++){
    if((*(a+i))>(*ans)){
      ans=a+i;
    }
  }
  return ans;

 
}
int main(){
 int n;
  do{
  printf("Input the size of array: ");
  scanf("%d",&n);
   }while(n<0);
 double  a[n];
  printf("Input the elements: ");
  for(int i=0;i<n;i++){
    scanf("%lf",&a[i]);
  }
  double *p = maximum(a,n);
  printf("The value of pointer: %lf and the value itself: %p",*p,p); 
  return 0;
}
