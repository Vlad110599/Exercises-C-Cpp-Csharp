#include <math.h>
#include <stdio.h>
#include <conio.h>


int main()
{

   int mul[10];
   int n,i,d;

  printf("\nIntroduceti dim intervalului:");
  scanf("%d",&d);

  printf("\nCitire\n");
  for(i=0;i<d;i++)
  {
      printf("\nmul[%d]= ",i);
      scanf("%d",&mul[i]);
  }
  printf("\nAfisare\n");
  for(i=0;i<d;i++)
    printf("%d ",mul[i]);


   printf("\nn=");
   scanf("%d",&n);

   for(i=0;i<d;i++)
    if(n==mul[i])
      printf("\nNumarul %d se gaseste in interval!",n);

      getch();
}
