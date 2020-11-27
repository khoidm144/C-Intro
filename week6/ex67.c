#include<stdio.h>
int main(){
  char type;
  double h;
  double OT=0;
  double a,b;
  scanf("%c",&type);
  scanf("%lf",&h);
  a=h;
  if(type=='C'){
    if(h>=2){
      a=2.0;
      OT=h-2.0;
	}
    printf("VEHICLE - TYPE: CAR\n");
    printf("TIME: %.2lf\n",h);
    printf("REGULAR FEE: %.2lf * 0.7= %.2lf\n",a,a*0.7);
    printf("OVERTIME: %.2lf * 2.5=%.2lf\n",OT,OT*2.5);
    b=a*0.7+OT*2.5;
   }
  else if(type=='B'){
    if(h>=2.0){
      a=2.0;
      OT=h-2.0;
	}
    printf("VEHICLE - TYPE: BUS\n");
    printf("TIME: %.2lf\n",h);
    printf("REGULAR FEE: %.2lf * 1.5= %.2lf\n",a,a*1.5);
    printf("OVERTIME: %.2lf * 2.0=%.2lf\n",OT,OT*2.0);
    b=a*1.5+OT*2.0;
   }
  else{
    if(h>=1.0){
      a=1.0;
      OT=h-1.0;
	}
    printf("VEHICLE - TYPE: TRUCK\n");
    printf("TIME: %.2lf\n",h);
    printf("REGULAR FEE: %.2lf * 2.5= %.2lf\n",a,a*2.5);
    printf("OVERTIME: %.2lf * 3.25=%.2lf\n",OT,OT*3.25);
    b=a*2.5+OT*3.25;
   }
  printf("Total: %.2lf\n",b);
  printf("Thank you");
  
  
    



  return 0;
}
