#include <math.h>
#include <conio.h>
#include <stdio.h>


int main()
{
   float a,b,c,delta,x1,x2;

   printf("\nCoeficientul lui x^2:\n");
   if(scanf("%f",&a)!=1)
      {
         printf("\nCoeficientul lui x^2 este incorect!\n");
         getch();
         return;
      }
    printf("\nCoeficientul lui x:");
   if(scanf("%f",&b)!=1)
      {
         printf("\nCoeficientul lui x este incorect!\n");
         getch();
         return;
      }
    printf("\ntermenul liber:");
   if(scanf("%f",&c)!=1)
      {
         printf("\nTermenul liber este incorect!\n");
         getch();
         return;
      }

    if(a==0 && b==0 && c==0)
       {
          printf("\nEcuatie nedeterminata!\n");
          getch();
          return;
       }
    if(a==0 && b==0)
      {
         printf("\nEcuatie inexistenta!\n");
         getch();
         return;
      }
    if(a==0)
    {
      printf("\nEcuatie de gradul I: \n");
      printf("\n Solutie: x= %.2f", -c/b);
      getch();
      return;
    }
    delta=b*b-4*a*c;
    if(delta<0)
    {
      printf("\nRadacini complexe\n");
      printf("\nx1= %.2f + %.2f*i",-b/(2*a),sqrt(-delta)/(2*a));
      printf("\nx2= %.2f - %.2f*i",-b/(2*a),sqrt(-delta)/(2*a));
      getch();
      return;
    }
    if(delta==0)
    {
       printf("\nO singura radacina!\n");
       printf("\nx1=x2= %.2f",-b/(2*a));
       getch();
       return;
    }
    printf("\nRadacini reale si distincte\n");
    printf("\nx1= %.2f",(-b+sqrt(delta))/(2*a));
    printf("\nx2= %.2f",(-b-sqrt(delta))/(2*a));
    getch();
}
