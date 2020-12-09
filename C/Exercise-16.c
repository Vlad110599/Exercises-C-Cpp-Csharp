#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <malloc.h>


int *citire(int *n,int *m)
   {
      int i,j;
      int **mat;
      printf("\n nr.coloane= ");
      scanf("%d",n);
      printf("\n nr.coloane= ");
      scanf("%d",m);

      mat=(int*)malloc(*n*sizeof(int));
      for(i=0;i<*n;i++)
        mat[i]=(int*)malloc(*m*sizeof(int));

        for(i=0;i<*n;i++)
          for(j=0;j<*m;j++)
            {
               printf("\nmat[%d][%d]=",i,j);
               scanf("%d",&mat[i][j]);
            }
            return mat;

   }
void afisare(int **mat,int n,int m)
  {
    int i,j;
    for(i=0;i<n;i++)
     {
        printf("\n");
       for(j=0;j<m;j++)
       printf("%5d",mat[i][j]);
     }

  }
 void free(int **mat,int n)
 {
     int i;
     printf("\nEliberare memorie\n");
     for(i-0;i<n;i++)
        free(mat[i]);
     free(mat);
 }

 int main()
 {
   int **mat;
   int linii,coloane;
   mat=citire(&linii,&coloane);
   afisare(mat,linii,coloane);
   free(mat,linii);
 }
