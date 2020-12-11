#include<stdio.h>
int main(){
  int i,j,z;
  int A[3][3],B[3][3],C[3][3];
  printf("Input the elements of A: \n");
  for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("A[%d][%d]: ",i+1,j+1);
      scanf("%d",&A[i][j]);
    }
  }
   printf("Input the elements of B: \n");
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("B[%d][%d]: ",i+1,j+1);
      scanf("%d",&B[i][j]);
    }
  }
   for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      C[i][j]=0;
      for(z=0;z<3;z++){
	C[i][j]+=A[i][z]*B[z][j];
      }
    }
   }
   printf("Matrix A: \n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%5d ",A[i][j]);
    }
    printf("\n");
  }
      printf("Matrix B: \n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%5d ",B[i][j]);
    }
    printf("\n");
  }
      printf("Matrix C: \n");
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
      printf("%5d ",C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
