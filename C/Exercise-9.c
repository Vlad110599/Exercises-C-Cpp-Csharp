#include <stdio.h>
#include <conio.h>
#include <math.h>


int main(){

  float *A;
  float *B;
  float *C;

  int i,j,n,m;

  printf("n=");
  scanf("%d",&n);

  A=(float*)malloc(n*sizeof(float));

  printf("\nCitire valori A:");
  for(i=0;i<n;i++)
  {
     printf("\nA[%d]=",i);
     scanf("%f",A+i);
  }

  printf("\nAfisare valori A:");
  for(i=0;i<n;i++)
  {
     printf("\nA[%d]=%f",i,*(A+i));
  }

  printf("\nm=");
  scanf("%d",&m);

  B=(float*)malloc(m*sizeof(float));

  printf("\nCitire valori B:");
  for(i=0;i<m;i++)
  {
     printf("\nB[%d]=",i);
     scanf("%f",B+i);
  }

  printf("\nAfisare valori B:");
  for(i=0;i<m;i++)
  {
     printf("\nB[%d]=%f",i,*(B+i));
  }



}
