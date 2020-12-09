#include <stdio.h>
#include <math.h>
#include <conio.h>


int main()
{
   int n,i;
   unsigned long long fac=1;

   printf("\nIntroduceti un numar ");
   scanf("%d",&n);

   if(n<0)
      printf("Nu se poate calcula factorialul cu acest numar!");
   else
     {
       for(i=1;i<n;i++)
        {
          fac*=i;
        }
        printf("\n%d! = %llu",n,fac);
     }

      getch();
     return 0;
}
