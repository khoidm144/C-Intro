#include<stdio.h>
void rotation11(int **a,int **b,int **c){
  int *temp;
  temp =*a;
  *a=*b;
  *b=*c;
  *c=temp;
}
void rotation2(int **a,int **b,int **c){
  int *temp = *a;
  *a=*b;
  *b=*c;
  *c=temp;
  
}

void rotation1(int *a,int *b,int *c){
  int temp;
  temp =*a;
  *a=*b;
  *b=*c;
  *c=temp;
}
int main(){
  int a=1,b=2,c=3;
  int *pa=&a,*pb=&b,*pc=&c;
  printf("The value of x y z : %d %d %d \n The value of p q r : %p %p %p \n The value of *p *q *r : %d %d %d \n",a,b,c,pa,pb,pc,*pa,*pb,*pc);
  rotation1(&a,&b,&c);
  printf("\n");
   printf("The value of x y z : %d %d %d \n The value of p q r : %p %p %p \n The value of *p *q *r : %d %d %d \n",a,b,c,pa,pb,pc,*pa,*pb,*pc);
   rotation2(&pa,&pb,&pc);
   printf("\n");
    printf("The value of x y z : %d %d %d \n The value of p q r : %p %p %p \n The value of *p *q *r : %d %d %d \n",a,b,c,pa,pb,pc,*pa,*pb,*pc);

}
