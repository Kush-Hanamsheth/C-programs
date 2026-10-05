#include <stdio.h>
int main()
{
  int A[2][3], B[2][3], C[2][3];
  int i, j;
  printf("Enter elements of matrix A:\n");
  for(i=0 ; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
        scanf("%d" , &A[i][j]);
    }
  }
  printf("Enter elements of matrix B:\n");
  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
        scanf("%d", &B[i][j]);
    }
  } 
  for(i=0; i<2; i++)
  {
  for(j=0; j<3; j++)
  {
    C[i][j]= A[i][j] + B[i][j];
  }
  }
  printf("Addition of two matrices is:\n"); 
  for(i=0; i<2; i++)
  {
    for(j=0; j<3; j++)
    {
    printf("%d", C[i][j]);
    }
    printf("\n");  
  }
  return 0;
} 

